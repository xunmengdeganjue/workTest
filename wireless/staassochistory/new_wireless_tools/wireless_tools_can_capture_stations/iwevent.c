/*
 *	Wireless Tools
 *
 *		Jean II - HPL 99->04
 *
 * Main code for "iwevent". This listent for wireless events on rtnetlink.
 * You need to link this code against "iwcommon.c" and "-lm".
 *
 * Part of this code is from Alexey Kuznetsov, part is from Casey Carter,
 * I've just put the pieces together...
 * By the way, if you know a way to remove the root restrictions, tell me
 * about it...
 *
 * This file is released under the GPL license.
 *     Copyright (c) 1997-2004 Jean Tourrilhes <jt@hpl.hp.com>
 */

/***************************** INCLUDES *****************************/

#include "iwlib.h"		/* Header */

#include <linux/netlink.h>
#include <linux/rtnetlink.h>

#include <getopt.h>
#include <time.h>
#include <sys/time.h>

#include "iwevent.h"
#include "logopt.h"



/* Ugly backward compatibility :-( */
#ifndef IFLA_WIRELESS
#define IFLA_WIRELESS	(IFLA_MASTER + 1)
#endif /* IFLA_WIRELESS */

/****************************** TYPES ******************************/

/*
 * Static information about wireless interface.
 * We cache this info for performance reason.
 */
typedef struct wireless_iface
{
  /* Linked list */
  struct wireless_iface *	next;

  /* Interface identification */
  int		ifindex;		/* Interface index == black magic */

  /* Interface data */
  char			ifname[IFNAMSIZ + 1];	/* Interface name */
  struct iw_range	range;			/* Wireless static data */
  int			has_range;
} wireless_iface;

/**************************** VARIABLES ****************************/

/* Cache of wireless interfaces */
struct wireless_iface *	interface_cache = NULL;

/************************ RTNETLINK HELPERS ************************/
/*
 * The following code is extracted from :
 * ----------------------------------------------
 * libnetlink.c	RTnetlink service routines.
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 *
 * Authors:	Alexey Kuznetsov, <kuznet@ms2.inr.ac.ru>
 * -----------------------------------------------
 */

struct rtnl_handle
{
	int			fd;
	struct sockaddr_nl	local;
	struct sockaddr_nl	peer;
	__u32			seq;
	__u32			dump;
};

static inline void rtnl_close(struct rtnl_handle *rth)
{
	close(rth->fd);
}

static inline int rtnl_open(struct rtnl_handle *rth, unsigned subscriptions)
{
	int addr_len;

	memset(rth, 0, sizeof(rth));

	rth->fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_ROUTE);
	if (rth->fd < 0) {
		perror("Cannot open netlink socket");
		return -1;
	}

	memset(&rth->local, 0, sizeof(rth->local));
	rth->local.nl_family = AF_NETLINK;
	rth->local.nl_groups = subscriptions;

	if (bind(rth->fd, (struct sockaddr*)&rth->local, sizeof(rth->local)) < 0) {
		perror("Cannot bind netlink socket");
		return -1;
	}
	addr_len = sizeof(rth->local);
	if (getsockname(rth->fd, (struct sockaddr*)&rth->local,
			(socklen_t *) &addr_len) < 0) {
		perror("Cannot getsockname");
		return -1;
	}
	if (addr_len != sizeof(rth->local)) {
		fprintf(stderr, "Wrong address length %d\n", addr_len);
		return -1;
	}
	if (rth->local.nl_family != AF_NETLINK) {
		fprintf(stderr, "Wrong address family %d\n", rth->local.nl_family);
		return -1;
	}
	rth->seq = time(NULL);
	return 0;
}

/******************* WIRELESS INTERFACE DATABASE *******************/
/*
 * We keep a few information about each wireless interface on the
 * system. This avoid to query this info at each event, therefore
 * reducing overhead.
 *
 * Each interface is indexed by the 'ifindex'. As opposed to interface
 * names, 'ifindex' are never reused (even if you reactivate the same
 * hardware), so the data we cache will never apply to the wrong
 * interface.
 * Because of that, we are pretty lazy when it come to purging the
 * cache...
 */

/*------------------------------------------------------------------*/
/*
 * Get name of interface based on interface index...
 */
