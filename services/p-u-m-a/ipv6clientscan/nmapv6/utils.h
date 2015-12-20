
#ifndef __UTILS_H__
#define __UTILS_H__



void usleep(unsigned long usec);
int gettimeofday(struct timeval *tv, struct timeval *tz);
unsigned int sleep(unsigned int seconds);

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




























#endif
