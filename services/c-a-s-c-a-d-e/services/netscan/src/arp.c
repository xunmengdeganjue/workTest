
#include "netscan.h"
#include <suci.h>

static struct arpmsg arpreq;
struct arp_struct *arp_tbl[NEIGH_HASHMASK + 1];

#ifdef SKYSOFT_TR_SUPPORT

struct ifapmap ifname_ap_tbl[] = {
	{"ath0", 1}, {"ath01", 2}, {"ath02", 3}, {"ath03", 4}, {"mesh0", 5}, 
	{"ath1", 6}, {"ath11", 7}, {"ath12", 8}, {"ath13", 9}, {"mesh1", 10}, 
	{NULL, 0}
};

void send_tr_notify(char *ifname)
{
	char notify_cmd[512] = {0};
	char prefix[128] = "/oneagent/senducitocli http://127.0.0.1:1234/value/change/group/";
	char parameter[128] = "\"Device.WiFi.AccessPoint.%d.AssociatedDeviceNumberOfEntries;\"";
	char pattern[256] = {0};
	struct ifapmap *map = NULL;

	for(map = ifname_ap_tbl; map->ifname != NULL; map++){
		if(!strcmp(map->ifname, ifname)){
			sprintf(pattern, "%s %s", prefix, parameter);
			sprintf(notify_cmd, pattern, map->ap_instance);
			system(notify_cmd);
			break;
		}
	}
}

#endif

int init_arp_request(char *ifname)
{
	int s;
	struct ifreq ifr;
	struct arpmsg *arp;

	s = socket(AF_INET, SOCK_RAW, IPPROTO_RAW);
	if (s < 0)
		return 0;

	arp = &arpreq;
	memset(arp, 0, sizeof(struct arpmsg));

	ifr.ifr_addr.sa_family = AF_INET;
	strncpy(ifr.ifr_name, ifname, IFNAMSIZ);
	if (ioctl(s, SIOCGIFADDR, &ifr) != 0)
		return 0;
	memcpy(arp->ar_sip, &((struct sockaddr_in *)&ifr.ifr_addr)->sin_addr, 4);

	if (ioctl(s, SIOCGIFHWADDR, &ifr) != 0)
		return 0;
	memset(arp->h_dest, 0xFF, 6);
	memcpy(arp->h_source, ifr.ifr_hwaddr.sa_data, 6);
	arp->h_proto = htons(ETH_P_ARP);
	arp->ar_hrd = htons(ARPHRD_ETHER);
	arp->ar_pro = htons(ETH_P_IP);
	arp->ar_hln = 6;
	arp->ar_pln = 4;
	arp->ar_op = htons(ARPOP_REQUEST);
	memcpy(arp->ar_sha, ifr.ifr_hwaddr.sa_data, 6);

	close(s);
	return 1;
}

/* modified from "linux-2.4.18/net/ipv4/arp.c" */
static uint32 arp_hash(uint8 *pkey)
{
#define GET_UINT32(p)	((p[0]) |(p[1] << 8) |(p[2] << 16) |(p[3] << 24))
	uint32 hash_val;

	hash_val = GET_UINT32(pkey);
	hash_val ^= hash_val >> 16;
	hash_val ^= hash_val >> 8;
	hash_val ^= hash_val >> 3;

	return hash_val & NEIGH_HASHMASK;
}

static void get_dhcp_host(char host[], struct in_addr ip, int *isrepl)
{
	FILE *tfp;
	char ipaddr[128];
	char hostname[256];
	char *ipstr;
	char buff[512];

	host[0] = '\0';
	ipstr = inet_ntoa(ip);
	if ((tfp = fopen(DHCP_LIST_FILE,"r")) == 0)
		return;

	while (fgets(buff, sizeof(buff), tfp)) {
		sscanf(buff, "%*s %*s %s %s %*s", ipaddr, hostname);
		if (ipaddr == NULL || hostname == NULL)
			continue;

		if (strcmp(ipaddr, ipstr) == 0) {
			strncpy(host, hostname, MAX_HOSTNAME_LEN);
			*isrepl = 0;
			break;
		}
	}

	fclose(tfp);
}

char *ether_etoa(uint8 *e, char *a);

