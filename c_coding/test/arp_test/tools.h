#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <stdio.h>
#include <string.h> //for strchr
#include <sys/ioctl.h> 	//for SIOCGIFADDR
#include <netinet/in.h> //for 'struct sockaddr_in'
#include <net/if.h> //for struct ifreq ifr
#include <arpa/inet.h>

#include <unistd.h> //for close()

/*for get_ipaddr_by_ifname*/
#define sin_addr(s) (((struct sockaddr_in *)(s))->sin_addr)
#define MAC_SIZE 18
/*Get the gateway ip of the device*/
int get_gw_ip(char *gwip);
int get_ipaddr_by_ifname(char *ipaddr, char *ifname);
char *show_ip(int ip);
int get_mac_by_ifname(char *mac, char *eth_inf);

#endif