static inline int
index2name(int		skfd,
	   int		ifindex,
	   char *	name)
{
  struct ifreq	irq;
  int		ret = 0;

  memset(name, 0, IFNAMSIZ + 1);

  /* Get interface name */
  irq.ifr_ifindex = ifindex;
  if(ioctl(skfd, SIOCGIFNAME, &irq) < 0)
    ret = -1;
  else
    strncpy(name, irq.ifr_name, IFNAMSIZ);

  return(ret);
}

/*------------------------------------------------------------------*/
/*
 * Get interface data from cache or live interface
 */
static struct wireless_iface *
iw_get_interface_data(int	ifindex)
{
  struct wireless_iface *	curr;
  int				skfd = -1;	/* ioctl socket */

  /* Search for it in the database */
  curr = interface_cache;
  while(curr != NULL)
    {
      /* Match ? */
      if(curr->ifindex == ifindex)
	{
	  printf("\033[32mNICK:[iw_get_interface_data]:Cache : found %d-%s\n",curr->ifindex, curr->ifname);

	  /* Return */
	  return(curr);
	}
      /* Next entry */
      curr = curr->next;
    }

  /* Create a channel to the NET kernel. Doesn't happen too often, so
   * socket creation overhead is minimal... */
  if((skfd = iw_sockets_open()) < 0)
    {
      perror("iw_sockets_open");
      return(NULL);
    }

  /* Create new entry, zero, init */
  curr = calloc(1, sizeof(struct wireless_iface));
  if(!curr)
    {
      fprintf(stderr, "Malloc failed\n");
      return(NULL);
    }
  curr->ifindex = ifindex;

  /* Extract static data */
  if(index2name(skfd, ifindex, curr->ifname) < 0)
    {
      perror("index2name");
      free(curr);
      return(NULL);
    }
  curr->has_range = (iw_get_range_info(skfd, curr->ifname, &curr->range) >= 0);
  //printf("Cache : create %d-%s\n", curr->ifindex, curr->ifname);

  /* Done */
  iw_sockets_close(skfd);

  /* Link it */
  curr->next = interface_cache;
  interface_cache = curr;

  return(curr);
}

/*------------------------------------------------------------------*/
/*
 * Remove interface data from cache (if it exist)
 */
static void
iw_del_interface_data(int	ifindex)
{
  struct wireless_iface *	curr;
  struct wireless_iface *	prev = NULL;
  struct wireless_iface *	next;

  /* Go through the list, find the interface, kills it */
  curr = interface_cache;
  while(curr)
    {
      next = curr->next;

      /* Got a match ? */
      if(curr->ifindex == ifindex)
	{
	  /* Unlink. Root ? */
	  if(!prev)
	    interface_cache = next;
	  else
	    prev->next = next;
	  //printf("Cache : purge %d-%s\n", curr->ifindex, curr->ifname);

	  /* Destroy */
	  free(curr);
	}
      else
	{
	  /* Keep as previous */
	  prev = curr;
	}

      /* Next entry */
      curr = next;
    }
}

/********************* WIRELESS EVENT DECODING *********************/
/*
 * Parse the Wireless Event and print it out
 */

/*------------------------------------------------------------------*/
/*
 * Dump a buffer as a serie of hex
 * Maybe should go in iwlib...
 * Maybe we should have better formatting like iw_print_key...
 */
static char *
iw_hexdump(char *		buf,
	   size_t		buflen,
	   const unsigned char *data,
	   size_t		datalen)
{
  size_t	i;
  char *	pos = buf;

  for(i = 0; i < datalen; i++)
    pos += snprintf(pos, buf + buflen - pos, "%02X", data[i]);
  return buf;
}