int update_arp_table(uint8 *mac, struct in_addr ip, char *ifname, int isrepl)
{
	uint32 i;
	char host[MAX_HOSTNAME_LEN + 1] = {0};
	struct arp_struct *u;
	char mac_tmp[32];

	ether_etoa(mac, mac_tmp);
	/* check dhcp host */
	get_dhcp_host(host, ip, &isrepl);
	i = arp_hash(mac);
	for (u = arp_tbl[i]; u && memcmp(u->mac, mac, ETH_ALEN); u = u->next);
	if (u) {
		if (*host) {
			strncpy(u->host, host, MAX_HOSTNAME_LEN);
		}
		strcpy(u->ifname,ifname);
		u->recv_cnt += 1;
		u->ip = ip;              /* The IP may be changed for DHCP      */
		if(u->active == 0){ 
			u->active = 1;
			show_arp_table();
#ifdef SKYSOFT_TR_SUPPORT
			send_tr_notify(u->ifname); // connected device online again
#endif
		}
		
		return isrepl;	/* Do BIOS Name Query only ARP reply */
	}

	u = malloc(sizeof(struct arp_struct));
	if (u == 0)
		return 0;
	memset(u, 0, sizeof(struct arp_struct));
	u->ip = ip;
	u->active = 1;
	u->recv_cnt += 1;
	strcpy(u->ifname,ifname);
	if (*host) {
		strncpy(u->host, host, MAX_HOSTNAME_LEN);
	}
	memcpy(u->mac, mac, ETH_ALEN);
	u->next = arp_tbl[i];
	arp_tbl[i] = u;
	show_arp_table();
#ifdef SKYSOFT_TR_SUPPORT
	send_tr_notify(u->ifname); // new device join and online
#endif

	return isrepl;
}

static void update_name(struct in_addr ip, char *host)
{
	int i;
	struct arp_struct *u;

	for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
		for (u = arp_tbl[i]; u; u = u->next)
			if (u->ip.s_addr == ip.s_addr) {
				strncpy(u->host, host, MAX_HOSTNAME_LEN);
				return;
			}
	}
}

void update_bios_name(uint8 *mac, char *host, struct in_addr ip)
{
	uint32 i;
	struct arp_struct *u;

	i = arp_hash(mac);
	for (u = arp_tbl[i]; u && memcmp(u->mac, mac, ETH_ALEN); u = u->next);

	if (u == 0) {
		update_name(ip, host); /* try it by IP address */
		return;
	}

	strncpy(u->host, host, MAX_HOSTNAME_LEN);
}



void recv_bios_pack(char *buf, int len, struct in_addr from)
{
#define HDR_SIZE		sizeof(struct nb_response_header)
	uint16 num;
	uint8 *p, *e;
	struct nb_response_header *resp;

	if (len < HDR_SIZE)
		return;

	resp = (struct nb_response_header *)buf;
	num = resp->num_names;
	p = (uint8*)&buf[HDR_SIZE];
	e = p + (num * 18);
	/* unique name, workstation service - this is computer name */
	for (; p < e; p += 18)
		if (p[15] == 0 && (p[16] & 0x80) == 0)
			break;
	if (p == e)
		return;
	update_bios_name(e, (char *)p, from);
}

char *ether_etoa(uint8 *e, char *a)
{
	static char hexbuf[] = "0123456789ABCDEF";

	int i, k;

	for (k = 0, i = 0; i < 6; i++) {
		a[k++] = hexbuf[(e[i] >> 4) & 0xF];
		a[k++] = hexbuf[(e[i]) & 0xF];
		a[k++]=':';
	}

	a[--k] = 0;

	return a;
}

/*
 * xss Protection
 * < -> &lt;
 * > -> &gt;
 * ( -> &#40;
 * ) -> &#41;
 * " -> &#34;
 * ' -> &#39;
 * # -> &#35;
 * & -> &#38;
 */
char *host_stod(char *s)
{//change special character to ordinary string
	static char str[MAX_HOSTNAME_LEN*5 + 1 ];
	char c, *p;

	p = str;
        while((c = *s++) != '\0') {
                if(c == '"'){
                        *p++ = '&'; *p++ = '#'; *p++ = '3'; *p++ = '4'; *p++ = ';';
                } else if( c == '(' ){
                        *p++ = '&'; *p++ = '#'; *p++ = '4'; *p++ = '0'; *p++ = ';';
                } else if( c == ')' ){
                        *p++ = '&'; *p++ = '#'; *p++ = '4'; *p++ = '1'; *p++ = ';';
                } else if( c == '#' ){
                        *p++ = '&'; *p++ = '#'; *p++ = '3'; *p++ = '5'; *p++ = ';';
                } else if( c == '&' ){
                        *p++ = '&'; *p++ = '#'; *p++ = '3'; *p++ = '8'; *p++ = ';';
                } else if( c == '<' ){
                        *p++ = '&'; *p++ = 'l'; *p++ = 't'; *p++ = ';';
                } else if( c == '>' ){
                        *p++ = '&'; *p++ = 'g'; *p++ = 't'; *p++ = ';';
                } else if (c == '\'') {
                        *p++ = '&'; *p++ = '#'; *p++ = '3'; *p++ = '9'; *p++ = ';';
                }
                else {
                        *p++ = c;
                }
        }
        *p = '\0';

	return str;
}

