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
* File Name : iwevent.h
* Create Date : 2017/02/24
* Author : Nick
* Description :.
*-------------------------------------------------------------------------------
*/

#ifndef __IWEVENT__H__
#define __IWEVENT__H__

#include <sys/socket.h>
#include <sys/un.h> /*for   struct sockaddr_un*/
#include <stdint.h>	

#include "logopt.h"


#define PRINTF_FORMAT(a,b)
#define STRUCT_PACKED
#define __force
#define __bitwise
#ifndef __func__
#define __func__ __FUNCTION__
#endif

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

typedef int32_t s32;

typedef u16 __bitwise be16;
typedef u16 __bitwise le16;
typedef u32 __bitwise be32;
typedef u32 __bitwise le32;
typedef u64 __bitwise be64;
typedef u64 __bitwise le64;



struct ieee80211_hdr {
	le16 frame_control;
	le16 duration_id;
	u8 addr1[6];
	u8 addr2[6];
	u8 addr3[6];
	le16 seq_ctrl;
	/* followed by 'u8 addr4[6];' if ToDS and FromDS is set in data frame
	 */
} STRUCT_PACKED;


#define WLAN_SA_QUERY_TR_ID_LEN 2
#ifndef ETH_ALEN
#define ETH_ALEN 6
#endif


struct ieee80211_mgmt {
	le16 frame_control;	/*2 bytes*/
	le16 duration;		/*2 bytes*/
	u8 da[6];			/*1 x 6 = 6 bytes*/
	u8 sa[6];				/*1 x 6 = 6 bytes*/
	u8 bssid[6];			/*1 x 6 = 6 bytes*/
	le16 seq_ctrl;		/*2 bytes*/
	union {
		struct {
			le16 auth_alg;
			le16 auth_transaction;
			le16 status_code;
			/* possibly followed by Challenge text */
			u8 variable[];
		} STRUCT_PACKED auth;
		struct {
			le16 reason_code;
			u8 variable[];
		} STRUCT_PACKED deauth;
		struct {
			le16 capab_info;
			le16 listen_interval;
			/* followed by SSID and Supported rates */
			u8 variable[];
		} STRUCT_PACKED assoc_req;
		struct {
			le16 capab_info;
			le16 status_code;
			le16 aid;
			/* followed by Supported rates */
			u8 variable[];
		} STRUCT_PACKED assoc_resp, reassoc_resp;
		struct {
			le16 capab_info;
			le16 listen_interval;
			u8 current_ap[6];
			/* followed by SSID and Supported rates */
			u8 variable[];
		} STRUCT_PACKED reassoc_req;
		struct {
			le16 reason_code;
			u8 variable[];
		} STRUCT_PACKED disassoc;
		struct {
			u8 timestamp[8];
			le16 beacon_int;
			le16 capab_info;
			/* followed by some of SSID, Supported rates,
			 * FH Params, DS Params, CF Params, IBSS Params, TIM */
			u8 variable[];
		} STRUCT_PACKED beacon;
		struct {
			/* only variable items: SSID, Supported rates */
			u8 variable[0];
		} STRUCT_PACKED probe_req;
		struct {
			u8 timestamp[8];
			le16 beacon_int;
			le16 capab_info;
			/* followed by some of SSID, Supported rates,
			 * FH Params, DS Params, CF Params, IBSS Params */
			u8 variable[];
		} STRUCT_PACKED probe_resp;
		struct {
			u8 category;
			union {
				struct {
					u8 action_code;
					u8 dialog_token;
					u8 status_code;
					u8 variable[];
				} STRUCT_PACKED wmm_action;
				struct{
					u8 action_code;
					u8 element_id;
					u8 length;
					u8 switch_mode;
					u8 new_chan;
					u8 switch_count;
				} STRUCT_PACKED chan_switch;
				struct {
					u8 action;
					u8 sta_addr[ETH_ALEN];
					u8 target_ap_addr[ETH_ALEN];
					u8 variable[]; /* FT Request */
				} STRUCT_PACKED ft_action_req;
				struct {
					u8 action;
					u8 sta_addr[ETH_ALEN];
					u8 target_ap_addr[ETH_ALEN];
					le16 status_code;
					u8 variable[]; /* FT Request */
				} STRUCT_PACKED ft_action_resp;
				struct {
					u8 action;
					u8 trans_id[WLAN_SA_QUERY_TR_ID_LEN];
				} STRUCT_PACKED sa_query_req;
				struct {
					u8 action; /* */
					u8 trans_id[WLAN_SA_QUERY_TR_ID_LEN];
				} STRUCT_PACKED sa_query_resp;
				struct {
					u8 action;
					u8 dialogtoken;
					u8 variable[];
				} STRUCT_PACKED wnm_sleep_req;
				struct {
					u8 action;
					u8 dialogtoken;
					le16 keydata_len;
					u8 variable[];
				} STRUCT_PACKED wnm_sleep_resp;
				struct {
					u8 action;
					u8 variable[];
				} STRUCT_PACKED public_action;
				struct {
					u8 action; /* 9 */
					u8 oui[3];
					/* Vendor-specific content */
					u8 variable[];
				} STRUCT_PACKED vs_public_action;
				struct {
					u8 action; /* 7 */
					u8 dialog_token;
					u8 req_mode;
					le16 disassoc_timer;
					u8 validity_interval;
					/* BSS Termination Duration (optional),
					 * Session Information URL (optional),
					 * BSS Transition Candidate List
					 * Entries */
					u8 variable[];
				} STRUCT_PACKED bss_tm_req;
				struct {
					u8 action; /* 8 */
					u8 dialog_token;
					u8 status_code;
					u8 bss_termination_delay;
					/* Target BSSID (optional),
					 * BSS Transition Candidate List
					 * Entries (optional) */
					u8 variable[];
				} STRUCT_PACKED bss_tm_resp;
				struct {
					u8 action; /* 6 */
					u8 dialog_token;
					u8 query_reason;
					/* BSS Transition Candidate List
					 * Entries (optional) */
					u8 variable[];
				} STRUCT_PACKED bss_tm_query;
				struct {
					u8 action; /* 15 */
					u8 variable[];
				} STRUCT_PACKED slf_prot_action;
				struct {
					u8 action;
					u8 variable[];
				} STRUCT_PACKED fst_action;
			} u;
		} STRUCT_PACKED action;
	} u;
} STRUCT_PACKED;


