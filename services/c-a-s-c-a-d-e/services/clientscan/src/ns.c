#include <netinet/icmp6.h>
#include "netscan.h"

#define IPV6_MDMAC 63
extern struct arp_struct *arp_tbl[NEIGH_HASHMASK + 1];

static uint32 mac_hash(uint8 *pkey)
{
#define GET_UINT32(p)	((p[0]) |(p[1] << 8) |(p[2] << 16) |(p[3] << 24))
	uint32 hash_val;

	hash_val = GET_UINT32(pkey);
	hash_val ^= hash_val >> 16;
	hash_val ^= hash_val >> 8;
	hash_val ^= hash_val >> 3;

	return hash_val & NEIGH_HASHMASK;
}


int rebuild_arp_table(uint8 *mac, struct in6_addr ip6)
{
	uint32 i;
	struct arp_struct *u = NULL;

	i = mac_hash(mac);
	for (u = arp_tbl[i]; u && memcmp(u->mac, mac, ETH_ALEN); u = u->next);
	if (u) {
		if(!memcmp(&u->ip6[0],&ip6,sizeof(struct in6_addr)) ||
			!memcmp(&u->ip6[1],&ip6,sizeof(struct in6_addr)))
			 return 1;
		if(memcmp(&u->ip6[0],&ip6,8) != 0)
			{
				memset(&(u->ip6[0]),0,sizeof(struct in6_addr));
				memset(&(u->ip6[1]),0,sizeof(struct in6_addr));
			}
		if(u->ip6[0].s6_addr16[0] == 0x00)
			u->ip6[0] = ip6;    
		else if(u->ip6[0].s6_addr16[0] != 0x00 && u->ip6[1].s6_addr16[0] == 0x00)
			u->ip6[1] = ip6; 		
		else if(u->ip6[0].s6_addr16[0] != 0x00 && u->ip6[1].s6_addr16[0] != 0x00 && u->ip6[2].s6_addr16[0] == 0x00){ 
			u->ip6[0] = ip6;
			u->ip6[2] = ip6;
		}
		else if(u->ip6[0].s6_addr16[0] != 0x00 && u->ip6[1].s6_addr16[0] != 0x00 && u->ip6[2].s6_addr16[0] != 0x00){
			u->ip6[1] = ip6;
			memset(&(u->ip6[2]),0,sizeof(struct in6_addr));
		}
		else u->ip6[0] = ip6;          
		u->active = 1;
		show_arp_table();
		return 1;	
	}

	u = malloc(sizeof(struct arp_struct));
	if (u == 0)
		return 0;
	memset(u, 0, sizeof(struct arp_struct));
	u->ip6[0] = ip6;
	u->active = 1;
	memcpy(u->mac, mac, ETH_ALEN);
	u->next = arp_tbl[i];
	arp_tbl[i] = u;
  show_arp_table();
	return 1;
}

int open_ns_socket(void){
	struct icmp6_filter filt;
	int val = 0;
	int sock = -1;
	int buffersize = 100 * 1024;

	sock = socket(AF_INET6, SOCK_RAW, IPPROTO_ICMPV6);
	if (sock < 0)
		return -1;
		

	ICMP6_FILTER_SETBLOCKALL(&filt);
	ICMP6_FILTER_SETPASS(ND_NEIGHBOR_ADVERT, &filt);
	setsockopt(sock, IPPROTO_ICMPV6, ICMP6_FILTER, &filt, sizeof(filt));
	setsockopt(sock, SOL_SOCKET, SO_RCVBUF, &buffersize, sizeof(buffersize));
	val = 1;
	setsockopt(sock, IPPROTO_IPV6, IPV6_MDMAC, &val, sizeof(val));

	setsockopt(sock, SOL_SOCKET, SO_BINDTODEVICE, ARP_IFNAME, strlen(ARP_IFNAME));
	
	return sock;
}

int recv_ns_pack(int sock){

	uint8_t buf[1024], cmsg_buf[64];
	struct cmsghdr *ch = NULL;
	ssize_t len = -1;
	uint8 mac[ETH_ALEN];
	struct sockaddr_in6 from;
	struct iovec iov = {buf, sizeof(buf)};
	struct msghdr msg = {
			.msg_name = (void *) &from,
			.msg_namelen = sizeof(from),
			.msg_iov = &iov,
			.msg_iovlen = 1,
			.msg_control = cmsg_buf,
			.msg_controllen = sizeof(cmsg_buf),
			.msg_flags = 0
		};
		
		len = recvmsg(sock, &msg, MSG_DONTWAIT);
		if (len <= 0)
			return -1;
		if(from.sin6_addr.s6_addr16[0] == htons(0xfe80))
			return -1;
		for (ch = CMSG_FIRSTHDR(&msg); ch != NULL;ch = CMSG_NXTHDR(&msg, ch)){
			if (ch->cmsg_level == IPPROTO_IPV6 && ch->cmsg_type == IPV6_MDMAC){
					memcpy(mac, CMSG_DATA(ch), ETH_ALEN);
					break;
				}
			}
		rebuild_arp_table(mac,from.sin6_addr);
		return len;
}