int open_arp_socket(struct sockaddr *me)
{
	int s;
	int buffersize = 200 * 1024;

	s = socket(PF_PACKET, SOCK_PACKET, htons(ETH_P_ARP));
	if (s < 0)
		return -1;

	/* We're trying to override buffer size  to set a bigger buffer. */
	if (setsockopt(s, SOL_SOCKET, SO_RCVBUF, &buffersize, sizeof(buffersize)))
		fprintf(stderr, "setsocketopt error!\n");

	me->sa_family = PF_PACKET;
	strncpy(me->sa_data, ARP_IFNAME, 14);
	if (bind(s, me, sizeof(*me)) < 0)
		return -1;
	if (init_arp_request(ARP_IFNAME) == 0)
		return -1;

	return s;
}

int recv_arp_pack(struct arpmsg *arpkt, struct in_addr *send_ip, char *ifname)
{
	static uint8 zero[6] = { 0, 0, 0, 0, 0, 0 };

	struct in_addr src_ip;

	if (arpkt->ar_op != htons(ARPOP_REQUEST) && arpkt->ar_op != htons(ARPOP_REPLY))
		return 0;
	if (arpkt->ar_hrd != htons(ARPHRD_ETHER) ||arpkt->ar_pro != htons(ETH_P_IP))
		return 0;
	if (arpkt->ar_pln != 4 ||arpkt->ar_hln != ETH_ALEN)
		return 0;

	/*
	  * If It is Gratuitous ARP message, ignore it for Home Router passing Xbox test,
	  * else we need change the `udhcpd` code about `checking IP used` too much
	  * to pass `XBox DHCP Lease Test`. The normal ARP message ==MAY BE== all
	  * right for Attached Devices function.... &_&.
	  */
	if (memcmp(arpkt->ar_sip, arpkt->ar_tip, 4) == 0)
		return 0;

	memcpy(&src_ip, arpkt->ar_sip, 4);
	if (src_ip.s_addr == 0 ||memcmp(arpkt->ar_sha, zero, 6) == 0)
		return 0;

	*send_ip = src_ip;
	return update_arp_table(arpkt->ar_sha, src_ip, ifname,arpkt->ar_op == htons(ARPOP_REPLY));
}

void remove_disconn_dhcp(struct in_addr ip)
{
	int result;
	int target = 0;
	int target_num = 0;
	FILE *fp;
//	fpos_t pos_w,pos_r,pos;
	char ipaddr[32];
	char line[512];
	char list_str[512];
	char cmd[128]={0};

	if ( !(fp = fopen (DHCP_LIST_FILE,"r")))
		return;

	while(fgets(line, sizeof(line), fp) != NULL) {
		target_num ++;
		result = sscanf(line, "%*s %*s %s %s %*s", ipaddr, list_str);
//		result = sscanf(line, "%s%s", ipaddr,list_str);
		if (result == 2){
			if(memcmp(inet_ntoa(ip), ipaddr, strlen(ipaddr)) == 0) {
				target = 1;
				break;
			}
		}
	}
	fclose(fp);

	if (target != 1)
		return;

	if ( !(fp = fopen (DHCP_LIST_FILE,"r+")))
		return;
	fclose(fp);

	sprintf(cmd, "sed -i '%dd' %s", target_num, DHCP_LIST_FILE);
	//system(cmd);
}


void strupr(char *str)
{
	for(;*str != '\0'; str++)
	{
		if(*str >= 97 && *str <= 122)
			*str = (*str)-32;
	}
}


