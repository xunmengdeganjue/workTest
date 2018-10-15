/* Modified by Broadcom Corp. Portions Copyright (c) Broadcom Corp, 2002. */
/*
 * arpping.c
 *
 * Mostly stolen from: dhcpcd - DHCP client daemon
 * by Yoichi Hariguchi <yoichi@fore.com>
 */

//#include <sys/types.h>
//#include <sys/time.h>
//#include <time.h>
//#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
//#include <errno.h>

#include "arp.h"

//#define ALIGN2 /* nothing, just to placate applet_tables.h */
#define ALIGN2 __attribute__((aligned(2)))

/**
const uint8_t MAC_BCAST_ADDR[6] ALIGN2 = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
*/

int arp_socket_create()
{
	int	s;			/* socket */
	int optval = 1;
	//if ((s = socket (PF_PACKET, SOCK_PACKET, htons(ETH_P_ARP))) == -1) {
	if ((s = socket (PF_PACKET, SOCK_RAW, htons(ETH_P_ARP))) == -1) {
		//LOG(LOG_ERR, "Could not open raw socket");
		printf("Could not open raw socket\n");
		return -1;
	}
	if (setsockopt(s, SOL_SOCKET, SO_BROADCAST, &optval, sizeof(optval)) == -1) {
		//LOG(LOG_ERR, "Could not setsocketopt on raw socket");
		printf("Could not setsocketopt on raw socket\n");
		close(s);
		return -1;
	}

	return s;
}
/*
 * Convert Ethernet address string representation to binary data
 * @param	a	string in xx:xx:xx:xx:xx:xx notation
 * @param	e	binary data
 * @return	TRUE if conversion was successful and FALSE otherwise
 */
int
ether_atoe(const char *a, unsigned char *e)
{
	char *c = (char *) a;
	int i = 0;

	memset(e, 0, ETHER_ADDR_LEN);
	for (;;) {
		e[i++] = (unsigned char) strtoul(c, &c, 16);
		if (!*c++ || i == ETHER_ADDR_LEN)
			break;
	}
	return (i == ETHER_ADDR_LEN);
}

int get_mac_by_ip(unsigned char *xmac, unsigned int xip, const char *ifname)
{
	FILE *fp;
    char line[100];
    int ret = -1;
	char ipa[50];           // ip address
	char hwa[50];           // HW address / MAC
	char mask[50];          // ntemask   
	char dev[50];           // interface
	int type;               // HW type
	int flags;              // flags
							

    if ((fp = fopen("/proc/net/arp", "r")) == NULL) 
        return ret;

    // Bypass header -- read until newline 
    if (fgets(line, sizeof(line), fp) != (char *) NULL) {
    // Read the ARP cache entries.
    // IP address       HW type     Flags       HW address            Mask     Device
    // 192.168.1.1      0x1         0x2         00:90:4C:21:00:2A     *        eth0
        for (; fgets(line, sizeof(line), fp);) {
            if(sscanf(line, "%s 0x%x 0x%x %100s %100s %100s\n", ipa, &type, &flags, hwa, mask, dev)!=6)
                continue;
            if (strcmp(ifname, dev))
                continue;
            if(inet_addr(ipa) != xip)
                continue;
            if (flags == 0)
                continue;
            ether_atoe(hwa, xmac);
            ret = 0;
            break;
        }
    }

    fclose(fp);
    return ret;
}

void printf_macaddr(unsigned char *macaddr)
{
  
    printf("macaddr ::: %02x:%02x:%02x:%02x:%02x:%02x\n", 
        macaddr[0], macaddr[1], macaddr[2], macaddr[3], macaddr[4], macaddr[5]);
    
}

/*
yiaddr:the dest ip.
ip:source IP address.
mac:source hardware address.
interface:the package pass through.
s: the socket fd.
*/
int arp_send(u_int32_t yiaddr, u_int32_t ip, unsigned char *mac, char *interface, int s)
{
	int	rv = 1;			/* return value */
	struct sockaddr addr;		/* for interface name */
	struct arpMsg	arp;
	unsigned char yimac[6];
    
	/* send arp request */
	memset(&arp, 0, sizeof(arp));
    if (get_mac_by_ip(yimac, yiaddr, interface))
	    memcpy(arp.ethhdr.h_dest, MAC_BCAST_ADDR, 6);	/* MAC DA */
    else
        memcpy(arp.ethhdr.h_dest, yimac, 6);
    
	memcpy(arp.ethhdr.h_source, mac, 6);		/* MAC SA */
	arp.ethhdr.h_proto = htons(ETH_P_ARP);		/* protocol type (Ethernet) */
	arp.htype = htons(ARPHRD_ETHER);		/* hardware type */
	arp.ptype = htons(ETH_P_IP);			/* protocol type (ARP message) */
	arp.hlen = 6;					/* hardware address length */
	arp.plen = 4;					/* protocol address length */
	arp.operation = htons(ARPOP_REQUEST);		/* ARP op code */
	*((u_int *) arp.sInaddr) = ip;			/* source IP address */
	memcpy(arp.sHaddr, mac, 6);			/* source hardware address */
	*((u_int *) arp.tInaddr) = yiaddr;		/* target IP address */
	
	memset(&addr, 0, sizeof(addr));
	strcpy(addr.sa_data, interface);
	if (sendto(s, &arp, sizeof(arp), 0, &addr, sizeof(addr)) < 0)
		rv = 0;
	
	return rv;
	
}