static void custom_raw_analysis(const u8 *buf,int event_flags,int len){

	trace_enter();

	const struct ieee80211_mgmt *mgmt;
	u16 fc, stype;
	int ielen;
	const u8 *iebuf;
	char buffer[1024] = {0};
	char show_buffer[1024] = {0};
	mgmt = (const struct ieee80211_mgmt *)buf;

	trace_line();

	if(len<sizeof(struct ieee80211_hdr)){
		printf("\033[35m[%s]:[%d]:the len of the custom is[%d] too short!should bigger than [%d]\033[0m\n",__func__,__LINE__,len,sizeof(struct ieee80211_hdr));
		return ;
	}

	printf("\033[35m[%s]:[line:%d]the len = %d\033[0m\n",__func__,__LINE__,len);
	memcpy(show_buffer,buf,len);
	
	printf("\033[35mNICK:[%s]:hexdump:[%s]\033[0m\n",__func__,iw_hexdump(buffer,sizeof(buffer),show_buffer,len));



	printf("\033[35m[%s]:[%d]:the len of the custom is[%d] ,the sizeof the ieee_80211 header [%d]\033[0m\n",__func__,__LINE__,len,sizeof(struct ieee80211_hdr));

	printf("\033[35m[%s]:[%d]:the buf is [%s]\033[0m\n",__func__,__LINE__,buf);
	trace_line();
	printf("\033[35mNICK:[%s]:THE mgmt->frame_control len = [%d] \033[0m\n",__func__,sizeof(mgmt->frame_control));
	trace_line();
	printf("\033[35mNICK:[%s]:THE mgmt->frame_control = [%d] \033[0m",__func__,mgmt->frame_control);
	fc = le_to_host16(mgmt->frame_control);
	
	printf("\033[35mThe fc is %s\033[0m\n",fc);

	trace_line();
	

	
	//printf("\033[35mNICK:[%s]:the mgmt->frame_control=%s\033[0m\n",__func__,mgmt->frame_control);
	//printf("\033[35mNICK:[%s]:the mgmt->da=%s\033[0m\n",__func__,mgmt->da);
	
	if (WLAN_FC_GET_TYPE(fc) != WLAN_FC_TYPE_MGMT){
		trace_line();
		printf("\033[35mNICK:[%s]:the frame type is not the management*****************\033[0m!\n",__func__);
		return;
	}

	stype = WLAN_FC_GET_STYPE(fc);
	printf("\033[35mNICK:[%s]:the subtype = [%d]\033[0m\n",stype);
	

	printf("\033[32mNICK:[%s]:Exit\033[0m\n",__func__);

}


/*
this function is do the work like atheros_raw_receive  in the hostapd.

*/

static void event_to_custom( const u8 *custom,int len,int flags,char *ifname){

//#define MGMT_FRAM_TAG_SIZE 30 /* hardcoded in driver */
	const struct ieee80211_mgmt *mgmt;
	u16 fc, stype;
	int ielen;
	const u8 *iebuf;
//	union wpa_event_data event;

	log_trace_enter();
	
	char buffer[1024]= {0};//just for debug
	char show_buffer[1024]={0};//just for debug

	printf("\033[35mNICK:[%s]:THE custom is [%s]\033[0m\n",__func__,custom);
	log_dbg("The custom is [%s]\n",custom);
	
	memcpy(show_buffer,custom,len);
	
	/*here we should fill the custom to the struct mgfm*/

	if(len<IEEE80211_HDRLEN){
		log_err("THE length of the header is[%d] too short",len);
		return ;
	}
	
	mgmt = (const struct ieee80211_mgmt *)custom;

	//printf("\033[35mNICK:[%s]:THE mgmt->frame_control len = [%d] \033[0m\n",__func__,sizeof(mgmt->frame_control));
	printf("\033[35mNICK:[%s]:THE mgmt->frame_control = [%d] \033[0m\n",__func__,mgmt->frame_control);

	fc = le_to_host16(mgmt->frame_control);

	printf("\033[35mNICK:[%s]:THE fc is [%d] \033[0m\n",__func__,fc);
	
	if (WLAN_FC_GET_TYPE(fc) != WLAN_FC_TYPE_MGMT){
		log_trace_line();
		return;
	}

	stype = WLAN_FC_GET_STYPE(fc);
//	printf("\033[35mNICK:[%s]:subtype  [\033[32m0x%x\033[0m len [\033[32m%d\033[0m]\033[0m\n",__func__,stype,len);
	log_dbg("subtype=[%d],len=[%d]\n",stype,len);
	if (stype == WLAN_FC_STYPE_PROBE_REQ) {
		/*TBD:by now we have no time to extend this function*/
		log_info("The subtype is WLAN_FC_STYPE_PROBE_REQ[%d]\n",WLAN_FC_STYPE_PROBE_REQ);

	}
		
	switch (stype) {
		case WLAN_FC_STYPE_ASSOC_REQ:
			if (len < IEEE80211_HDRLEN + sizeof(mgmt->u.assoc_req)){
				log_err("the len is little than IEEE80211_HDRLEN + sizeof((mgmt->u.assoc_req)\n");
				break;
			}
			//printf("\033[35mNICK:[%s]:hexdump[%s]\033[0m\n",__func__,iw_hexdump(buffer,sizeof(buffer),show_buffer,len));
			//printf("\033[36mNICK:[%s]:GET THE \"ASSOC REQEST\" EVENT\033[0m\n",__func__);

			log_dbg("hexdump[\033[35m%s\033[0m]\n",iw_hexdump(buffer,sizeof(buffer),show_buffer,len));
			log_dbg("GET THE \"\033[35mASSOC REQUEST\033[0m\"\n");
			
			trace_line();
			ielen = len - (IEEE80211_HDRLEN + sizeof(mgmt->u.assoc_req));
			iebuf = mgmt->u.assoc_req.variable;
			trace_line();
			printf("\033[36mNICK:[%s]:The client is[%02x:%02x:%02x:%02x:%02x:%02x]\033[0m\n",__func__,MAC2STR(mgmt->sa));
			log_dbg("The client Mac=[\033[35m%02x:%02x:%02x:%02x:%02x:%02x\033[0m]\n",MAC2STR(mgmt->sa));

			sleep(1);
			char dest_client[128]={0};
			sprintf(dest_client,"%02x:%02x:%02x:%02x:%02x:%02x",MAC2STR(mgmt->sa));
			
			if(finde_dest_stations(ifname, (char *)dest_client)){
				log_dbg("THE STATION ASSOCIATED SUCCESSFULLY\n");
				log_sta_info("[%s] associated\n",dest_client);
			}else{
				sleep(1);
				if(finde_dest_stations(ifname, dest_client)){
					log_dbg("THE STATION ASSOCIATED SUCCESSFULLY\n");
					log_sta_info("[%s] associated\n",dest_client);
				}else{
					log_dbg("THE STATION ASSOCIATED FAILED\n");
					//log_sta_info("[%s] associated\n",dest_client);
				}
			}
			break;
		case WLAN_FC_STYPE_REASSOC_REQ:
			printf("\033[33mNICK:[%s]:hexdump[%s]\033[0m\n",__func__,iw_hexdump(buffer,sizeof(buffer),show_buffer,len));
			printf("\033[36mNICK:[%s]:GET THE \"REASSOC REQEST\" EVENT\033[0m\n",__func__);
			break;
		case WLAN_FC_STYPE_ACTION:
			printf("\033[31mNICK:[%s]:hexdump[%s]\033[0m\n",__func__,iw_hexdump(buffer,sizeof(buffer),show_buffer,len));
			printf("\033[36mNICK:[%s]:GET THE \"ACTION\" EVENT\033[0m\n",__func__);
			break;
		case WLAN_FC_STYPE_AUTH:
			printf("\033[32mNICK:[%s]:hexdump[%s]\033[0m\n",__func__,iw_hexdump(buffer,sizeof(buffer),show_buffer,len));
			printf("\033[36mNICK:[%s]:GET THE \"AUTH\" EVENT\033[0m\n",__func__);
			break;
		default:
			break;	
	}

	log_trace_exit();
}