void show_arp_table(void)
{
	int i, j, fd_flag;
	FILE *fp, *fw, *fp6;
	char mac[32];
	struct arp_struct *u;
	struct arp_struct **pprev;
	struct in_addr dhcp_host[256];
	char buffer[512];
	char ipaddr[128]={0};
	char wlan_mac[128]={0};
	char addr[INET6_ADDRSTRLEN] = {0};


	fp = fopen(ARP_FILE, "w");
	fp6 = fopen(NS_FILE, "w");
	if (fp == 0 || fp6 == 0)
		return;

	int clients_count = 0;
	char content[32] = {0};

	for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
		for (pprev = &arp_tbl[i], u = *pprev; u; ) {
			if (u->active == 1){
				char mac_tmp[32];
				ether_etoa(u->mac,mac_tmp);
				if (u->send_cnt - u->recv_cnt > 2){ // device offline check
					u->active = 0;
					u->send_cnt = 0;
					u->recv_cnt = 0;
#ifdef SKYSOFT_TR_SUPPORT
					send_tr_notify(u->ifname); // defice offline
#endif
				}
				if(u->recv_cnt > u->send_cnt){ // avoid device offline check too late
					u->recv_cnt = 0;
					u->send_cnt = 0;
				}
				if (u->send_cnt > 1000 || u->recv_cnt > 1000){ // avoid overflow
					u->send_cnt = 0;
					u->recv_cnt = 0;
				}
			}
			if (u->active == 0) {

				char mac_tmp[32];
				ether_etoa(u->mac,mac_tmp);
				FILE *tfp;
				char buff[256],*mac_addr,*p;
				system("wlanconfig ath1 list 2>/dev/null | sed -e '1d' > /tmp/ABC_tmpmac");
				system("wlanconfig ath11 list 2>/dev/null | sed -e '1d' >> /tmp/ABC_tmpmac");
				system("wlanconfig ath13 list 2>/dev/null | sed -e '1d' >> /tmp/ABC_tmpmac");
				system("wlanconfig ath0 list 2>/dev/null | sed -e '1d' >> /tmp/ABC_tmpmac");
				system("wlanconfig ath01 list 2>/dev/null | sed -e '1d' >> /tmp/ABC_tmpmac");
				system("wlanconfig ath03 list 2>/dev/null | sed -e '1d' >> /tmp/ABC_tmpmac");
				tfp = fopen("/tmp/ABC_tmpmac","r");
				if(tfp == NULL)
					goto end;
				while(fgets(buff,sizeof(buff),tfp)){
					sscanf(buff, "%s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s %*s", wlan_mac);
					p = mac_addr = wlan_mac;
					while(*p !=9 && *p != '\0')
					{
						if(*p>=97 && *p<= 122)
							*p -= 32;
						p++;
					}
					*p = '\0';
					if(strcmp(mac_addr,mac_tmp)==0)
					{
						if(u->active == 0){
#ifdef SKYSOFT_TR_SUPPORT
							send_tr_notify(u->ifname); // device online
#endif
						}
						u->active =1;
						fclose(tfp);
						unlink("/tmp/ABC_tmpmac");
						goto forgive;
					}
				}
				fclose(tfp);
				unlink("/tmp/ABC_tmpmac");
			end:
			 	remove_disconn_dhcp(u->ip);
				*pprev = u->next;
				free(u);
				u = *pprev;
			forgive:
				continue;
			}

			/* for GUI dealing easily:  &lt;unknown&gt;   <----> <unknown>*/
			fprintf(fp, "%s %s %s %s @#$&*!\n",
				inet_ntoa(u->ip), ether_etoa(u->mac, mac),
				u->host[0] == '\0' ? "&lt;unknown&gt;" : host_stod(u->host), u->ifname);
			clients_count ++;
			if(u->ip6[0].s6_addr16[0] != 0x00){
			inet_ntop(AF_INET6, &(u->ip6[0]),addr,INET6_ADDRSTRLEN);
			inet_ntop(AF_INET6, &(u->ip6[1]),ipaddr,INET6_ADDRSTRLEN);
			fprintf(fp6, "%s %s %s %s @#$&*!\n",addr,ipaddr,ether_etoa(u->mac, mac),
				u->host[0] == '\0' ? "Unknown" : host_stod(u->host));
		}

			pprev = &u->next;
			u = *pprev;
		}
	}

#ifdef SKYSOFT_TR_SUPPORT
	memset(content,0x00,sizeof(content));
	sprintf(content,"%d",clients_count);
	do_uci_set(CLIENTS_COUNT,content);
	do_uci_commit("trconf");
#endif

