#ifndef __ARP_H__
#define __ARP_H__

#include <stdlib.h> //for strtoul
#include <netinet/if_ether.h>
#include <net/if_arp.h>
#include <arpa/inet.h>
#include <net/if.h>

//#include <netinet/in.h>
//#include <net/if.h>

#define MAC_BCAST_ADDR		((unsigned char *) "\xff\xff\xff\xff\xff\xff")

struct arpMsg {
	struct ethhdr ethhdr;	 		/* Ethernet header */
	u_short htype;				/* hardware type (must be ARPHRD_ETHER) */
	u_short ptype;				/* protocol type (must be ETH_P_IP) */
	u_char  hlen;				/* hardware address length (must be 6) */
	u_char  plen;				/* protocol address length (must be 4) */
	u_short operation;			/* ARP opcode */
	u_char  sHaddr[6];			/* sender's hardware address */
	u_char  sInaddr[4];			/* sender's IP address */
	u_char  tHaddr[6];			/* target's hardware address */
	u_char  tInaddr[4];			/* target's IP address */
	u_char  pad[18];			/* pad for min. Ethernet payload (60 bytes) */
};


int arp_send(u_int32_t yiaddr, u_int32_t ip, unsigned char *mac, char *interface, int s);
int arp_socket_create();
void printf_macaddr(unsigned char *macaddr);
int ether_atoe(const char *a, unsigned char *e);

#endif