/*------------------------------------------------------------------*/
/*
 * Print one element from the scanning results
 */
static inline int
print_event_token(struct iw_event *	event,		/* Extracted token */
		  struct iw_range *	iw_range,	/* Range info */
		  int			has_range, char * ifname)
{
	char		buffer[1024];	/* Temporary buffer */
	char		buffer2[30];	/* Temporary buffer */
	char *	prefix = (IW_IS_GET(event->cmd) ? "New" : "Set");
#define MGMT_FRAM_TAG_SIZE 30 /* hardcoded in driver */

	/* Now, let's decode the event */
	switch(event->cmd)
    {
      /* ----- set events ----- */
      /* Events that result from a "SET XXX" operation by the user */
    case SIOCSIWNWID:
      if(event->u.nwid.disabled)
	printf("Set NWID:off/any\n");
      else
	printf("Set NWID:%X\n", event->u.nwid.value);
      break;
    case SIOCSIWFREQ:
    case SIOCGIWFREQ:
      {
	double		freq;			/* Frequency/channel */
	int		channel = -1;		/* Converted to channel */
	freq = iw_freq2float(&(event->u.freq));
	if(has_range)
	  {
	    if(freq < KILO)
	      /* Convert channel to frequency if possible */
	      channel = iw_channel_to_freq((int) freq, &freq, iw_range);
	    else
	      /* Convert frequency to channel if possible */
	      channel = iw_freq_to_channel(freq, iw_range);
	  }
	iw_print_freq(buffer, sizeof(buffer),
		      freq, channel, event->u.freq.flags);
	printf("%s %s\n", prefix, buffer);
      }
      break;
    case SIOCSIWMODE:
      printf("Set Mode:%s\n",
	     iw_operation_mode[event->u.mode]);
      break;
    case SIOCSIWESSID:
    case SIOCGIWESSID:
      {
	char essid[4 * IW_ESSID_MAX_SIZE + 1];
	memset(essid, '\0', sizeof(essid));
	if((event->u.essid.pointer) && (event->u.essid.length))
	  memcpy(essid, event->u.essid.pointer, event->u.essid.length);
	if(event->u.essid.flags)
	  {
	    /* Does it have an ESSID index ? */
	    if((event->u.essid.flags & IW_ENCODE_INDEX) > 1)
	      printf("%s ESSID:\"%s\" [%d]\n", prefix, essid,
		     (event->u.essid.flags & IW_ENCODE_INDEX));
	    else
	      printf("%s ESSID:\"%s\"\n", prefix, essid);
	  }
	else
	  printf("%s ESSID:off/any\n", prefix);
      }
      break;
    case SIOCSIWENCODE:
      {
	unsigned char	key[IW_ENCODING_TOKEN_MAX];
	if(event->u.data.pointer)
	  memcpy(key, event->u.data.pointer, event->u.data.length);
	else
	  event->u.data.flags |= IW_ENCODE_NOKEY;
	printf("Set Encryption key:");
	if(event->u.data.flags & IW_ENCODE_DISABLED)
	  printf("off\n");
	else
	  {
	    /* Display the key */
	    iw_print_key(buffer, sizeof(buffer), key, event->u.data.length,
			 event->u.data.flags);
	    printf("%s", buffer);

	    /* Other info... */
	    if((event->u.data.flags & IW_ENCODE_INDEX) > 1)
	      printf(" [%d]", event->u.data.flags & IW_ENCODE_INDEX);
	    if(event->u.data.flags & IW_ENCODE_RESTRICTED)
	      printf("   Security mode:restricted");
	    if(event->u.data.flags & IW_ENCODE_OPEN)
	      printf("   Security mode:open");
	    printf("\n");
	  }
      }
      break;
      /* ----- driver events ----- */
      /* Events generated by the driver when something important happens */
    case SIOCGIWAP:
      printf("New Access Point/Cell address:%s\n",
	     iw_sawap_ntop(&event->u.ap_addr, buffer));
      break;
    case SIOCGIWSCAN:
      printf("Scan request completed\n");
      break;
    case IWEVTXDROP:
      printf("Tx packet dropped:%s\n",
	     iw_saether_ntop(&event->u.addr, buffer));
      break;

	case IWEVASSOCREQIE:
		/* Driver hack..  Use IWEVASSOCREQIE to bypass
		* IWEVCUSTOM size limitations. Need to handle this
		*just like IWEVCUSTOM.
		*/
	case IWEVCUSTOM:/*NICK:################################CUSTOM EVENT*/
	{
		log_info("CUSTOM EVENT IES=%s\n",iw_hexdump(buffer, sizeof(buffer),
				event->u.data.pointer, event->u.data.length));
		log_dbg("event->cmd=[0x%x],len=[%d]\n",event->cmd,event->len);
		
		//sleep(5);
		//list_scan(ifname);
		//sleep(10);
		//list_stations(ifname);
		
		char * custom;
		int len = 0;
		trace_line();
		custom = event->u.data.pointer;
		
		//printf("The event->u.data.flags=%d\n",event->u.data.flags);
		if(custom){
			//printf("\033[32mNICK:[%s]:Custom is [%s]\033[0m\n",__func__,custom);
			log_dbg("Custom is [%s]\n",custom);
			if (strncmp(custom, "MLME-MICHAELMICFAILURE.indication", 33) == 0) 
			{
				//printf("\033[35mNICK:[%s]:MLME-MICHAELMICFAILURE.indication\033[0m\n",__func__);
				log_dbg(":MLME-MICHAELMICFAILURE.indication\n");
			}
			else if (strncmp(custom, "Manage.prob_req ", 16) == 0){
				log_dbg("Manage.prob_req\n");
				printf("\033[35mNICK:[%s]:OPERATION:MANAGE.prob_req\033[0m\n",__func__);
				len = atoi(custom + 16);
				//custom_raw_analysis((u8 *)custom+MGMT_FRAM_TAG_SIZE,flags,len);
				event_to_custom((u8*)custom+MGMT_FRAM_TAG_SIZE,len,event->u.data.flags,ifname);

			}else if (strncmp(custom, "Manage.auth ", 12) == 0) {
				log_dbg("Manage.auth\n");
				printf("\033[35mNICK:[%s]:OPERATION:MANAGE.auth\033[0m\n",__func__);
				len = atoi(custom + 12);
				event_to_custom((u8*)custom+MGMT_FRAM_TAG_SIZE,len,event->u.data.flags,ifname);
			}
			else if (strncmp(custom, "Manage.assoc_req ", 17) == 0) {
				log_dbg("Manage.assoc_req\n");
				printf("\033[35mNICK:[%s]:OPERATION:MANAGE.assoc_req\033[0m\n",__func__);
				len = atoi(custom + 17);
				event_to_custom((u8*)custom+MGMT_FRAM_TAG_SIZE,len,event->u.data.flags,ifname);
				
			}else if (strncmp(custom, "STA-TRAFFIC-STAT", 16) == 0) {
				log_dbg("STA-TRAFFIC-STAT\n");
				printf("\033[35mNICK:[%s]:STA-TRAFFIC-STAT\033[0m\n",__func__);
			}

		}
		trace_line();

      }
      break;
	  
    case IWEVREGISTERED:
      printf("Registered node:%s\n",
	     iw_saether_ntop(&event->u.addr, buffer));
      break;
    case IWEVEXPIRED:	/*NICK:################################EXPIRED NODE EVENT*/
/*	printf("Expired node:%s\n",
	     iw_saether_ntop(&event->u.addr, buffer));
*/	
	//printf("\033[33mNICK:Expired node %s\033[0m\n",iw_saether_ntop(&event->u.addr, buffer));
	log_info("Expired node [\033[35m%s\033[0m]\n",iw_saether_ntop(&event->u.addr, buffer));
	log_sta_info("[%s] expired\n",iw_saether_ntop(&event->u.addr, buffer));
      break;
    case SIOCGIWTHRSPY:
      {
	struct iw_thrspy	threshold;
	if((event->u.data.pointer) && (event->u.data.length))
	  {
	    memcpy(&threshold, event->u.data.pointer,
		   sizeof(struct iw_thrspy));
	    printf("Spy threshold crossed on address:%s\n",
		   iw_saether_ntop(&threshold.addr, buffer));
	    iw_print_stats(buffer, sizeof(buffer),
			   &threshold.qual, iw_range, has_range);
	    printf("                            Link %s\n", buffer);
	  }
	else
	  printf("Invalid Spy Threshold event\n");
      }
      break;
#if 0	  
      /* ----- driver WPA events ----- */
      /* Events generated by the driver, used for WPA operation */
    case IWEVMICHAELMICFAILURE:
      if(event->u.data.length >= sizeof(struct iw_michaelmicfailure))
	{
	  struct iw_michaelmicfailure mf;
	  memcpy(&mf, event->u.data.pointer, sizeof(mf));
	  printf("Michael MIC failure flags:0x%X src_addr:%s tsc:%s\n",
		 mf.flags,
		 iw_saether_ntop(&mf.src_addr, buffer2),
		 iw_hexdump(buffer, sizeof(buffer),
			    mf.tsc, IW_ENCODE_SEQ_MAX_SIZE));
	}
      break;
    case IWEVASSOCREQIE:
      printf("\033[31mAssociation Request IEs:%s\033[0m\n",
	     iw_hexdump(buffer, sizeof(buffer),
			event->u.data.pointer, event->u.data.length));
      break;
#endif

    case IWEVASSOCRESPIE:
      printf("\033[31mAssociation Response IEs:%s\033[0m\n",
	     iw_hexdump(buffer, sizeof(buffer),
			event->u.data.pointer, event->u.data.length));
	  
      break;
    case IWEVPMKIDCAND:
      if(event->u.data.length >= sizeof(struct iw_pmkid_cand))
	{
	  struct iw_pmkid_cand cand;
	  memcpy(&cand, event->u.data.pointer, sizeof(cand));
	  printf("PMKID candidate flags:0x%X index:%d bssid:%s\n",
		 cand.flags, cand.index,
		 iw_saether_ntop(&cand.bssid, buffer));
	}
      break;
      /* ----- junk ----- */
      /* other junk not currently in use */
    case SIOCGIWRATE:
      iw_print_bitrate(buffer, sizeof(buffer), event->u.bitrate.value);
      printf("New Bit Rate:%s\n", buffer);
      break;
    case SIOCGIWNAME:
      printf("Protocol:%-1.16s\n", event->u.name);
      break;
    case IWEVQUAL:
      {
	event->u.qual.updated = 0x0;	/* Not that reliable, disable */
	iw_print_stats(buffer, sizeof(buffer),
		       &event->u.qual, iw_range, has_range);
	printf("Link %s\n", buffer);
	break;
      }
    default:
      printf("(Unknown Wireless event 0x%04X)\n", event->cmd);
    }	/* switch(event->cmd) */

  return(0);
}

