/***************************************************************************
 * ncat_main.c -- main function: option parsing and checking, dispatching  *
 * to mode-specific functions.                                             *
 ***************************************************************************/


//#include "nsock.h"
//#include "ncat.h"
#include "utils.h"
//#include "sys_wrap.h"
#include <string.h>
#include <getopt.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>


static int ncat_connect_mode(void);
static int ncat_listen_mode(void);

/* Determines if it's parsing HTTP or SOCKS by looking at defport */
static size_t parseproxy(char *str, struct sockaddr_storage *ss,
    size_t *sslen, unsigned short *portno)
{
    char *c = strrchr(str, ':'), *ptr;
    int rc;

    ptr = str;

    if (c)
        *c = 0;

    if (c && strlen((c + 1)))
        *portno = (unsigned short) atoi(c + 1);

    rc = resolve(ptr, *portno, ss, sslen, o.af);
    if (rc != 0) {
        loguser("Could not resolve proxy \"%s\": %s.\n", ptr, gai_strerror(rc));
        if (o.af == AF_INET6 && *portno)
            loguser("Did you specify the port number? It's required for IPv6.\n");
        exit(EXIT_FAILURE);
    }

    return *sslen;
}

/* These functions implement a simple linked list to hold allow/deny
   specifications until the end of option parsing. */
struct host_list_node {
    /* If false, then spec is the name of a file containing host patterns. */
    int is_filename;
    char *spec;
    struct host_list_node *next;
};

static void host_list_add_spec(struct host_list_node **list, char *spec)
{
    struct host_list_node *node = (struct host_list_node *) safe_malloc(sizeof(*node));
    node->is_filename = 0;
    node->spec = spec;
    node->next = *list;
    *list = node;
}

static void host_list_add_filename(struct host_list_node **list, char *filename)
{
    struct host_list_node *node = (struct host_list_node *) safe_malloc(sizeof(*node));
    node->is_filename = 1;
    node->spec = filename;
    node->next = *list;
    *list = node;
}

static void host_list_free(struct host_list_node *list)
{
    struct host_list_node *next;
    for ( ; list != NULL; list = next) {
        next = list->next;
        free(list);
    }
}

static void host_list_to_set(struct addrset *set, struct host_list_node *list)
{
    struct host_list_node *node;

    for (node = list; node != NULL; node = node->next) {
        if (node->is_filename) {
            FILE *fd;

            fd = fopen(node->spec, "r");
            if (fd == NULL)
                bye("can't open %s: %s.", node->spec, strerror(errno));
            if (!addrset_add_file(set, fd, o.af, !o.nodns))
                bye("error in hosts file %s.", node->spec);
            fclose(fd);
        } else {
            char *spec, *commalist;

            commalist = node->spec;
            while ((spec = strtok(commalist, ",")) != NULL) {
                commalist = NULL;
                if (!addrset_add_spec(set, spec, o.af, !o.nodns))
                    bye("error in host specification \"%s\".", node->spec);
            }
        }
    }
}

static void print_banner(void)
{
    loguser("Version %s ( %s )\n", NCAT_VERSION, NCAT_URL);
}

