#ifndef __STATE_H__
#define __STATE_H__

#include <libubox/uloop.h>
#include <stdlib.h>
#include <string.h>
//#include <sys/types.h>
//#include <sys/stat.h>
#include <unistd.h> //for close()
//#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define MAC_LENGTH 6
#define LOCAL_INTERFACE "eth0"
#define ARP_CHECK_INTERVAL (2*1000)
#define ARP_RETRY_MAXUM 3

typedef struct state_machine{
	int state;
	void (*start)(void);
	void (*run)(void);
}STATE;

enum{
	P_START = 0,
	P_RUNNING = 1,
	P_ERROR = 2,
	P_END = 3,
	P_MAX
};
typedef struct p_info{
	int p_state;
	int arp_count;
	int arp_fd;
	unsigned int local_ip;
	unsigned int gwip;
	unsigned char ifmac[MAC_LENGTH];
	struct uloop_fd arp_uloopfd;
	struct uloop_timeout arp_tmot;
	int arp_check_interval;
}P_INFO;


void arp_start(void);
void arp_process_start(void);
void run_arp_checking(void);
void display_error(void);
void restart_process(void);
void set_p_state(int state);

#endif