/*------------------------------------------------------------------*/
/*
 * Print out all Wireless Events part of the RTNetlink message
 * Most often, there will be only one event per message, but
 * just make sure we read everything...
 */
static inline int
print_event_stream(int		ifindex,
		   char *	data,
		   int		len)
{
  struct iw_event	iwe;
  struct stream_descr	stream;
  int			i = 0;
  int			ret;
  char			buffer[64];
  struct timeval	recv_time;
  struct timezone	tz;
  struct wireless_iface *	wireless_data;

  /* Get data from cache */
  wireless_data = iw_get_interface_data(ifindex);
  if(wireless_data == NULL)
    return(-1);

  /* Print received time in readable form */
  gettimeofday(&recv_time, &tz);
  iw_print_timeval(buffer, sizeof(buffer), &recv_time, &tz);

  iw_init_event_stream(&stream, data, len);
  do
    {
      /* Extract an event and print it */
      ret = iw_extract_event_stream(&stream, &iwe,
				    wireless_data->range.we_version_compiled);
      if(ret != 0)
	{
	  if(i++ == 0)
	    printf("%s   %-8.16s ", buffer, wireless_data->ifname);
	  else
	    printf("                           ");
	  if(ret > 0)
	    print_event_token(&iwe,
			      &wireless_data->range, wireless_data->has_range,wireless_data->ifname);
	  else
	    printf("(Invalid event)\n");
	  /* Push data out *now*, in case we are redirected to a pipe */
	  fflush(stdout);
	}
    }
  while(ret > 0);

  return(0);
}