/*	if ((fw = fopen(WLAN_STA_FILE, "r"))) {
		while (fgets(buffer, sizeof(buffer), fw)) {
			fd_flag = 0;
			for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
				for (pprev = &arp_tbl[i], u = *pprev; u; ) {
					ether_etoa(u->mac, mac);
					strupr(buffer);
					if(!strncmp(mac, buffer, strlen(mac))) {
						fd_flag = 1;
						break;
					}
					pprev = &u->next;
					u = *pprev;
				}
			}
			if(!fd_flag) {
				strncpy(mac, buffer, 17);
				mac[17]='\0';
				strupr(mac);
				fprintf(fp, "%s %s %s @#$&*!\n",
					"&lt;unknown&gt", mac , "&lt;unknown&gt;");

			}
		}
		fclose(fw);
	}*/

	fclose(fp);
	fclose(fp6);


	/* for fix bug 31698,remove hosts which can't be found in the arp_tbl[] from dhcpd_hostlist*/
	j = 0;
	memset(ipaddr,0x00,sizeof(ipaddr));
	if ((fp = fopen(DHCP_LIST_FILE,"r"))) {
		while (fgets(buffer, sizeof(buffer), fp)) {
			sscanf(buffer, "%*s %*s %s %*s %*s", ipaddr);
			if (strlen(ipaddr)>0 && inet_aton(ipaddr, &dhcp_host[j]) != 0)
				j++;
		}
		fclose(fp);
	}

	for(j--;j >= 0; j--) {
		for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
			for (u = arp_tbl[i]; u && memcmp(&u->ip, &dhcp_host[j], sizeof(&u->ip)); u = u->next);
			if (u) break;
		}
		if (!u) remove_disconn_dhcp(dhcp_host[j]);
	}
}

/* To fix bug 22146, add function reset_arp_table, it can set active status of all nodes in the arp_tbl to 0 */
void reset_arp_table()
{
	int i;
	struct arp_struct *u;

	for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
		for (u = arp_tbl[i]; u; u = u->next) {
			u->active = 0;
			u->send_cnt = 0;
			u->recv_cnt = 0;
		}
	}
}

void scan_arp_table(int sock, struct sockaddr *me)
{
	int i;
	int count = 0;
	struct itimerval tv;
	struct arpmsg *req;
	struct arp_struct *u;
	char ipaddr[128]={0};
	char buffer[512];
	struct in_addr addr;
	FILE *fp;

	while (count != 3) {
		count++;
		req = &arpreq;
		for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
			for (u = arp_tbl[i]; u; u = u->next) {
				memcpy(req->ar_tip, &u->ip, 4);
				sendto(sock, req, sizeof(struct arpmsg), 0, me, sizeof(struct sockaddr));
				if (u->active == 1)
					u->send_cnt += 1;
			}
		}
		/**
		 * For beta issue: TD-23
		 * If use Ixia with some virtual DHCP clients to test "Attached Device" feature,
		 * Ixia could not send arp packet actively, we need request all IPs that DHCP server
		 * assigned while user refresh "Attached Device" table.
		 * We just request all IPs in "/tmp/dhcpd_hostlist" that were not recorded in 'arp_tbl'.
		 */
		if ((fp = fopen(DHCP_LIST_FILE,"r"))) {
			while ((fgets(buffer, sizeof(buffer), fp))) {
				sscanf(buffer, "%*s %*s %s %*s %*s", ipaddr);
//				ipaddr = strtok(buffer, " \t\n");
				if (strlen(ipaddr)>0 && inet_aton(ipaddr, &addr) != 0) {
					for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
						for (u = arp_tbl[i]; u && memcmp(&u->ip, &addr, sizeof(addr)); u = u->next);
						if (u) break;
					}
					if (u) continue;
					memcpy(req->ar_tip, &addr, 4);
					sendto(sock, req, sizeof(struct arpmsg), 0, me, sizeof(struct sockaddr));
				}
			}
			fclose(fp);
		}

		/*send arp request to all arp in /proc/net/arp br-lan*/
		if ((fp = popen(ARP_BRLAN_FILE,"r"))) {
			while ((fgets(buffer, sizeof(buffer), fp))) {
				sscanf(buffer, "%s %*s %*s %*s %*s %*s", ipaddr);
//				ipaddr = strtok(buffer, " \t\n");
				if (strlen(ipaddr)>0 && inet_aton(ipaddr, &addr) != 0) {
					for (i = 0; i < (NEIGH_HASHMASK + 1); i++) {
						for (u = arp_tbl[i]; u && memcmp(&u->ip, &addr, sizeof(addr)); u = u->next);
						if (u) break;
					}
					if (u) continue;
					memcpy(req->ar_tip, &addr, 4);
					sendto(sock, req, sizeof(struct arpmsg), 0, me, sizeof(struct sockaddr));
				}
			}
			pclose(fp);
		}
		if(count < 3)
			usleep(500000);
	}

	/* show the result after 3s */
	tv.it_value.tv_sec = 3;
	tv.it_value.tv_usec = 0;
	tv.it_interval.tv_sec = 0;
	tv.it_interval.tv_usec = 0;
	setitimer(ITIMER_REAL, &tv, 0);
}

