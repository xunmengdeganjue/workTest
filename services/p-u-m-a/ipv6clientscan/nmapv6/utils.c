

#include "utils.h"





/* Compares two sockaddr_storage structures with a return value like strcmp.
   First the address families are compared, then the addresses if the families
   are equal. The structures must be real full-length sockaddr_storage
   structures, not something shorter like sockaddr_in. */
int sockaddr_storage_cmp(const struct sockaddr_storage *a,
  const struct sockaddr_storage *b) {
  if (a->ss_family < b->ss_family)
    return -1;
  else if (a->ss_family > b->ss_family)
    return 1;
  if (a->ss_family == AF_INET) {
    struct sockaddr_in *sin_a = (struct sockaddr_in *) a;
    struct sockaddr_in *sin_b = (struct sockaddr_in *) b;
    if (sin_a->sin_addr.s_addr < sin_b->sin_addr.s_addr)
      return -1;
    else if (sin_a->sin_addr.s_addr > sin_b->sin_addr.s_addr)
      return 1;
    else
      return 0;
  } else if (a->ss_family == AF_INET6) {
    struct sockaddr_in6 *sin6_a = (struct sockaddr_in6 *) a;
    struct sockaddr_in6 *sin6_b = (struct sockaddr_in6 *) b;
    return memcmp(sin6_a->sin6_addr.s6_addr, sin6_b->sin6_addr.s6_addr,
                  sizeof(sin6_a->sin6_addr.s6_addr));
  } else {
    assert(0);
  }
  return 0; /* Not reached */
}


void zmem(void *mem, size_t n)
{
    memset(mem, 0, n);
}

/* adds newline for you */
void bye(const char *fmt, ...)
{
    va_list ap;

    fprintf(stderr, "%s: ", NCAT_NAME);
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, " QUITTING.\n");
    fflush(stderr);

    exit(2);
}
/* Use this to print debug or diagnostic messages to avoid polluting the user
   stream. */
void loguser(const char *fmt, ...)
{
    va_list ap;

    fprintf(stderr, "%s: ", NCAT_NAME);
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fflush(stderr);
}
void *safe_malloc(size_t size) {
  void *mymem;

  if ((int)size < 0)            /* Catch caller errors */
    fatal("Tried to malloc negative amount of memory!!!");
  mymem = malloc(size);
  if (mymem == NULL)
    fatal("Malloc Failed! Probably out of space.");
  return mymem;
}

void *safe_realloc(void *ptr, size_t size) {
  void *mymem;

  if ((int)size < 0)            /* Catch caller errors */
    fatal("Tried to realloc negative amount of memory!!!");
  mymem = realloc(ptr, size);
  if (mymem == NULL)
    fatal("Realloc Failed! Probably out of space.");
  return mymem;
}

/* Zero-initializing version of safe_malloc */
void *safe_zalloc(size_t size) {
  void *mymem;

  if ((int)size < 0)
    fatal("Tried to malloc negative amount of memory!!!");
  mymem = calloc(1, size);
  if (mymem == NULL)
    fatal("Malloc Failed! Probably out of space.");
  return mymem;
}

/* Add whitespace-separated host specifications from fd into the address set.
   Returns 1 on success, 0 on error. */
int addrset_add_file(struct addrset *set, FILE *fd, int af, int dns)
{
    char buf[1024];
    int c, i;

    for (;;) {
        /* Skip whitespace. */
        while ((c = getc(fd)) != EOF) {
            if (!isspace(c))
                break;
        }
        if (c == EOF)
            break;
        ungetc(c, fd);

        i = 0;
        while ((c = getc(fd)) != EOF) {
            if (isspace(c))
                break;
            if (i + 1 > sizeof(buf) - 1) {
                /* Truncate the specification to give a little context. */
                buf[11] = '\0';
                log_user("Host specification starting with \"%s\" is too long.\n", buf);
                return 0;
            }
            buf[i++] = c;
        }
        buf[i] = '\0';

        if (!addrset_add_spec(set, buf, af, dns))
            return 0;
    }

    return 1;
}

/* Add a host specification into the address set. Returns 1 on success, 0 on
   error. */