/*********************** RTNETLINK EVENT DUMP***********************/
/*
 * Dump the events we receive from rtnetlink
 * This code is mostly from Casey
 */

/*------------------------------------------------------------------*/
/*
 * Respond to a single RTM_NEWLINK event from the rtnetlink socket.
 */
static int
LinkCatcher(struct nlmsghdr *nlh)
{
  struct ifinfomsg* ifi;

#if 0
  fprintf(stderr, "nlmsg_type = %d.\n", nlh->nlmsg_type);
#endif

  ifi = NLMSG_DATA(nlh);

  /* Code is ugly, but sort of works - Jean II */

  /* If interface is getting destoyed */
  if(nlh->nlmsg_type == RTM_DELLINK)
    {
      /* Remove from cache (if in cache) */
      iw_del_interface_data(ifi->ifi_index);
      return 0;
    }

  /* Only keep add/change events */
  if(nlh->nlmsg_type != RTM_NEWLINK)
    return 0;

  /* Check for attributes */
  if (nlh->nlmsg_len > NLMSG_ALIGN(sizeof(struct ifinfomsg)))
    {
      int attrlen = nlh->nlmsg_len - NLMSG_ALIGN(sizeof(struct ifinfomsg));
      struct rtattr *attr = (void *) ((char *) ifi +
				      NLMSG_ALIGN(sizeof(struct ifinfomsg)));

      while (RTA_OK(attr, attrlen))
	{
	  /* Check if the Wireless kind */
	  if(attr->rta_type == IFLA_WIRELESS)
	    {
	      /* Go to display it */
	      print_event_stream(ifi->ifi_index,
				 (char *) attr + RTA_ALIGN(sizeof(struct rtattr)),
				 attr->rta_len - RTA_ALIGN(sizeof(struct rtattr)));
	    }
	  attr = RTA_NEXT(attr, attrlen);
	}
    }

  return 0;
}

