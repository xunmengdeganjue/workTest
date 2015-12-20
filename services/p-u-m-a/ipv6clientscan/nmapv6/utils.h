
#ifndef __UTILS_H__
#define __UTILS_H__


#include <time.h>
#include <sys/select.h>
#include <limits.h>
#include <arpa/inet.h>




typedef unsigned long bitvector_t;
/* A 256-element bit vector, representing legal values for one octet. */
typedef bitvector_t octet_bitvector[(256 - 1) / (sizeof(unsigned long) * CHAR_BIT) + 1];

enum addrset_elem_type {
    ADDRSET_TYPE_IPV4_BITVECTOR,
#ifdef HAVE_IPV6
    ADDRSET_TYPE_IPV6_NETMASK,
#endif
};


/* A chain of tests for set inclusion. If one test is passed, the address is in
   the set. */
struct addrset_elem {
    enum addrset_elem_type type;
    union {
        struct {
            /* A bit vector for each address octet. */
            octet_bitvector bits[4];
        } ipv4;
#ifdef HAVE_IPV6
        struct {
            struct in6_addr addr;
            struct in6_addr mask;
        } ipv6;
#endif
    } u;
    struct addrset_elem *next;
};

/* addrset management functions and definitions */
/* A set of addresses. Used to match against allow/deny lists. */
struct addrset_elem;

/* A set of addresses. Used to match against allow/deny lists. */
struct addrset {
    /* Linked list of struct addset_elem. */
    struct addrset_elem *head;
};

enum exec_mode {
    EXEC_PLAIN,
    EXEC_SHELL,
    EXEC_LUA,
};

struct options{
    unsigned short portno;

    int verbose;
    int debug;
    char *target;
    int af;
    /* IPPROTO_TCP, IPPROTO_SCTP, or IPPROTO_UDP */
    int proto;
    int broker;
    int listen;
    int keepopen;
    int sendonly;
    int recvonly;
    int noshutdown;
    int telnet;
    int linedelay;
    int chat;
    int nodns;
    const char *normlog;
    const char *hexlog;
    int normlogfd;
    int hexlogfd;
    int append;
    int idletimeout;
    int crlf;
    /* Were any hosts specifically allowed? If so, deny all others. */
    int allow;
    int deny;
    struct addrset allowset;
    struct addrset denyset;
    int httpserver;
    int nsock_engine;
    /* Output messages useful for testing to stderr? */
    int test;

    /* Loose source-routing stuff */
    struct in_addr srcrtes[8];
    int numsrcrtes;
    int srcrteptr;

    /* Maximum number of simultaneous connections */
    int conn_limit;
    int conntimeout;

    /* When execmode == EXEC_LUA, cmdexec is the name of the file to run. */
    char *cmdexec;
    enum exec_mode execmode;
    char *proxy_auth;
    char *proxytype;
    char *proxyaddr;

    int ssl;
    char *sslcert;
    char *sslkey;
    int sslverify;
    char *ssltrustfile;
    char *sslciphers;
}


extern struct options o;

/* The time the program was started, for exit statistics in connect mode. */
extern struct timeval start_time;


void options_init(void);
static int resolve_internal(const char *hostname, unsigned short port,
    struct sockaddr_storage *ss, size_t *sslen, int af, int addl_flags);
int resolve(const char *hostname, unsigned short port,
    struct sockaddr_storage *ss, size_t *sslen, int af);
int fdinfo_close(struct fdinfo *fdn);
int fdinfo_recv(struct fdinfo *fdn, char *buf, size_t size);
int fdinfo_pending(struct fdinfo *fdn);
int ncat_recv(struct fdinfo *fdn, char *buf, size_t size, int *pending);
int fdinfo_send(struct fdinfo *fdn, const char *buf, size_t size);
static int blocking_fdinfo_send(struct fdinfo *fdn, const char *buf, size_t size);
int ncat_send(struct fdinfo *fdn, const char *buf, size_t size);
int ncat_broadcast(fd_set *fds, const fd_list_t *fdlist, const char *msg, size_t size);
void dotelnet(int s, unsigned char *buf, size_t bufsiz);
int ncat_delay_timer(int delayval);
static int ncat_hexdump(int logfd, const char *data, int len);
void ncat_log_send(const char *data, size_t len);
void ncat_log_recv(const char *data, size_t len);
static int ncat_hexdump(int logfd, const char *data, int len);
int getaddrfamily(const char *addr);
void setup_environment(struct fdinfo *info);

void usleep(unsigned long usec);
int gettimeofday(struct timeval *tv, struct timeval *tz);
unsigned int sleep(unsigned int seconds);


void bye(const char *fmt, ...);
void zmem(void *mem, size_t n);







#endif