#ifndef bswap_16
#define bswap_16(a) ((((u16) (a) << 8) & 0xff00) | (((u16) (a) >> 8) & 0xff))
#endif

#ifndef __BYTE_ORDER
#ifndef __LITTLE_ENDIAN
#ifndef __BIG_ENDIAN
#define __LITTLE_ENDIAN 1234
#define __BIG_ENDIAN 4321
#if defined(sparc)
#define __BYTE_ORDER __BIG_ENDIAN
#endif
#endif /* __BIG_ENDIAN */
#endif /* __LITTLE_ENDIAN */
#endif /* __BYTE_ORDER */

#if __BYTE_ORDER == __LITTLE_ENDIAN
/*now i know that rt4230w is the little_endian mode*/
#define le_to_host16(n) ((__force u16) (le16) (n))

#elif __BYTE_ORDER == __BIG_ENDIAN
/*we know the arm is BIG_ENDIAN mode*/
#define le_to_host16(n) bswap_16(n)

#endif

#define WLAN_FC_GET_TYPE(fc)	(((fc) & 0x000c) >> 2)
#define WLAN_FC_GET_STYPE(fc)	(((fc) & 0x00f0) >> 4)

#define WLAN_FC_TYPE_MGMT		0
#define WLAN_FC_TYPE_CTRL		1
#define WLAN_FC_TYPE_DATA		2

/* management */
#define WLAN_FC_STYPE_ASSOC_REQ		0
#define WLAN_FC_STYPE_ASSOC_RESP		1
#define WLAN_FC_STYPE_REASSOC_REQ	2
#define WLAN_FC_STYPE_REASSOC_RESP	3
#define WLAN_FC_STYPE_PROBE_REQ		4
#define WLAN_FC_STYPE_PROBE_RESP		5
#define WLAN_FC_STYPE_BEACON			8
#define WLAN_FC_STYPE_ATIM			9
#define WLAN_FC_STYPE_DISASSOC		10
#define WLAN_FC_STYPE_AUTH			11
#define WLAN_FC_STYPE_DEAUTH			12
#define WLAN_FC_STYPE_ACTION			13

