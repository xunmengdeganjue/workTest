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

#define	IEEE80211_IOCTL_STA_INFO	(SIOCDEVPRIVATE+6)
#define 	LIST_STATION_ALLOC_SIZE 24*1024

/*
* Function Name : finde_dest_stations
* Create Date : 2017/02/24
* Author : Nick
* Description : convert the hex mac to the mac which can be read by human.
* Param : 
	(1)ifname : the dest interface of the ap.
* Output:
* Input:
* Return : the pointer point to the converted mac address  .
*/

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

	s = socket(AF_INET, SOCK_DGRAM, 0);
	if (s < 0){
		free(buf);
		log_err("socket(SOCK_DRAGM)\n");
		return 0;
	}

	if (!strncmp(ifname, "wifi", 4)) {
		free(buf);
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
		len = iwr.u.data.length;
	}

	if (len < sizeof(struct ieee80211req_sta_info)){
		free(buf);
		return 0;
	}
	cp = buf;
	do {
		log_trace_line();
		
		struct ieee80211req_sta_info *si;
		uint8_t *vp;

		si = (struct ieee80211req_sta_info *) cp;
		vp = (u_int8_t *)(si+1);
		if(si->isi_txratekbps == 0)
			txrate = (si->isi_rates[si->isi_txrate] & IEEE80211_RATE_VAL)/2;
		else
			txrate = si->isi_txratekbps / 1000;
		if(si->isi_rxratekbps >= 0) {
			rxrate = si->isi_rxratekbps / 1000;
		}

		maxrate = si->isi_maxrate_per_client;

		if (maxrate & 0x80) maxrate &= 0x7f;
			ntoa = ieee80211_ntoa(si->isi_macaddr);
		if(ntoa){
			if(!strcmp(ntoa,statocheck)){
				free(buf);
				log_trace_line();
				return 1;
			}

		}

		cp += si->isi_len, len -= si->isi_len;
	} while (len >= sizeof(struct ieee80211req_sta_info));

	free(buf);
	
	log_trace_exit();
	
	return 0;

	
}