/* ---------------------------------------------------------------- */
/*
 * We must watch the rtnelink socket for events.
 * This routine handles those events (i.e., call this when rth.fd
 * is ready to read).
 */
static inline void
handle_netlink_events(struct rtnl_handle *	rth)
{
  while(1)
    {
      struct sockaddr_nl sanl;
      socklen_t sanllen = sizeof(struct sockaddr_nl);

      struct nlmsghdr *h;
      int amt;
      char buf[8192];

      amt = recvfrom(rth->fd, buf, sizeof(buf), MSG_DONTWAIT, (struct sockaddr*)&sanl, &sanllen);
      if(amt < 0)
	{
	  if(errno != EINTR && errno != EAGAIN)
	    {
	      fprintf(stderr, "%s: error reading netlink: %s.\n",
		      __PRETTY_FUNCTION__, strerror(errno));
	    }
	  return;
	}

      if(amt == 0)
	{
	  fprintf(stderr, "%s: EOF on netlink??\n", __PRETTY_FUNCTION__);
	  return;
	}

      h = (struct nlmsghdr*)buf;
      while(amt >= (int)sizeof(*h))
	{
	  int len = h->nlmsg_len;
	  int l = len - sizeof(*h);

	  if(l < 0 || len > amt)
	    {
	      fprintf(stderr, "%s: malformed netlink message: len=%d\n", __PRETTY_FUNCTION__, len);
	      break;
	    }

	  switch(h->nlmsg_type)
	    {
	    case RTM_NEWLINK:
	    case RTM_DELLINK:
	      LinkCatcher(h);
	      break;
	    default:
#if 0
	      fprintf(stderr, "%s: got nlmsg of type %#x.\n", __PRETTY_FUNCTION__, h->nlmsg_type);
#endif
	      break;
	    }

	  len = NLMSG_ALIGN(len);
	  amt -= len;
	  h = (struct nlmsghdr*)((char*)h + len);
	}

      if(amt > 0)
	fprintf(stderr, "%s: remnant of size %d on netlink\n", __PRETTY_FUNCTION__, amt);
    }
}