int addrset_add_spec(struct addrset *set, const char *spec, int af, int dns)
{
    char *local_spec;
    char *netmask_s;
    char *tail;
    long netmask_bits;
    struct addrinfo *addrs, *addr;
    struct addrset_elem *elem;
    int rc;

    /* Make a copy of the spec to mess with. */
    local_spec = strdup(spec);
    if (local_spec == NULL)
        return 0;

    /* Read the CIDR netmask bits, if present. */
    netmask_s = strchr(local_spec, '/');
    if (netmask_s == NULL) {
        /* A negative value means unspecified; default depends on the address
           family. */
        netmask_bits = -1;
    } else {
        *netmask_s = '\0';
        netmask_s++;
        errno = 0;
        netmask_bits = parse_long(netmask_s, &tail);
        if (errno != 0 || *tail != '\0' || tail == netmask_s) {
            log_user("Error parsing netmask in \"%s\".\n", spec);
            free(local_spec);
            return 0;
        }
    }

    elem = (struct addrset_elem *) safe_malloc(sizeof(*elem));
    memset(elem->u.ipv4.bits, 0, sizeof(elem->u.ipv4.bits));

    /* Check if this is an IPv4 address, with optional ranges and wildcards. */
    if (parse_ipv4_ranges(elem, local_spec)) {
        if (netmask_bits > 32) {
            log_user("Illegal netmask in \"%s\". Must be between 0 and 32.\n", spec);
            free(local_spec);
            free(elem);
            return 0;
        }
        apply_ipv4_netmask_bits(elem, netmask_bits);
        log_debug("Add IPv4 range %s/%ld to addrset.\n", local_spec, netmask_bits > 0 ? netmask_bits : 32);
        elem->type = ADDRSET_TYPE_IPV4_BITVECTOR;
        elem->next = set->head;
        set->head = elem;
        free(local_spec);
        return 1;
    } else {
        free(elem);
    }

    /* When all else fails, resolve the name. */
    rc = resolve_name(local_spec, &addrs, af, dns);
    if (rc != 0) {
        log_user("Error resolving name \"%s\": %s\n", local_spec, gai_strerror(rc));
        free(local_spec);
        return 0;
    }
    if (addrs == NULL)
        log_user("Warning: no addresses found for %s.\n", local_spec);
    free(local_spec);

    /* Walk the list of addresses and add them all to the set with netmasks. */
    for (addr = addrs; addr != NULL; addr = addr->ai_next) {
        char addr_string[128];

        elem = (struct addrset_elem *) safe_malloc(sizeof(*elem));
        memset(elem->u.ipv4.bits, 0, sizeof(elem->u.ipv4.bits));

        address_to_string(addr->ai_addr, addr->ai_addrlen, addr_string, sizeof(addr_string));

        /* Note: it is possible that in this loop we are dealing with addresses
           of more than one family (e.g., IPv4 and IPv6). But we have at most
           one netmask value for all of them. Whatever netmask we have is
           applied blindly to whatever addresses there are, which may not be
           what you want if a /24 is applied to IPv6 and will cause an error if
           a /120 is applied to IPv4. */
        if (addr->ai_family == AF_INET) {
            const struct sockaddr_in *sin = (struct sockaddr_in *) addr->ai_addr;
            uint8_t octets[4];

            elem->type = ADDRSET_TYPE_IPV4_BITVECTOR;

            in_addr_to_octets(&sin->sin_addr, octets);
            BIT_SET(elem->u.ipv4.bits[0], octets[0]);
            BIT_SET(elem->u.ipv4.bits[1], octets[1]);
            BIT_SET(elem->u.ipv4.bits[2], octets[2]);
            BIT_SET(elem->u.ipv4.bits[3], octets[3]);

            if (netmask_bits > 32) {
                log_user("Illegal netmask in \"%s\". Must be between 0 and 32.\n", spec);
                free(elem);
                return 0;
            }
            apply_ipv4_netmask_bits(elem, netmask_bits);
            log_debug("Add IPv4 %s/%ld to addrset.\n", addr_string, netmask_bits > 0 ? netmask_bits : 32);

#ifdef HAVE_IPV6
        } else if (addr->ai_family == AF_INET6) {
            const struct sockaddr_in6 *sin6 = (struct sockaddr_in6 *) addr->ai_addr;

            elem->type = ADDRSET_TYPE_IPV6_NETMASK;

            elem->u.ipv6.addr = sin6->sin6_addr;

            if (netmask_bits > 128) {
                log_user("Illegal netmask in \"%s\". Must be between 0 and 128.\n", spec);
                free(elem);
                return 0;
            }
            make_ipv6_netmask(&elem->u.ipv6.mask, netmask_bits);
            log_debug("Add IPv6 %s/%ld to addrset.\n", addr_string, netmask_bits > 0 ? netmask_bits : 128);
#endif
        } else {
            log_debug("ignoring address %s for %s. Family %d socktype %d protocol %d.\n", addr_string, spec, addr->ai_family, addr->ai_socktype, addr->ai_protocol);
            free(elem);
            continue;
        }

        elem->next = set->head;
        set->head = elem;
    }

    if (addrs != NULL)
        freeaddrinfo(addrs);

    return 1;
}

void die(int err)
{
	// Not enough arguments
	ServiceStatus.dwCurrentState  = SERVICE_STOPPED;
	ServiceStatus.dwWin32ExitCode = err;
	SetServiceStatus(hStatus, &ServiceStatus);
}
int Open(const char *pathname, int flags, mode_t mode)
{
    int ret;

    ret = open(pathname, flags, mode);
    if (ret < 0)
        die("open");

    return ret;
}

int ncat_openlog(const char *logfile, int append)
{
    if (append)
        return Open(logfile, O_WRONLY | O_CREAT | O_APPEND, 0664);
    else
        return Open(logfile, O_WRONLY | O_CREAT | O_TRUNC, 0664);
}