int main(int argc, char *argv[])
{
    /* We have to buffer the lists of hosts to allow and deny until after option
       parsing is done. Adding hosts to an addrset can require name resolution,
       which may differ as a result of options like -n and -6. */
    struct host_list_node *allow_host_list = NULL;
    struct host_list_node *deny_host_list = NULL;

	unsigned short proxyport = DEFAULT_PROXY_PORT;
    int srcport = -1;
    char *source = NULL;

    struct option long_options[] = {
        {"4",               no_argument,        NULL,         '4'},
        {"6",               no_argument,        NULL,         '6'},
        {0, 0, 0, 0}
    };

    gettimeofday(&start_time, NULL);
    /* Set default options. */
    options_init();

    while (1) {
        /* handle command line arguments */
        int option_index;
        int c = getopt_long(argc, argv, "46",
                            long_options, &option_index);

        /* That's the end of the options. */
        if (c == -1)
            break;

        switch (c) {
        case '4':
            o.af = AF_INET;
            break;
        case '6':
#ifdef HAVE_IPV6
            o.af = AF_INET6;
#else
            bye("-6 chosen when IPv6 wasn't compiled in.");
#endif
            break;
        case 'h':
            printf("%s %s ( %s )\n", NCAT_NAME, NCAT_VERSION, NCAT_URL);
            printf(
"Usage: ncat [options] [hostname] [port]\n"
"\n"
"Options taking a time assume seconds. Append 'ms' for milliseconds,\n"
"'s' for seconds, 'm' for minutes, or 'h' for hours (e.g. 500ms).\n"
"  -4                         Use IPv4 only\n"
"  -6                         Use IPv6 only\n"
"      --version              Display Ncat's version information and exit\n"
"\n"
"See the ncat(1) manpage for full options, descriptions and usage examples\n"
            );
            exit(EXIT_SUCCESS);
        case '?':
            /* Consider unrecognised parameters/arguments as fatal. */
            bye("Try `--help' or man(1) ncat for more information, usage options and help.");
        default:
            /* We consider an unrecognised option fatal. */
            bye("Unrecognised option.");
        }
    }

    if (o.normlog)
        o.normlogfd = ncat_openlog(o.normlog, o.append);
    if (o.hexlog)
        o.hexlogfd = ncat_openlog(o.hexlog, o.append);

    if (o.verbose)
        print_banner();

    if (o.debug)
        nbase_set_log(loguser, logdebug);
    else
        nbase_set_log(loguser, NULL);


    /* Will be AF_INET or AF_INET6 or AF_UNIX when valid */
    memset(&targetss.storage, 0, sizeof(targetss.storage));
    targetss.storage.ss_family = AF_UNSPEC;
    srcaddr.storage = targetss.storage;

    /* Clear the listenaddrs array */
    int i;
    for (i = 0; i < NUM_LISTEN_ADDRS; i++) {
        listenaddrs[i].storage = targetss.storage;
    }

    if (o.proxyaddr) {
        if (!o.proxytype)
            o.proxytype = Strdup("http");

        if (!strcmp(o.proxytype, "http") ||
            !strcmp(o.proxytype, "socks4") || !strcmp(o.proxytype, "4") ||
            !strcmp(o.proxytype, "socks5") || !strcmp(o.proxytype, "5")) {
            /* Parse HTTP/SOCKS proxy address and store it in targetss.
             * If the proxy server is given as an IPv6 address (not hostname),
             * the port number MUST be specified as well or parsing will break
             * (due to the colons in the IPv6 address and host:port separator).
             */

            targetsslen = parseproxy(o.proxyaddr,
                &targetss.storage, &targetsslen, &proxyport);
            if (o.af == AF_INET) {
                targetss.in.sin_port = htons(proxyport);
            } else { // might modify to else if and test AF_{INET6|UNIX|UNSPEC}
                targetss.in6.sin6_port = htons(proxyport);
            }
        } else {
            bye("Invalid proxy type \"%s\".", o.proxytype);
        }

        if (o.listen)
            bye("Invalid option combination: --proxy and -l.");
    } else {
        if (o.proxytype) {
            if (!o.listen)
                bye("Proxy type (--proxy-type) specified without proxy address (--proxy).");
            if (strcmp(o.proxytype, "http"))
                bye("Invalid proxy type \"%s\".", o.proxytype);
        }
    }

    /* Default port */
    if (o.listen && o.proxytype && !o.portno && srcport == -1)
        o.portno = DEFAULT_PROXY_PORT;
    else
        o.portno = DEFAULT_NCAT_PORT;

    /* Resolve the given source address */
    if (source) {
        int rc = 0;

        if (o.listen)
            bye("-l and -s are incompatible.  Specify the address and port to bind to like you would a host to connect to.");
        rc = resolve(source, 0, &srcaddr.storage, &srcaddrlen, o.af);
        if (rc != 0)
            bye("Could not resolve source address \"%s\": %s.", source, gai_strerror(rc));
    }

    host_list_to_set(&o.allowset, allow_host_list);
    host_list_free(allow_host_list);
    host_list_to_set(&o.denyset, deny_host_list);
    host_list_free(deny_host_list);

    if (optind == argc) {
        /* Listen defaults to any address and DEFAULT_NCAT_PORT */
        if (!o.listen)
            bye("You must specify a host to connect to.");
    } else {
        /* Resolve hostname if we're given one */
        if (strspn(argv[optind], "0123456789") != strlen(argv[optind])) {
            int rc;

            o.target = argv[optind];
            /* resolve hostname only if o.proxytype == NULL
             * targetss contains data already and you don't want remove them
             */
            if( !o.proxytype
                && (rc = resolve(o.target, 0, &targetss.storage, &targetsslen, o.af)) != 0)

                bye("Could not resolve hostname \"%s\": %s.", o.target, gai_strerror(rc));
            optind++;
        } else {
            if (!o.listen)
                bye("You must specify a host to connect to.");
        }
    }

    /* Whatever's left is the port number; there should be at most one. */

    if (optind + 1 < argc || (o.listen && srcport != -1 && optind + 1 == argc)) {
        loguser("Got more than one port specification:");
        if (o.listen && srcport != -1)
            loguser_noprefix(" %d", srcport);
        for (; optind < argc; optind++)
            loguser_noprefix(" %s", argv[optind]);
        loguser_noprefix(". QUITTING.\n");
        exit(2);
    } else if (optind + 1 == argc) {
        long long_port;

        errno = 0;
        long_port = strtol(argv[optind], NULL, 10);
        if (errno != 0 || long_port <= 0 || long_port > 65535)
            bye("Invalid port number \"%s\".", argv[optind]);

        o.portno = (unsigned short) long_port;
    }

    if (o.proxytype && !o.listen)
        ; /* Do nothing - port is already set to proxyport  */
    else if (targetss.storage.ss_family == AF_INET)
        targetss.in.sin_port = htons(o.portno);
#ifdef HAVE_IPV6
    else if (targetss.storage.ss_family == AF_INET6)
        targetss.in6.sin6_port = htons(o.portno);
#endif
    else if (targetss.storage.ss_family == AF_UNSPEC)
        ; /* Leave unspecified. */
    else
        bye("Unknown address family %d.", targetss.storage.ss_family);

    if (srcport != -1) {
        if (o.listen) {
            /* Treat "ncat -l -p <port>" the same as "ncat -l <port>" for nc
               compatibility. */
            o.portno = srcport;
        } else {
            if (srcaddr.storage.ss_family == AF_UNSPEC) {
                /* We have a source port but not an explicit source address;
                   fill in an unspecified address of the same family as the
                   target. */
                srcaddr.storage.ss_family = targetss.storage.ss_family;
                if (srcaddr.storage.ss_family == AF_INET)
                    srcaddr.in.sin_addr.s_addr = INADDR_ANY;
                else if (srcaddr.storage.ss_family == AF_INET6)
                    srcaddr.in6.sin6_addr = in6addr_any;
            }
            if (srcaddr.storage.ss_family == AF_INET)
                srcaddr.in.sin_port = htons(srcport);
#ifdef HAVE_IPV6
            else
                srcaddr.in6.sin6_port = htons(srcport);
#endif
        }
    }

    if (o.proto == IPPROTO_UDP) {
        /* Don't allow a false sense of security if someone tries SSL over UDP. */
        if (o.ssl)
            bye("UDP mode does not support SSL.");
        if (o.keepopen && o.cmdexec == NULL)
            bye("UDP mode does not support the -k or --keep-open options, except with --exec or --sh-exec.");
        if (o.broker)
            bye("UDP mode does not support connection brokering.\n\
If this feature is important to you, write dev@nmap.org with a\n\
description of how you intend to use it, as an aid to deciding how UDP\n\
connection brokering should work.");
    }

    /* Do whatever is necessary to receive \n for line endings on input from
       the console. A no-op on Unix. */
    set_lf_mode();

    if (o.listen)
        return ncat_listen_mode();
    else
        return ncat_connect_mode();
}

