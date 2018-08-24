/*
*------------------------------------------------------------------------------
*
* Copyright (C) 2017-2018 by Sky Software Co.,Ltd. All rights reserved.
* All source codes is distributed under the U-License.
*
* CPU:
* RTOS:
* Version: 0.1
* Released by Sky Software Co.,Ltd
* 2017/02/27.
*
*
*
* File Name : iwevent_stainfo.c
* Create Date : 2017/02/24
* Author : Nick
* Description :The sub-functions related to the historical clients of the AP.
*-------------------------------------------------------------------------------
*/
#include "iwlib.h"
#include "iwevent.h"
#include "logopt.h"
//#include <linux/wireless.h>


#define	IEEE80211_IOCTL_STA_INFO	(SIOCDEVPRIVATE+6)
#define	LIST_STATION_ALLOC_SIZE 24*1024


static const char * ieee80211_ntoa(const uint8_t mac[IEEE80211_ADDR_LEN])
{
	static char a[18];
	int i;

	i = snprintf(a, sizeof(a), "%02x:%02x:%02x:%02x:%02x:%02x",
		mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
	return (i < 17 ? NULL : a);
}

/*
* Function Name : finde_dest_stations
* Create Date : 2017/02/24
* Author : Nick
* Description : check if the dest station has associated to the AP.
* Param : 
	(1)ifname : the dest interface of the ap.
	(2)statocheck : the dest station to be checked.
* Output:
* Input:
* Return Code : 
	(1) 0 :the station has not associated to the AP.
	(2) 1 :the station has associated to the AP.
*/
int finde_dest_stations(const char *ifname, const char *statocheck)
{
	log_trace_enter();

	uint8_t *buf;
	struct iwreq iwr;
	uint8_t *cp;
	int s;
	u_int32_t txrate, rxrate = 0, maxrate = 0;
	u_int32_t time_val=0, hour_val=0, min_val=0, sec_val=0;
	const char *ntoa = NULL;
	int req_space = 0;
	u_int64_t len = 0;

	buf = malloc(LIST_STATION_ALLOC_SIZE);
	if(!buf) {
		fprintf (stderr, "Unable to allocate memory for station list\n");
		return 0;
	}

	log_dbg("the interface = [%s]\n",ifname);
	
	
	s = socket(AF_INET, SOCK_DGRAM, 0);
	if (s < 0){
		free(buf);
		log_err("socket(SOCK_DRAGM)\n");
		return 0;
	}

	if (!strncmp(ifname, "wifi", 4)) {
		free(buf);
		close(s);
		log_err("Not a valid interface\n");
		return 0;
	}

	(void) memset(&iwr, 0, sizeof(iwr));
	(void) strncpy(iwr.ifr_name, ifname, sizeof(iwr.ifr_name));
	iwr.u.data.pointer = (void *) buf;
	iwr.u.data.length = LIST_STATION_ALLOC_SIZE;
	iwr.u.data.flags = 0;
	//Support for 512 client
	req_space = ioctl(s, IEEE80211_IOCTL_STA_INFO, &iwr);
	if (req_space < 0 ){
		free(buf);
		log_err("unable to get station information\n");
		return 0;
	}
	else if(req_space > 0) {
		free(buf);
		buf = malloc(req_space);
		if(!buf) {
			log_err("Unable to allocate memory for station list\n");
			return 0;
		}
		iwr.u.data.pointer = (void *) buf;
		iwr.u.data.length = req_space;
		if(iwr.u.data.length < req_space)
			iwr.u.data.flags = 1;
		if (ioctl(s, IEEE80211_IOCTL_STA_INFO, &iwr) < 0 ){
			free(buf);
			log_err("unable to get station information\n");
		}
		len = req_space;

	}
	else {
		log_trace_line();
		len = iwr.u.data.length;
	}

	if (len < sizeof(struct ieee80211req_sta_info)){
		free(buf);
		close(s);
		return 0;
	}
	
	cp = buf;
	
	do {
		log_trace_line();
		
		struct ieee80211req_sta_info *si;
		uint8_t *vp;

		si = (struct ieee80211req_sta_info *) cp;		
		ntoa = ieee80211_ntoa(si->isi_macaddr);

		log_dbg("the dest client\033[33m[%s]\033[0m\n",statocheck);
		log_dbg("the got client \033[33m[%s]\033[0m\n",ntoa);

		if(ntoa){
			if(!strcmp(ntoa,statocheck)){
				free(buf);
				log_trace_line();
				return 1;
			}

		}

		cp += si->isi_len, len -= si->isi_len;
		log_trace_line();
	} while (len >= sizeof(struct ieee80211req_sta_info));

	free(buf);
	
	close(s);
	
	log_trace_exit();
	return 0;

	
}
