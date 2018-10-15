#ifndef __TOOLS_H__
#define __TOOLS_H__

#include <stdio.h>
#include <string.h> //for strchr
#include <net/if.h> //for struct ifreq ifr
#include <sys/ioctl.h> 	//for SIOCGIFADDR
#include <netinet/in.h> //for 'struct sockaddr_in'
#include <arpa/inet.h>

#include <unistd.h> //for close()

/*for get_ipaddr_by_ifname*/
#define sin_addr(s) (((struct sockaddr_in *)(s))->sin_addr)

/*Get the gateway ip of the device*/
int get_gw_ip(char *gwip);
int get_ipaddr_by_ifname(char *ipaddr, char *ifname);


#endif