/**************************** MAIN LOOP ****************************/

/* ---------------------------------------------------------------- */
/*
 * Wait until we get an event
 */
static inline int
wait_for_event(struct rtnl_handle *	rth)
{
#if 0
  struct timeval	tv;	/* Select timeout */
#endif

  /* Forever */
  while(1)
    {
      fd_set		rfds;		/* File descriptors for select */
      int		last_fd;	/* Last fd */
      int		ret;

      /* Guess what ? We must re-generate rfds each time */
      FD_ZERO(&rfds);
      FD_SET(rth->fd, &rfds);
      last_fd = rth->fd;

      /* Wait until something happens */
      ret = select(last_fd + 1, &rfds, NULL, NULL, NULL);

      /* Check if there was an error */
      if(ret < 0)
	{
	  if(errno == EAGAIN || errno == EINTR)
	    continue;
	  fprintf(stderr, "Unhandled signal - exiting...\n");
	  break;
	}

      /* Check if there was a timeout */
      if(ret == 0)
	{
	  continue;
	}

      /* Check for interface discovery events. */
      if(FD_ISSET(rth->fd, &rfds))
	handle_netlink_events(rth);
    }

  return(0);
}

/******************************* MAIN *******************************/

/* ---------------------------------------------------------------- */
/*
 * helper ;-)
 */
static void
iw_usage(int status)
{
  fputs("Usage: iwevent [OPTIONS]\n"
	"   Monitors and displays Wireless Events.\n"
	"   Options are:\n"
	"     -h,--help     Print this message.\n"
	"     -v,--version  Show version of this program.\n",
	status ? stderr : stdout);
  exit(status);
}
/* Command line options */
static const struct option long_opts[] = {
  { "help", no_argument, NULL, 'h' },
  { "version", no_argument, NULL, 'v' },
  { NULL, 0, NULL, 0 }
};

/* ---------------------------------------------------------------- */
/*
 * main body of the program
 */
int
main(int	argc,
     char *	argv[])
{
  struct rtnl_handle	rth;
  int opt;
  	
  log_log_init();
  
  log_stainfo_init();
  
  /* Check command line options */
  while((opt = getopt_long(argc, argv, "hv", long_opts, NULL)) > 0)
    {
      switch(opt)
	{
	case 'h':
	  iw_usage(0);
	  break;

	case 'v':
	  return(iw_print_version_info("iwevent"));
	  break;

	default:
	  iw_usage(1);
	  break;
	}
    }
  if(optind < argc)
    {
      fputs("Too many arguments.\n", stderr);
      iw_usage(1);
    }

  log_info("hello iwevent!\n");
  /* Open netlink channel */
  if(rtnl_open(&rth, RTMGRP_LINK) < 0)
    {
      perror("Can't initialize rtnetlink socket");
      return(1);
    }

  fprintf(stderr, "Waiting for Wireless Events from interfaces...\n");

  /* Do what we have to do */
  wait_for_event(&rth);

  /* Cleanup - only if you are pedantic */
  rtnl_close(&rth);

  return(0);
}