#define IEEE80211_HDRLEN (sizeof(struct ieee80211_hdr))

#ifndef MAC2STR
#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACSTR  "%02x:%02x:%02x:%02x:%02x:%02x"
#endif

/******************************2017-02-24***************************************/
#if 0
/* Element ID  */
#define IEEE80211_ELEMID_RSN 48
#define IEEE80211_ELEMID_VENDOR 221
#define IEEE80211_CAPINFO_PRIVACY           0x0010
#endif

#define IEEE80211_ADDR_LEN  		6       /* size of 802.11 address */
#define IEEE80211_RATE_MAXSIZE  	44      /* max rates we'll handle */
#define IEEE80211_RATE_VAL             	0x7f

/*
 * Station information block; the mac address is used
 * to retrieve other data like stats, unicast key, etc.
 */
struct ieee80211req_sta_info {
	u_int16_t       isi_len;                /* length (mult of 4) */
	u_int16_t       isi_freq;               /* MHz */
	u_int32_t   isi_flags;      /* channel flags */
	u_int16_t       isi_state;              /* state flags */
	u_int8_t        isi_authmode;           /* authentication algorithm */
	int8_t          isi_rssi;
	int8_t          isi_min_rssi;
	int8_t          isi_max_rssi;
	u_int16_t       isi_capinfo;            /* capabilities */
	u_int8_t        isi_athflags;           /* Atheros capabilities */
	u_int8_t        isi_erp;                /* ERP element */
	u_int8_t    isi_ps;         /* psmode */
	u_int8_t        isi_macaddr[IEEE80211_ADDR_LEN];
	u_int8_t        isi_nrates;
	                                        /* negotiated rates */
	u_int8_t        isi_rates[IEEE80211_RATE_MAXSIZE];
	u_int8_t        isi_txrate;             /* index to isi_rates[] */
	u_int32_t   isi_txratekbps; /* tx rate in Kbps, for 11n */
	u_int16_t       isi_ie_len;             /* IE length */
	u_int16_t       isi_associd;            /* assoc response */
	u_int16_t       isi_txpower;            /* current tx power */
	u_int16_t       isi_vlan;               /* vlan tag */
	u_int16_t       isi_txseqs[17];         /* seq to be transmitted */
	u_int16_t       isi_rxseqs[17];         /* seq previous for qos frames*/
	u_int16_t       isi_inact;              /* inactivity timer */
	u_int8_t        isi_uapsd;              /* UAPSD queues */
	u_int8_t        isi_opmode;             /* sta operating mode */
	u_int8_t        isi_cipher;
	u_int32_t       isi_assoc_time;         /* sta association time */
	struct timespec isi_tr069_assoc_time;   /* sta association time in timespec format */


	u_int16_t   isi_htcap;      /* HT capabilities */
	u_int32_t   isi_rxratekbps; /* rx rate in Kbps */
	                        /* We use this as a common variable for legacy rates
	                           and lln. We do not attempt to make it symmetrical
	                           to isi_txratekbps and isi_txrate, which seem to be
	                           separate due to legacy code. */
	/* XXX frag state? */
	/* variable length IE data */
	u_int8_t isi_maxrate_per_client; /* Max rate per client */
	u_int16_t   isi_stamode;        /* Wireless mode for connected sta */
	u_int32_t isi_ext_cap;              /* Extended capabilities */
	u_int8_t isi_nss;         /* number of tx and rx chains */
	u_int8_t isi_is_256qam;    /* 256 QAM support */
};


t_log_p logopt_stainfo;
#define LOG_STA_FILE				"/tmp/historical_stations.log"

#define log_sta_info(fmt,...) \
	do { \
		debug_log_print(logopt_stainfo, eLOG_LEVEL_INFOR, NULL, \
			0, 0, (fmt), ##__VA_ARGS__); \
	} while(0)

#define log_stainfo_init() \
	debug_log_init(&logopt_stainfo, LOG_STA_FILE, 0, LOG_LEVEL)

int finde_dest_stations(const char *ifname, const char *statocheck);


#endif  /*__IWEVENT__H__*/