/* connect error handling and operations. */
static int ncat_connect_mode(void)
{
    /*
     * allow/deny commands with connect make no sense. If you don't want to
     * connect to a host, don't try to.
     */
    if (o.allow || o.deny)
        bye("Invalid option combination: allow/deny with connect.");

    /* o.conn_limit with 'connect' doesn't make any sense. */
    if (o.conn_limit != -1)
        bye("Invalid option combination: `--max-conns' with connect.");

    if (o.chat)
        bye("Invalid option combination: `--chat' with connect.");

    if (o.keepopen)
        bye("Invalid option combination: `--keep-open' with connect.");

    return ncat_connect();
}

static int ncat_listen_mode(void)
{
    /* Can't 'listen' AND 'connect' to a proxy server at the same time. */
    if (o.proxyaddr != NULL)
        bye("Invalid option combination: --proxy and -l.");

    if (o.broker && o.cmdexec != NULL)
        bye("Invalid option combination: --broker and -e.");

    if (o.proxytype != NULL && o.telnet)
        bye("Invalid option combination: --telnet has no effect with --proxy-type.");

    if (o.conn_limit != -1 && !(o.keepopen || o.broker))
        loguser("Warning: Maximum connections ignored, since it does not take "
                "effect without -k or --broker.\n");

    /* Set the default maximum simultaneous TCP connection limit. */
    if (o.conn_limit == -1)
        o.conn_limit = DEFAULT_MAX_CONNS;

#ifndef WIN32
    /* See if the shell is executable before we get deep into this */
    if (o.execmode == EXEC_SHELL && access("/bin/sh", X_OK) == -1)
        bye("/bin/sh is not executable, so `-c' won't work.");
#endif

    if (targetss.storage.ss_family != AF_UNSPEC) {
        listenaddrs[num_listenaddrs++] = targetss;
    } else {
        size_t ss_len;
        int rc;

        /* No command-line address. Listen on IPv4 or IPv6 or both. */
        /* Try to bind to IPv6 first; on AIX a bound IPv4 socket blocks an IPv6
           socket on the same port, despite IPV6_V6ONLY. */
#ifdef HAVE_IPV6
        if (o.af == AF_INET6 || o.af == AF_UNSPEC) {
            ss_len = sizeof(listenaddrs[num_listenaddrs]);
            rc = resolve("::", o.portno, &listenaddrs[num_listenaddrs].storage, &ss_len, AF_INET6);
            if (rc == 0)
                num_listenaddrs++;
            else if (o.debug > 0)
                logdebug("Failed to resolve default IPv6 address: %s\n", gai_strerror(rc));
        }
#endif
        if (o.af == AF_INET || o.af == AF_UNSPEC) {
            ss_len = sizeof(listenaddrs[num_listenaddrs]);
            rc = resolve("0.0.0.0", o.portno, &listenaddrs[num_listenaddrs].storage, &ss_len, AF_INET);
            if (rc != 0)
                bye("Failed to resolve default IPv4 address: %s.", gai_strerror(rc));
            num_listenaddrs++;
        }
    }

    if (o.proxytype) {
        if (strcmp(o.proxytype, "http") == 0)
            o.httpserver = 1;
    }

    /* Fire the listen/select dispatcher for bog-standard listen operations. */
    return ncat_listen();
}
