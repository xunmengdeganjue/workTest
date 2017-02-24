/******************************************************************************/
/*-----------------Following Code Added by Skysoft--------------------------------*/

#ifndef __IWEVENT__H__
#define __IWEVENT__H__

 #include <sys/socket.h>
 #include <sys/un.h> /*for   struct sockaddr_un*/

#include <stdint.h>	
#include <err.h>
#include "logopt.h"
//typedef unsigned long mp_digit;
//typedef u64 mp_word;


//#ifdef __GNUC__
//#define PRINTF_FORMAT(a,b) __attribute__ ((format (printf, (a), (b))))
//#define STRUCT_PACKED __attribute__ ((packed))
//#else
#define PRINTF_FORMAT(a,b)
#define STRUCT_PACKED
//#endif


/*
 * Definitions for sparse validation
 * (http://kernel.org/pub/linux/kernel/people/josh/sparse/)
 */
//#ifdef __CHECKER__
//#define __force __attribute__((force))
//#define __bitwise __attribute__((bitwise))
//#else
#define __force
#define __bitwise
//#endif

typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;

//typedef int64_t s64;
typedef int32_t s32;

//typedef int16_t s16;
//typedef int8_t s8;


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

#ifndef __func__
#define __func__ __FUNCTION__
#endif

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
#define WLAN_FC_STYPE_ASSOC_RESP	1
#define WLAN_FC_STYPE_REASSOC_REQ	2
#define WLAN_FC_STYPE_REASSOC_RESP	3
#define WLAN_FC_STYPE_PROBE_REQ		4
#define WLAN_FC_STYPE_PROBE_RESP	5
#define WLAN_FC_STYPE_BEACON		8
#define WLAN_FC_STYPE_ATIM		9
#define WLAN_FC_STYPE_DISASSOC		10
#define WLAN_FC_STYPE_AUTH		11
#define WLAN_FC_STYPE_DEAUTH		12
#define WLAN_FC_STYPE_ACTION		13

#define IEEE80211_HDRLEN (sizeof(struct ieee80211_hdr))

#ifndef MAC2STR
#define MAC2STR(a) (a)[0], (a)[1], (a)[2], (a)[3], (a)[4], (a)[5]
#define MACSTR  "%02x:%02x:%02x:%02x:%02x:%02x"
#endif

#define trace_enter() \
	do { \
		printf("\033[32mNICK:[%s]:[%d]:Enter\033[0m\n",__FUNCTION__,__LINE__);\
		}while(0)
#define trace_exit() \
	do{\
		printf("\033[32mNICK:[%s]:[%d]:Exit\033[0m\n",__FUNCTION__,__LINE__);\
		}while(0)
#define trace_line() \
	do{\
		printf("\033[32m[%s]:[%s]:[%d]:Trace line\033[0m\n",__FILE__,__FUNCTION__,__LINE__);\
		}while(0)

/******************************2017-02-24***************************************/


#ifndef     IFNAMSIZ
#define     IFNAMSIZ    16
#endif

/* Element ID  */
#define IEEE80211_ELEMID_RSN 48
#define IEEE80211_ELEMID_VENDOR 221
#define IEEE80211_CAPINFO_PRIVACY           0x0010

#define IEEE80211_ADDR_LEN  6       /* size of 802.11 address */

#define IEEE80211_RATE_MAXSIZE  44              /* max rates we'll handle */


/*
 * Scan result data returned for IEEE80211_IOC_SCAN_RESULTS.
 */
struct ieee80211req_scan_result {
	u_int16_t	isr_len;		/* length (mult of 4) */
	u_int16_t	isr_freq;		/* MHz */
	u_int32_t	isr_flags;		/* channel flags */
	u_int8_t	isr_noise;
	u_int8_t	isr_rssi;
	u_int8_t	isr_intval;		/* beacon interval */
	u_int16_t	isr_capinfo;		/* capabilities */
	u_int8_t	isr_erp;		/* ERP element */
	u_int8_t	isr_bssid[IEEE80211_ADDR_LEN];
	u_int8_t	isr_nrates;
	u_int8_t	isr_rates[IEEE80211_RATE_MAXSIZE];
	u_int8_t	isr_ssid_len;		/* SSID length */
	u_int16_t	isr_ie_len;		/* IE length */
	u_int8_t	isr_pad[4];
	/* variable length SSID followed by IE data */
};

#define IEEE80211_CAPINFO_ESS               0x0001
#define IEEE80211_CAPINFO_IBSS              0x0002
#define IEEE80211_CAPINFO_CF_POLLABLE       0x0004
#define IEEE80211_CAPINFO_CF_POLLREQ        0x0008
#define IEEE80211_CAPINFO_PRIVACY           0x0010
#define IEEE80211_CAPINFO_SHORT_PREAMBLE    0x0020
#define IEEE80211_CAPINFO_PBCC              0x0040
#define IEEE80211_CAPINFO_CHNL_AGILITY      0x0080
#define IEEE80211_CAPINFO_SPECTRUM_MGMT     0x0100
#define IEEE80211_CAPINFO_QOS               0x0200
#define IEEE80211_CAPINFO_SHORT_SLOTTIME    0x0400
#define IEEE80211_CAPINFO_APSD              0x0800
#define IEEE80211_CAPINFO_RADIOMEAS         0x1000
#define IEEE80211_CAPINFO_DSSSOFDM          0x2000

#define IEEE80211_RATE_VAL              0x7f


void list_scan(const char *ifname);


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


/* HT capability flags */
#define IEEE80211_HTCAP_C_ADVCODING             0x0001
#define IEEE80211_HTCAP_C_CHWIDTH40             0x0002
#define IEEE80211_HTCAP_C_SMPOWERSAVE_STATIC    0x0000 /* Capable of SM Power Save (Static) */
#define IEEE80211_HTCAP_C_SMPOWERSAVE_DYNAMIC   0x0004 /* Capable of SM Power Save (Dynamic) */
#define IEEE80211_HTCAP_C_SM_RESERVED           0x0008 /* Reserved */
#define IEEE80211_HTCAP_C_SMPOWERSAVE_DISABLED            0x000c /* SM enabled, no SM Power Save */
#define IEEE80211_HTCAP_C_GREENFIELD            0x0010
#define IEEE80211_HTCAP_C_SHORTGI20             0x0020
#define IEEE80211_HTCAP_C_SHORTGI40             0x0040
#define IEEE80211_HTCAP_C_TXSTBC                0x0080
#define IEEE80211_HTCAP_C_TXSTBC_S                   7
#define IEEE80211_HTCAP_C_RXSTBC                0x0300  /* 2 bits */
#define IEEE80211_HTCAP_C_RXSTBC_S                   8
#define IEEE80211_HTCAP_C_DELAYEDBLKACK         0x0400
#define IEEE80211_HTCAP_C_MAXAMSDUSIZE          0x0800  /* 1 = 8K, 0 = 3839B */
#define IEEE80211_HTCAP_C_DSSSCCK40             0x1000
#define IEEE80211_HTCAP_C_PSMP                  0x2000
#define IEEE80211_HTCAP_C_INTOLERANT40          0x4000
#define IEEE80211_HTCAP_C_LSIGTXOPPROT          0x8000

#define IEEE80211_HTCAP_C_SM_MASK               0x000c /* Spatial Multiplexing (SM) capabitlity bitmask */


void list_stations(const char *ifname);

t_log_p logopt_stainfo;
/* Macro constant definitions. */
#define LOG_STA_FILE				"/tmp/historical_stations.log"
#define log_sta_info(fmt,...) \
	do { \
		debug_log_print(logopt_stainfo, eLOG_LEVEL_INFOR, NULL, \
			0, 0, (fmt), ##__VA_ARGS__); \
	} while(0)

#define log_stainfo_init() \
	debug_log_init(&logopt_stainfo, LOG_STA_FILE, 0, LOG_LEVEL)



#if 0
/******************************2017-02-21***************************************/
/*

	following code are for the analysising of the authentication.

*/
//#if 0

/**
 * enum reg_type - Regulatory change types
 */
enum reg_type {
	REGDOM_TYPE_UNKNOWN,
	REGDOM_TYPE_COUNTRY,
	REGDOM_TYPE_WORLD,
	REGDOM_TYPE_CUSTOM_WORLD,
	REGDOM_TYPE_INTERSECTION,
};


/**
 * enum reg_change_initiator - Regulatory change initiator
 */
enum reg_change_initiator {
	REGDOM_SET_BY_CORE,
	REGDOM_SET_BY_USER,
	REGDOM_SET_BY_DRIVER,
	REGDOM_SET_BY_COUNTRY_IE,
	REGDOM_BEACON_HINT,
};
#define SSID_MAX_LEN 32
#define WPAS_MAX_SCAN_SSIDS 16
/**
 * struct wpa_driver_scan_params - Scan parameters
 * Data for struct wpa_driver_ops::scan2().
 */
struct wpa_driver_scan_params {
	/**
	 * ssids - SSIDs to scan for
	 */
	struct wpa_driver_scan_ssid {
		/**
		 * ssid - specific SSID to scan for (ProbeReq)
		 * %NULL or zero-length SSID is used to indicate active scan
		 * with wildcard SSID.
		 */
		const u8 *ssid;
		/**
		 * ssid_len: Length of the SSID in octets
		 */
		size_t ssid_len;
	} ssids[WPAS_MAX_SCAN_SSIDS];

	/**
	 * num_ssids - Number of entries in ssids array
	 * Zero indicates a request for a passive scan.
	 */
	size_t num_ssids;

	/**
	 * extra_ies - Extra IE(s) to add into Probe Request or %NULL
	 */
	const u8 *extra_ies;

	/**
	 * extra_ies_len - Length of extra_ies in octets
	 */
	size_t extra_ies_len;

	/**
	 * freqs - Array of frequencies to scan or %NULL for all frequencies
	 *
	 * The frequency is set in MHz. The array is zero-terminated.
	 */
	int *freqs;

	/**
	 * filter_ssids - Filter for reporting SSIDs
	 *
	 * This optional parameter can be used to request the driver wrapper to
	 * filter scan results to include only the specified SSIDs. %NULL
	 * indicates that no filtering is to be done. This can be used to
	 * reduce memory needs for scan results in environments that have large
	 * number of APs with different SSIDs.
	 *
	 * The driver wrapper is allowed to take this allocated buffer into its
	 * own use by setting the pointer to %NULL. In that case, the driver
	 * wrapper is responsible for freeing the buffer with os_free() once it
	 * is not needed anymore.
	 */
	struct wpa_driver_scan_filter {
		u8 ssid[SSID_MAX_LEN];
		size_t ssid_len;
	} *filter_ssids;

	/**
	 * num_filter_ssids - Number of entries in filter_ssids array
	 */
	size_t num_filter_ssids;

	/**
	 * filter_rssi - Filter by RSSI
	 *
	 * The driver may filter scan results in firmware to reduce host
	 * wakeups and thereby save power. Specify the RSSI threshold in s32
	 * dBm.
	 */
	s32 filter_rssi;

	/**
	 * p2p_probe - Used to disable CCK (802.11b) rates for P2P probes
	 *
	 * When set, the driver is expected to remove rates 1, 2, 5.5, and 11
	 * Mbps from the support rates element(s) in the Probe Request frames
	 * and not to transmit the frames at any of those rates.
	 */
	unsigned int p2p_probe:1;

	/**
	 * only_new_results - Request driver to report only new results
	 *
	 * This is used to request the driver to report only BSSes that have
	 * been detected after this scan request has been started, i.e., to
	 * flush old cached BSS entries.
	 */
	unsigned int only_new_results:1;

	/**
	 * low_priority - Requests driver to use a lower scan priority
	 *
	 * This is used to request the driver to use a lower scan priority
	 * if it supports such a thing.
	 */
	unsigned int low_priority:1;

	/**
	 * mac_addr_rand - Requests driver to randomize MAC address
	 */
	unsigned int mac_addr_rand:1;

	/**
	 * mac_addr - MAC address used with randomization. The address cannot be
	 * a multicast one, i.e., bit 0 of byte 0 should not be set.
	 */
	const u8 *mac_addr;

	/**
	 * mac_addr_mask - MAC address mask used with randomization.
	 *
	 * Bits that are 0 in the mask should be randomized. Bits that are 1 in
	 * the mask should be taken as is from mac_addr. The mask should not
	 * allow the generation of a multicast address, i.e., bit 0 of byte 0
	 * must be set.
	 */
	const u8 *mac_addr_mask;

	/*
	 * NOTE: Whenever adding new parameters here, please make sure
	 * wpa_scan_clone_params() and wpa_scan_free_params() get updated with
	 * matching changes.
	 */
};


/**
 * enum hostapd_hw_mode - Hardware mode
 */
enum hostapd_hw_mode {
	HOSTAPD_MODE_IEEE80211B,
	HOSTAPD_MODE_IEEE80211G,
	HOSTAPD_MODE_IEEE80211A,
	HOSTAPD_MODE_IEEE80211AD,
	HOSTAPD_MODE_IEEE80211ANY,
	NUM_HOSTAPD_MODES
};

/* enum chan_width - Channel width definitions */
enum chan_width {
	CHAN_WIDTH_20_NOHT,
	CHAN_WIDTH_20,
	CHAN_WIDTH_40,
	CHAN_WIDTH_80,
	CHAN_WIDTH_80P80,
	CHAN_WIDTH_160,
	CHAN_WIDTH_UNKNOWN
};

/**
 * struct dl_list - Doubly-linked list
 */
struct dl_list {
	struct dl_list *next;
	struct dl_list *prev;
};


/**
 * struct wmm_params - WMM parameterss configured for this association
 * @info_bitmap: Bitmap of valid wmm_params info; indicates what fields
 *	of the struct contain valid information.
 * @uapsd_queues: Bitmap of ACs configured for uapsd (valid only if
 *	%WMM_PARAMS_UAPSD_QUEUES_INFO is set)
 */
struct wmm_params {
	u8 info_bitmap;
	u8 uapsd_queues;
};


struct wpa_freq_range_list {
	struct wpa_freq_range {
		unsigned int min;
		unsigned int max;
	} *range;
	unsigned int num;
};


/**
 * struct wpa_signal_info - Information about channel signal quality
 */
struct wpa_signal_info {
	u32 frequency;
	int above_threshold;
	int current_signal;
	int avg_signal;
	int avg_beacon_signal;
	int current_noise;
	int current_txrate;
	enum chan_width chanwidth;
	int center_frq1;
	int center_frq2;
};

//#if 0
/**
 * union wpa_event_data - Additional data for wpa_supplicant_event() calls
 */
union wpa_event_data {
	/**
	 * struct assoc_info - Data for EVENT_ASSOC and EVENT_ASSOCINFO events
	 *
	 * This structure is optional for EVENT_ASSOC calls and required for
	 * EVENT_ASSOCINFO calls. By using EVENT_ASSOC with this data, the
	 * driver interface does not need to generate separate EVENT_ASSOCINFO
	 * calls.
	 */
	struct assoc_info {
		/**
		 * reassoc - Flag to indicate association or reassociation
		 */
		int reassoc;

		/**
		 * req_ies - (Re)Association Request IEs
		 *
		 * If the driver generates WPA/RSN IE, this event data must be
		 * returned for WPA handshake to have needed information. If
		 * wpa_supplicant-generated WPA/RSN IE is used, this
		 * information event is optional.
		 *
		 * This should start with the first IE (fixed fields before IEs
		 * are not included).
		 */
		const u8 *req_ies;

		/**
		 * req_ies_len - Length of req_ies in bytes
		 */
		size_t req_ies_len;

		/**
		 * resp_ies - (Re)Association Response IEs
		 *
		 * Optional association data from the driver. This data is not
		 * required WPA, but may be useful for some protocols and as
		 * such, should be reported if this is available to the driver
		 * interface.
		 *
		 * This should start with the first IE (fixed fields before IEs
		 * are not included).
		 */
		const u8 *resp_ies;

		/**
		 * resp_ies_len - Length of resp_ies in bytes
		 */
		size_t resp_ies_len;

		/**
		 * beacon_ies - Beacon or Probe Response IEs
		 *
		 * Optional Beacon/ProbeResp data: IEs included in Beacon or
		 * Probe Response frames from the current AP (i.e., the one
		 * that the client just associated with). This information is
		 * used to update WPA/RSN IE for the AP. If this field is not
		 * set, the results from previous scan will be used. If no
		 * data for the new AP is found, scan results will be requested
		 * again (without scan request). At this point, the driver is
		 * expected to provide WPA/RSN IE for the AP (if WPA/WPA2 is
		 * used).
		 *
		 * This should start with the first IE (fixed fields before IEs
		 * are not included).
		 */
		const u8 *beacon_ies;

		/**
		 * beacon_ies_len - Length of beacon_ies */
		size_t beacon_ies_len;

		/**
		 * freq - Frequency of the operational channel in MHz
		 */
		unsigned int freq;

		/**
		 * wmm_params - WMM parameters used in this association.
		 */
		struct wmm_params wmm_params;

		/**
		 * addr - Station address (for AP mode)
		 */
		const u8 *addr;

		/**
		 * The following is the key management offload information
		 * @authorized
		 * @key_replay_ctr
		 * @key_replay_ctr_len
		 * @ptk_kck
		 * @ptk_kek_len
		 * @ptk_kek
		 * @ptk_kek_len
		 */

		/**
		 * authorized - Status of key management offload,
		 * 1 = successful
		 */
		int authorized;

		/**
		 * key_replay_ctr - Key replay counter value last used
		 * in a valid EAPOL-Key frame
		 */
		const u8 *key_replay_ctr;

		/**
		 * key_replay_ctr_len - The length of key_replay_ctr
		 */
		size_t key_replay_ctr_len;

		/**
		 * ptk_kck - The derived PTK KCK
		 */
		const u8 *ptk_kck;

		/**
		 * ptk_kek_len - The length of ptk_kck
		 */
		size_t ptk_kck_len;

		/**
		 * ptk_kek - The derived PTK KEK
		 */
		const u8 *ptk_kek;

		/**
		 * ptk_kek_len - The length of ptk_kek
		 */
		size_t ptk_kek_len;
	} assoc_info;

	/**
	 * struct disassoc_info - Data for EVENT_DISASSOC events
	 */
	struct disassoc_info {
		/**
		 * addr - Station address (for AP mode)
		 */
		const u8 *addr;

		/**
		 * reason_code - Reason Code (host byte order) used in
		 *	Deauthentication frame
		 */
		u16 reason_code;

		/**
		 * ie - Optional IE(s) in Disassociation frame
		 */
		const u8 *ie;

		/**
		 * ie_len - Length of ie buffer in octets
		 */
		size_t ie_len;

		/**
		 * locally_generated - Whether the frame was locally generated
		 */
		int locally_generated;
	} disassoc_info;

	/**
	 * struct deauth_info - Data for EVENT_DEAUTH events
	 */
	struct deauth_info {
		/**
		 * addr - Station address (for AP mode)
		 */
		const u8 *addr;

		/**
		 * reason_code - Reason Code (host byte order) used in
		 *	Deauthentication frame
		 */
		u16 reason_code;

		/**
		 * ie - Optional IE(s) in Deauthentication frame
		 */
		const u8 *ie;

		/**
		 * ie_len - Length of ie buffer in octets
		 */
		size_t ie_len;

		/**
		 * locally_generated - Whether the frame was locally generated
		 */
		int locally_generated;
	} deauth_info;

	/**
	 * struct michael_mic_failure - Data for EVENT_MICHAEL_MIC_FAILURE
	 */
	struct michael_mic_failure {
		int unicast;
		const u8 *src;
	} michael_mic_failure;

	/**
	 * struct interface_status - Data for EVENT_INTERFACE_STATUS
	 */
	struct interface_status {
		char ifname[100];
		enum {
			EVENT_INTERFACE_ADDED, EVENT_INTERFACE_REMOVED
		} ievent;
	} interface_status;

	/**
	 * struct pmkid_candidate - Data for EVENT_PMKID_CANDIDATE
	 */
	struct pmkid_candidate {
		/** BSSID of the PMKID candidate */
		u8 bssid[ETH_ALEN];
		/** Smaller the index, higher the priority */
		int index;
		/** Whether RSN IE includes pre-authenticate flag */
		int preauth;
	} pmkid_candidate;

	/**
	 * struct stkstart - Data for EVENT_STKSTART
	 */
	struct stkstart {
		u8 peer[ETH_ALEN];
	} stkstart;

	/**
	 * struct tdls - Data for EVENT_TDLS
	 */
	struct tdls {
		u8 peer[ETH_ALEN];
		enum {
			TDLS_REQUEST_SETUP,
			TDLS_REQUEST_TEARDOWN,
			TDLS_REQUEST_DISCOVER,
		} oper;
		u16 reason_code; /* for teardown */
	} tdls;

	/**
	 * struct wnm - Data for EVENT_WNM
	 */
	struct wnm {
		u8 addr[ETH_ALEN];
		enum {
			WNM_OPER_SLEEP,
		} oper;
		enum {
			WNM_SLEEP_ENTER,
			WNM_SLEEP_EXIT
		} sleep_action;
		int sleep_intval;
		u16 reason_code;
		u8 *buf;
		u16 buf_len;
	} wnm;

	/**
	 * struct ft_ies - FT information elements (EVENT_FT_RESPONSE)
	 *
	 * During FT (IEEE 802.11r) authentication sequence, the driver is
	 * expected to use this event to report received FT IEs (MDIE, FTIE,
	 * RSN IE, TIE, possible resource request) to the supplicant. The FT
	 * IEs for the next message will be delivered through the
	 * struct wpa_driver_ops::update_ft_ies() callback.
	 */
	struct ft_ies {
		const u8 *ies;
		size_t ies_len;
		int ft_action;
		u8 target_ap[ETH_ALEN];
		/** Optional IE(s), e.g., WMM TSPEC(s), for RIC-Request */
		const u8 *ric_ies;
		/** Length of ric_ies buffer in octets */
		size_t ric_ies_len;
	} ft_ies;

	/**
	 * struct ibss_rsn_start - Data for EVENT_IBSS_RSN_START
	 */
	struct ibss_rsn_start {
		u8 peer[ETH_ALEN];
	} ibss_rsn_start;

	/**
	 * struct auth_info - Data for EVENT_AUTH events
	 */
	struct auth_info {
		u8 peer[ETH_ALEN];
		u8 bssid[ETH_ALEN];
		u16 auth_type;
		u16 auth_transaction;
		u16 status_code;
		const u8 *ies;
		size_t ies_len;
	} auth;

	/**
	 * struct assoc_reject - Data for EVENT_ASSOC_REJECT events
	 */
	struct assoc_reject {
		/**
		 * bssid - BSSID of the AP that rejected association
		 */
		const u8 *bssid;

		/**
		 * resp_ies - (Re)Association Response IEs
		 *
		 * Optional association data from the driver. This data is not
		 * required WPA, but may be useful for some protocols and as
		 * such, should be reported if this is available to the driver
		 * interface.
		 *
		 * This should start with the first IE (fixed fields before IEs
		 * are not included).
		 */
		const u8 *resp_ies;

		/**
		 * resp_ies_len - Length of resp_ies in bytes
		 */
		size_t resp_ies_len;

		/**
		 * status_code - Status Code from (Re)association Response
		 */
		u16 status_code;
	} assoc_reject;

	struct timeout_event {
		u8 addr[ETH_ALEN];
	} timeout_event;

	/**
	 * struct tx_status - Data for EVENT_TX_STATUS events
	 */
	struct tx_status {
		u16 type;
		u16 stype;
		const u8 *dst;
		const u8 *data;
		size_t data_len;
		int ack;
	} tx_status;

	/**
	 * struct rx_from_unknown - Data for EVENT_RX_FROM_UNKNOWN events
	 */
	struct rx_from_unknown {
		const u8 *bssid;
		const u8 *addr;
		int wds;
	} rx_from_unknown;

	/**
	 * struct rx_mgmt - Data for EVENT_RX_MGMT events
	 */
	struct rx_mgmt {
		const u8 *frame;
		size_t frame_len;
		u32 datarate;

		/**
		 * drv_priv - Pointer to store driver private BSS information
		 *
		 * If not set to NULL, this is used for comparison with
		 * hostapd_data->drv_priv to determine which BSS should process
		 * the frame.
		 */
		void *drv_priv;

		/**
		 * freq - Frequency (in MHz) on which the frame was received
		 */
		int freq;

		/**
		 * ssi_signal - Signal strength in dBm (or 0 if not available)
		 */
		int ssi_signal;
	} rx_mgmt;

	/**
	 * struct remain_on_channel - Data for EVENT_REMAIN_ON_CHANNEL events
	 *
	 * This is also used with EVENT_CANCEL_REMAIN_ON_CHANNEL events.
	 */
	struct remain_on_channel {
		/**
		 * freq - Channel frequency in MHz
		 */
		unsigned int freq;

		/**
		 * duration - Duration to remain on the channel in milliseconds
		 */
		unsigned int duration;
	} remain_on_channel;

	/**
	 * struct scan_info - Optional data for EVENT_SCAN_RESULTS events
	 * @aborted: Whether the scan was aborted
	 * @freqs: Scanned frequencies in MHz (%NULL = all channels scanned)
	 * @num_freqs: Number of entries in freqs array
	 * @ssids: Scanned SSIDs (%NULL or zero-length SSID indicates wildcard
	 *	SSID)
	 * @num_ssids: Number of entries in ssids array
	 */
	struct scan_info {
		int aborted;
		const int *freqs;
		size_t num_freqs;
		struct wpa_driver_scan_ssid ssids[WPAS_MAX_SCAN_SSIDS];
		size_t num_ssids;
	} scan_info;

	/**
	 * struct rx_probe_req - Data for EVENT_RX_PROBE_REQ events
	 */
	struct rx_probe_req {
		/**
		 * sa - Source address of the received Probe Request frame
		 */
		const u8 *sa;

		/**
		 * da - Destination address of the received Probe Request frame
		 *	or %NULL if not available
		 */
		const u8 *da;

		/**
		 * bssid - BSSID of the received Probe Request frame or %NULL
		 *	if not available
		 */
		const u8 *bssid;

		/**
		 * ie - IEs from the Probe Request body
		 */
		const u8 *ie;

		/**
		 * ie_len - Length of ie buffer in octets
		 */
		size_t ie_len;

		/**
		 * signal - signal strength in dBm (or 0 if not available)
		 */
		int ssi_signal;
	} rx_probe_req;

	/**
	 * struct new_sta - Data for EVENT_NEW_STA events
	 */
	struct new_sta {
		const u8 *addr;
	} new_sta;

	/**
	 * struct eapol_rx - Data for EVENT_EAPOL_RX events
	 */
	struct eapol_rx {
		const u8 *src;
		const u8 *data;
		size_t data_len;
	} eapol_rx;

	/**
	 * signal_change - Data for EVENT_SIGNAL_CHANGE events
	 */
	struct wpa_signal_info signal_change;

	/**
	 * struct best_channel - Data for EVENT_BEST_CHANNEL events
	 * @freq_24: Best 2.4 GHz band channel frequency in MHz
	 * @freq_5: Best 5 GHz band channel frequency in MHz
	 * @freq_overall: Best channel frequency in MHz
	 *
	 * 0 can be used to indicate no preference in either band.
	 */
	struct best_channel {
		int freq_24;
		int freq_5;
		int freq_overall;
	} best_chan;

	struct unprot_deauth {
		const u8 *sa;
		const u8 *da;
		u16 reason_code;
	} unprot_deauth;

	struct unprot_disassoc {
		const u8 *sa;
		const u8 *da;
		u16 reason_code;
	} unprot_disassoc;

	/**
	 * struct low_ack - Data for EVENT_STATION_LOW_ACK events
	 * @addr: station address
	 */
	struct low_ack {
		u8 addr[ETH_ALEN];
	} low_ack;

	/**
	 * struct ibss_peer_lost - Data for EVENT_IBSS_PEER_LOST
	 */
	struct ibss_peer_lost {
		u8 peer[ETH_ALEN];
	} ibss_peer_lost;

	/**
	 * struct driver_gtk_rekey - Data for EVENT_DRIVER_GTK_REKEY
	 */
	struct driver_gtk_rekey {
		const u8 *bssid;
		const u8 *replay_ctr;
	} driver_gtk_rekey;

	/**
	 * struct client_poll - Data for EVENT_DRIVER_CLIENT_POLL_OK events
	 * @addr: station address
	 */
	struct client_poll {
		u8 addr[ETH_ALEN];
	} client_poll;

	/**
	 * struct eapol_tx_status
	 * @dst: Original destination
	 * @data: Data starting with IEEE 802.1X header (!)
	 * @data_len: Length of data
	 * @ack: Indicates ack or lost frame
	 *
	 * This corresponds to hapd_send_eapol if the frame sent
	 * there isn't just reported as EVENT_TX_STATUS.
	 */
	struct eapol_tx_status {
		const u8 *dst;
		const u8 *data;
		int data_len;
		int ack;
	} eapol_tx_status;

	/**
	 * struct ch_switch
	 * @freq: Frequency of new channel in MHz
	 * @ht_enabled: Whether this is an HT channel
	 * @ch_offset: Secondary channel offset
	 * @ch_width: Channel width
	 * @cf1: Center frequency 1
	 * @cf2: Center frequency 2
	 */
	struct ch_switch {
		int freq;
		int ht_enabled;
		int ch_offset;
		enum chan_width ch_width;
		int cf1;
		int cf2;
	} ch_switch;

	/**
	 * struct connect_failed - Data for EVENT_CONNECT_FAILED_REASON
	 * @addr: Remote client address
	 * @code: Reason code for connection failure
	 */
	struct connect_failed_reason {
		u8 addr[ETH_ALEN];
		enum {
			MAX_CLIENT_REACHED,
			BLOCKED_CLIENT
		} code;
	} connect_failed_reason;

	/**
	 * struct dfs_event - Data for radar detected events
	 * @freq: Frequency of the channel in MHz
	 */
	struct dfs_event {
		int freq;
		int ht_enabled;
		int chan_offset;
		enum chan_width chan_width;
		int cf1;
		int cf2;
        int timeout;
	} dfs_event;

	/**
	 * survey_results - Survey result data for EVENT_SURVEY
	 * @freq_filter: Requested frequency survey filter, 0 if request
	 *	was for all survey data
	 * @survey_list: Linked list of survey data (struct freq_survey)
	 */
	struct survey_results {
		unsigned int freq_filter;
		struct dl_list survey_list; /* struct freq_survey */
	} survey_results;

	/**
	 * channel_list_changed - Data for EVENT_CHANNEL_LIST_CHANGED
	 * @initiator: Initiator of the regulatory change
	 * @type: Regulatory change type
	 * @alpha2: Country code (or "" if not available)
	 */
	struct channel_list_changed {
		enum reg_change_initiator initiator;
		enum reg_type type;
		char alpha2[3];
	} channel_list_changed;

	/**
	 * freq_range - List of frequency ranges
	 *
	 * This is used as the data with EVENT_AVOID_FREQUENCIES.
	 */
	struct wpa_freq_range_list freq_range;

	/**
	 * struct mesh_peer
	 *
	 * @peer: Peer address
	 * @ies: Beacon IEs
	 * @ie_len: Length of @ies
	 *
	 * Notification of new candidate mesh peer.
	 */
	struct mesh_peer {
		const u8 *peer;
		const u8 *ies;
		size_t ie_len;
	} mesh_peer;

	/**
	 * struct acs_selected_channels - Data for EVENT_ACS_CHANNEL_SELECTED
	 * @pri_channel: Selected primary channel
	 * @sec_channel: Selected secondary channel
	 * @vht_seg0_center_ch: VHT mode Segment0 center channel
	 * @vht_seg1_center_ch: VHT mode Segment1 center channel
	 * @ch_width: Selected Channel width by driver. Driver may choose to
	 *	change hostapd configured ACS channel width due driver internal
	 *	channel restrictions.
	 * hw_mode: Selected band (used with hw_mode=any)
	 */
	struct acs_selected_channels {
		u8 pri_channel;
		u8 sec_channel;
		u8 vht_seg0_center_ch;
		u8 vht_seg1_center_ch;
		u16 ch_width;
		enum hostapd_hw_mode hw_mode;
	} acs_selected_channels;
};

//#endif

/*add sub code for struct sta_info*/

enum mesh_plink_state {
	PLINK_LISTEN = 1,
	PLINK_OPEN_SENT,
	PLINK_OPEN_RCVD,
	PLINK_CNF_RCVD,
	PLINK_ESTAB,
	PLINK_HOLDING,
	PLINK_BLOCKED,
};

typedef long os_time_t;

struct os_time {
	os_time_t sec;
	os_time_t usec;
};

struct os_reltime {
	os_time_t sec;
	os_time_t usec;
};

#ifdef FALSE
#undef FALSE
#endif
#ifdef TRUE
#undef TRUE
#endif
typedef enum { FALSE = 0, TRUE = 1 } Boolean;

/* IEEE 802.11i */
#define PMKID_LEN 16
#define PMK_LEN 32
#define WPA_REPLAY_COUNTER_LEN 8
#define WPA_NONCE_LEN 32
#define WPA_KEY_RSC_LEN 8
#define WPA_GMK_LEN 32
#define WPA_GTK_MAX_LEN 32
#ifdef CONFIG_IEEE80211W
#define WPA_IGTK_LEN 16
#define WPA_IGTK_MAX_LEN 32
#endif /* CONFIG_IEEE80211W */

/* IEEE 802.11r */
#define MOBILITY_DOMAIN_ID_LEN 2
#define FT_R0KH_ID_MAX_LEN 48
#define FT_R1KH_ID_LEN 6
#define WPA_PMK_NAME_LEN 16

#define MAX_OWN_IE_OVERRIDE 256   //from wpa_auth.h

/* Maximum number of supported rates (from both Supported Rates and Extended
 * Supported Rates IEs). */
#define WLAN_SUPP_RATES_MAX 32

#define SAE_KCK_LEN 32
#define SAE_PMK_LEN 32
#define SAE_PMKID_LEN 16
#define SAE_KEYSEED_KEY_LEN 32
#define SAE_MAX_PRIME_LEN 512
#define SAE_MAX_ECC_PRIME_LEN 66
#define SAE_COMMIT_MAX_LEN (2 + 3 * SAE_MAX_PRIME_LEN)
#define SAE_CONFIRM_MAX_LEN (2 + SAE_MAX_PRIME_LEN)

/* per group key state machine data */
struct wpa_group {
	struct wpa_group *next;
	int vlan_id;

	Boolean GInit;
	int GKeyDoneStations;
	Boolean GTKReKey;
	int GTK_len;
	int GN, GM;
	Boolean GTKAuthenticator;
	u8 Counter[WPA_NONCE_LEN];

	enum {
		WPA_GROUP_GTK_INIT = 0,
		WPA_GROUP_SETKEYS, WPA_GROUP_SETKEYSDONE,
		WPA_GROUP_FATAL_FAILURE
	} wpa_group_state;

	u8 GMK[WPA_GMK_LEN];
	u8 GTK[2][WPA_GTK_MAX_LEN];
	u8 GNonce[WPA_NONCE_LEN];
	Boolean changed;
	Boolean first_sta_seen;
	Boolean reject_4way_hs_for_entropy;
#ifdef CONFIG_IEEE80211W
	u8 IGTK[2][WPA_IGTK_MAX_LEN];
	int GN_igtk, GM_igtk;
#endif /* CONFIG_IEEE80211W */
	/* Number of references except those in struct wpa_group->next */
	unsigned int references;
};

struct wpa_stsl_negotiation {
	struct wpa_stsl_negotiation *next;
	u8 initiator[ETH_ALEN];
	u8 peer[ETH_ALEN];
};

typedef enum {
	LOGGER_DEBUG, LOGGER_INFO, LOGGER_WARNING
} logger_level; /*from the wpa_auth.h of the hostapd*/

typedef enum {
	WPA_EAPOL_portEnabled, WPA_EAPOL_portValid, WPA_EAPOL_authorized,
	WPA_EAPOL_portControl_Auto, WPA_EAPOL_keyRun, WPA_EAPOL_keyAvailable,
	WPA_EAPOL_keyDone, WPA_EAPOL_inc_EapolFramesTx
} wpa_eapol_variable; /*from the wpa_auth.h of the hostapd*/

/**
 * enum mfp_options - Management frame protection (IEEE 802.11w) options
 */
enum mfp_options {
	NO_MGMT_FRAME_PROTECTION = 0,
	MGMT_FRAME_PROTECTION_OPTIONAL = 1,
	MGMT_FRAME_PROTECTION_REQUIRED = 2,
};/*from defs.h of the hostapd*/


struct ft_remote_r0kh {
	struct ft_remote_r0kh *next;
	u8 addr[ETH_ALEN];
	u8 id[FT_R0KH_ID_MAX_LEN];
	size_t id_len;
	u8 key[16];
};


struct ft_remote_r1kh {
	struct ft_remote_r1kh *next;
	u8 addr[ETH_ALEN];
	u8 id[FT_R1KH_ID_LEN];
	u8 key[16];
};
struct wpa_auth_config {
	int wpa;
	int wpa_key_mgmt;
	int wpa_pairwise;
	int wpa_group;
	int wpa_group_rekey;
	int wpa_strict_rekey;
	int wpa_gmk_rekey;
	int wpa_ptk_rekey;
	int rsn_pairwise;
	int rsn_preauth;
	int eapol_version;
	int peerkey;
	int identity_request_retry_interval;
	int wmm_enabled;
	int wmm_uapsd;
	int disable_pmksa_caching;
	int okc;
	int tx_status;
#ifdef CONFIG_IEEE80211W
	enum mfp_options ieee80211w;
	int group_mgmt_cipher;
#endif /* CONFIG_IEEE80211W */
#ifdef CONFIG_IEEE80211R
	u8 ssid[SSID_MAX_LEN];
	size_t ssid_len;
	u8 mobility_domain[MOBILITY_DOMAIN_ID_LEN];
	u8 r0_key_holder[FT_R0KH_ID_MAX_LEN];
	size_t r0_key_holder_len;
	u8 r1_key_holder[FT_R1KH_ID_LEN];
	u32 r0_key_lifetime;
	u32 reassociation_deadline;
	struct ft_remote_r0kh *r0kh_list;
	struct ft_remote_r1kh *r1kh_list;
	int pmk_r1_push;
	int ft_over_ds;
#endif /* CONFIG_IEEE80211R */
	int disable_gtk;
	int ap_mlme;
#ifdef CONFIG_TESTING_OPTIONS
	double corrupt_gtk_rekey_mic_probability;
	u8 own_ie_override[MAX_OWN_IE_OVERRIDE];
	size_t own_ie_override_len;
#endif /* CONFIG_TESTING_OPTIONS */
#ifdef CONFIG_P2P
	u8 ip_addr_go[4];
	u8 ip_addr_mask[4];
	u8 ip_addr_start[4];
	u8 ip_addr_end[4];
#endif /* CONFIG_P2P */
};
struct wpa_auth_callbacks {
	void *ctx;
	void (*logger)(void *ctx, const u8 *addr, logger_level level,
		       const char *txt);
	void (*disconnect)(void *ctx, const u8 *addr, u16 reason);
	int (*mic_failure_report)(void *ctx, const u8 *addr);
	void (*psk_failure_report)(void *ctx, const u8 *addr);
	void (*set_eapol)(void *ctx, const u8 *addr, wpa_eapol_variable var,
			  int value);
	int (*get_eapol)(void *ctx, const u8 *addr, wpa_eapol_variable var);
	const u8 * (*get_psk)(void *ctx, const u8 *addr, const u8 *p2p_dev_addr,
			      const u8 *prev_psk);
	int (*get_msk)(void *ctx, const u8 *addr, u8 *msk, size_t *len);
	int (*set_key)(void *ctx, int vlan_id, enum wpa_alg alg,
		       const u8 *addr, int idx, u8 *key, size_t key_len);
	int (*get_seqnum)(void *ctx, const u8 *addr, int idx, u8 *seq);
	int (*send_eapol)(void *ctx, const u8 *addr, const u8 *data,
			  size_t data_len, int encrypt);
	int (*for_each_sta)(void *ctx, int (*cb)(struct wpa_state_machine *sm,
						 void *ctx), void *cb_ctx);
	int (*for_each_auth)(void *ctx, int (*cb)(struct wpa_authenticator *a,
						  void *ctx), void *cb_ctx);
	int (*send_ether)(void *ctx, const u8 *dst, u16 proto, const u8 *data,
			  size_t data_len);
#ifdef CONFIG_IEEE80211R
	struct wpa_state_machine * (*add_sta)(void *ctx, const u8 *sta_addr);
	int (*send_ft_action)(void *ctx, const u8 *dst,
			      const u8 *data, size_t data_len);
	int (*add_tspec)(void *ctx, const u8 *sta_addr, u8 *tspec_ie,
			 size_t tspec_ielen);
#endif /* CONFIG_IEEE80211R */
#ifdef CONFIG_MESH
	int (*start_ampe)(void *ctx, const u8 *sta_addr);
#endif /* CONFIG_MESH */
};

struct radius_attr_data {
	u8 *data;
	size_t len;
};/*from radius.h of hostapd*/

struct radius_class_data {
	struct radius_attr_data *attr;
	size_t count;
};/*from radius.h of hostapd*/

/**
 * struct rsn_pmksa_cache_entry - PMKSA cache entry
 */
struct rsn_pmksa_cache_entry {
	struct rsn_pmksa_cache_entry *next, *hnext;
	u8 pmkid[PMKID_LEN];
	u8 pmk[PMK_LEN];
	size_t pmk_len;
	os_time_t expiration;
	int akmp; /* WPA_KEY_MGMT_* */
	u8 spa[ETH_ALEN];

	u8 *identity;
	size_t identity_len;
	struct wpabuf *cui;
	struct radius_class_data radius_class;
	u8 eap_type_authsrv;
	int vlan_id;
	int opportunistic;

	u32 acct_multi_session_id_hi;
	u32 acct_multi_session_id_lo;
};/*from the radius.h of the hostapd*/

#define WPA_EAPOL_KEY_MIC_MAX_LEN 24
#define WPA_KCK_MAX_LEN 24
#define WPA_KEK_MAX_LEN 32
#define WPA_TK_MAX_LEN 32

/**
 * struct wpa_ptk - WPA Pairwise Transient Key
 * IEEE Std 802.11i-2004 - 8.5.1.2 Pairwise key hierarchy
 */
struct wpa_ptk {
	u8 kck[WPA_KCK_MAX_LEN]; /* EAPOL-Key Key Confirmation Key (KCK) */
	u8 kek[WPA_KEK_MAX_LEN]; /* EAPOL-Key Key Encryption Key (KEK) */
	u8 tk[WPA_TK_MAX_LEN]; /* Temporal Key (TK) */
	size_t kck_len;
	size_t kek_len;
	size_t tk_len;
};

struct l2_packet_data {
	int fd; /* UNIX domain socket for privsep access */
	void (*rx_callback)(void *ctx, const u8 *src_addr,
			    const u8 *buf, size_t len);
	void *rx_callback_ctx;
	u8 own_addr[ETH_ALEN];
	char *own_socket_path;
	struct sockaddr_un priv_addr;
};


/**
 * struct wpa_sm - Internal WPA state machine data
 */
struct wpa_sm {
	u8 pmk[PMK_LEN];
	size_t pmk_len;
	struct wpa_ptk ptk, tptk;
	int ptk_set, tptk_set;
	unsigned int msg_3_of_4_ok:1;
	unsigned int tk_to_set:1;
	u8 snonce[WPA_NONCE_LEN];
	u8 anonce[WPA_NONCE_LEN]; /* ANonce from the last 1/4 msg */
	int renew_snonce;
	u8 rx_replay_counter[WPA_REPLAY_COUNTER_LEN];
	int rx_replay_counter_set;
	u8 request_counter[WPA_REPLAY_COUNTER_LEN];

	struct eapol_sm *eapol; /* EAPOL state machine from upper level code */

	struct rsn_pmksa_cache *pmksa; /* PMKSA cache */
	struct rsn_pmksa_cache_entry *cur_pmksa; /* current PMKSA entry */
	struct dl_list pmksa_candidates;

	struct l2_packet_data *l2_preauth;
	struct l2_packet_data *l2_preauth_br;
	struct l2_packet_data *l2_tdls;
	u8 preauth_bssid[ETH_ALEN]; /* current RSN pre-auth peer or
				     * 00:00:00:00:00:00 if no pre-auth is
				     * in progress */
	struct eapol_sm *preauth_eapol;

	struct wpa_sm_ctx *ctx;

	void *scard_ctx; /* context for smartcard callbacks */
	int fast_reauth; /* whether EAP fast re-authentication is enabled */

	void *network_ctx;
	int peerkey_enabled;
	int allowed_pairwise_cipher; /* bitfield of WPA_CIPHER_* */
	int proactive_key_caching;
	int eap_workaround;
	void *eap_conf_ctx;
	u8 ssid[32];
	size_t ssid_len;
	int wpa_ptk_rekey;
	int p2p;

	u8 own_addr[ETH_ALEN];
	const char *ifname;
	const char *bridge_ifname;
	u8 bssid[ETH_ALEN];

	unsigned int dot11RSNAConfigPMKLifetime;
	unsigned int dot11RSNAConfigPMKReauthThreshold;
	unsigned int dot11RSNAConfigSATimeout;

	unsigned int dot11RSNA4WayHandshakeFailures;

	/* Selected configuration (based on Beacon/ProbeResp WPA IE) */
	unsigned int proto;
	unsigned int pairwise_cipher;
	unsigned int group_cipher;
	unsigned int key_mgmt;
	unsigned int mgmt_group_cipher;

	int rsn_enabled; /* Whether RSN is enabled in configuration */
	int mfp; /* 0 = disabled, 1 = optional, 2 = mandatory */

	u8 *assoc_wpa_ie; /* Own WPA/RSN IE from (Re)AssocReq */
	size_t assoc_wpa_ie_len;
	u8 *ap_wpa_ie, *ap_rsn_ie;
	size_t ap_wpa_ie_len, ap_rsn_ie_len;

#ifdef CONFIG_PEERKEY
	struct wpa_peerkey *peerkey;
#endif /* CONFIG_PEERKEY */
#ifdef CONFIG_TDLS
	struct wpa_tdls_peer *tdls;
	int tdls_prohibited;
	int tdls_chan_switch_prohibited;
	int tdls_disabled;

	/* The driver supports TDLS */
	int tdls_supported;

	/*
	 * The driver requires explicit discovery/setup/teardown frames sent
	 * to it via tdls_mgmt.
	 */
	int tdls_external_setup;

	/* The driver supports TDLS channel switching */
	int tdls_chan_switch;
#endif /* CONFIG_TDLS */

#ifdef CONFIG_IEEE80211R
	u8 xxkey[PMK_LEN]; /* PSK or the second 256 bits of MSK */
	size_t xxkey_len;
	u8 pmk_r0[PMK_LEN];
	u8 pmk_r0_name[WPA_PMK_NAME_LEN];
	u8 pmk_r1[PMK_LEN];
	u8 pmk_r1_name[WPA_PMK_NAME_LEN];
	u8 mobility_domain[MOBILITY_DOMAIN_ID_LEN];
	u8 r0kh_id[FT_R0KH_ID_MAX_LEN];
	size_t r0kh_id_len;
	u8 r1kh_id[FT_R1KH_ID_LEN];
	int ft_completed;
	int over_the_ds_in_progress;
	u8 target_ap[ETH_ALEN]; /* over-the-DS target AP */
	int set_ptk_after_assoc;
	u8 mdie_ft_capab; /* FT Capability and Policy from target AP MDIE */
	u8 *assoc_resp_ies; /* MDIE and FTIE from (Re)Association Response */
	size_t assoc_resp_ies_len;
#endif /* CONFIG_IEEE80211R */

#ifdef CONFIG_P2P
	u8 p2p_ip_addr[3 * 4];
#endif /* CONFIG_P2P */
};


struct rsn_pmksa_cache {
	struct rsn_pmksa_cache_entry *pmksa; /* PMKSA cache */
	int pmksa_count; /* number of entries in PMKSA cache */
	struct wpa_sm *sm; /* TODO: get rid of this reference(?) */

	void (*free_cb)(struct rsn_pmksa_cache_entry *entry, void *ctx,
			enum pmksa_free_reason reason);
	void *ctx;
};


/* per authenticator data */
struct wpa_authenticator {
	struct wpa_group *group;

	unsigned int dot11RSNAStatsTKIPRemoteMICFailures;
	u32 dot11RSNAAuthenticationSuiteSelected;
	u32 dot11RSNAPairwiseCipherSelected;
	u32 dot11RSNAGroupCipherSelected;
	u8 dot11RSNAPMKIDUsed[PMKID_LEN];
	u32 dot11RSNAAuthenticationSuiteRequested; /* FIX: update */
	u32 dot11RSNAPairwiseCipherRequested; /* FIX: update */
	u32 dot11RSNAGroupCipherRequested; /* FIX: update */
	unsigned int dot11RSNATKIPCounterMeasuresInvoked;
	unsigned int dot11RSNA4WayHandshakeFailures;

	struct wpa_stsl_negotiation *stsl_negotiations;

	struct wpa_auth_config conf;
	struct wpa_auth_callbacks cb;

	u8 *wpa_ie;
	size_t wpa_ie_len;

	u8 addr[ETH_ALEN];

	struct rsn_pmksa_cache *pmksa;
	struct wpa_ft_pmk_cache *ft_pmk_cache;

#ifdef CONFIG_P2P
	struct bitfield *ip_pool;
#endif /* CONFIG_P2P */
};

/* max(dot11RSNAConfigGroupUpdateCount,dot11RSNAConfigPairwiseUpdateCount) */
#define RSNA_MAX_EAPOL_RETRIES 4
#define FT_R0KH_R1KH_PULL_NONCE_LEN 16

struct wpa_state_machine {
	struct wpa_authenticator *wpa_auth;
	struct wpa_group *group;

	u8 addr[ETH_ALEN];
	u8 p2p_dev_addr[ETH_ALEN];

	enum {
		WPA_PTK_INITIALIZE, WPA_PTK_DISCONNECT, WPA_PTK_DISCONNECTED,
		WPA_PTK_AUTHENTICATION, WPA_PTK_AUTHENTICATION2,
		WPA_PTK_INITPMK, WPA_PTK_INITPSK, WPA_PTK_PTKSTART,
		WPA_PTK_PTKCALCNEGOTIATING, WPA_PTK_PTKCALCNEGOTIATING2,
		WPA_PTK_PTKINITNEGOTIATING, WPA_PTK_PTKINITDONE
	} wpa_ptk_state;

	enum {
		WPA_PTK_GROUP_IDLE = 0,
		WPA_PTK_GROUP_REKEYNEGOTIATING,
		WPA_PTK_GROUP_REKEYESTABLISHED,
		WPA_PTK_GROUP_KEYERROR
	} wpa_ptk_group_state;

	Boolean Init;
	Boolean DeauthenticationRequest;
	Boolean AuthenticationRequest;
	Boolean ReAuthenticationRequest;
	Boolean Disconnect;
	int TimeoutCtr;
	int GTimeoutCtr;
	Boolean TimeoutEvt;
	Boolean EAPOLKeyReceived;
	Boolean EAPOLKeyPairwise;
	Boolean EAPOLKeyRequest;
	Boolean MICVerified;
	Boolean GUpdateStationKeys;
	u8 ANonce[WPA_NONCE_LEN];
	u8 SNonce[WPA_NONCE_LEN];
	u8 alt_SNonce[WPA_NONCE_LEN];
	u8 alt_replay_counter[WPA_REPLAY_COUNTER_LEN];
	u8 PMK[PMK_LEN];
	struct wpa_ptk PTK;
	Boolean PTK_valid;
	Boolean pairwise_set;
	int keycount;
	Boolean Pair;
	struct wpa_key_replay_counter {
		u8 counter[WPA_REPLAY_COUNTER_LEN];
		Boolean valid;
	} key_replay[RSNA_MAX_EAPOL_RETRIES],
		prev_key_replay[RSNA_MAX_EAPOL_RETRIES];
	Boolean PInitAKeys; /* WPA only, not in IEEE 802.11i */
	Boolean PTKRequest; /* not in IEEE 802.11i state machine */
	Boolean has_GTK;
	Boolean PtkGroupInit; /* init request for PTK Group state machine */

	u8 *last_rx_eapol_key; /* starting from IEEE 802.1X header */
	size_t last_rx_eapol_key_len;

	unsigned int changed:1;
	unsigned int in_step_loop:1;
	unsigned int pending_deinit:1;
	unsigned int started:1;
	unsigned int mgmt_frame_prot:1;
	unsigned int rx_eapol_key_secure:1;
	unsigned int update_snonce:1;
	unsigned int alt_snonce_valid:1;
#ifdef CONFIG_IEEE80211R
	unsigned int ft_completed:1;
	unsigned int pmk_r1_name_valid:1;
#endif /* CONFIG_IEEE80211R */
	unsigned int is_wnmsleep:1;

	u8 req_replay_counter[WPA_REPLAY_COUNTER_LEN];
	int req_replay_counter_used;

	u8 *wpa_ie;
	size_t wpa_ie_len;

	enum {
		WPA_VERSION_NO_WPA = 0 /* WPA not used */,
		WPA_VERSION_WPA = 1 /* WPA / IEEE 802.11i/D3.0 */,
		WPA_VERSION_WPA2 = 2 /* WPA2 / IEEE 802.11i */
	} wpa;
	int pairwise; /* Pairwise cipher suite, WPA_CIPHER_* */
	int wpa_key_mgmt; /* the selected WPA_KEY_MGMT_* */
	struct rsn_pmksa_cache_entry *pmksa;

	u32 dot11RSNAStatsTKIPLocalMICFailures;
	u32 dot11RSNAStatsTKIPRemoteMICFailures;

#ifdef CONFIG_IEEE80211R
	u8 xxkey[PMK_LEN]; /* PSK or the second 256 bits of MSK */
	size_t xxkey_len;
	u8 pmk_r1_name[WPA_PMK_NAME_LEN]; /* PMKR1Name derived from FT Auth
					   * Request */
	u8 r0kh_id[FT_R0KH_ID_MAX_LEN]; /* R0KH-ID from FT Auth Request */
	size_t r0kh_id_len;
	u8 sup_pmk_r1_name[WPA_PMK_NAME_LEN]; /* PMKR1Name from EAPOL-Key
					       * message 2/4 */
	u8 *assoc_resp_ftie;

	void (*ft_pending_cb)(void *ctx, const u8 *dst, const u8 *bssid,
			      u16 auth_transaction, u16 status,
			      const u8 *ies, size_t ies_len);
	void *ft_pending_cb_ctx;
	struct wpabuf *ft_pending_req_ies;
	u8 ft_pending_pull_nonce[FT_R0KH_R1KH_PULL_NONCE_LEN];
	u8 ft_pending_auth_transaction;
	u8 ft_pending_current_ap[ETH_ALEN];
#endif /* CONFIG_IEEE80211R */

	int pending_1_of_4_timeout;

#ifdef CONFIG_P2P
	u8 ip_addr[4];
#endif /* CONFIG_P2P */
	int identity_request_retry_interval;
};

struct rsn_preauth_interface {
	struct rsn_preauth_interface *next;
	struct hostapd_data *hapd;
	struct l2_packet_data *l2;
	char *ifname;
	int ifindex;
};

struct hostapd_sta_wpa_psk_short {
	struct hostapd_sta_wpa_psk_short *next;
	u8 psk[PMK_LEN];
};
/* HT Capabilities element */
struct ieee80211_ht_capabilities {
	le16 ht_capabilities_info;
	u8 a_mpdu_params; /* Maximum A-MPDU Length Exponent B0..B1
			   * Minimum MPDU Start Spacing B2..B4
			   * Reserved B5..B7 */
	u8 supported_mcs_set[16];
	le16 ht_extended_capabilities;
	le32 tx_bf_capability_info;
	u8 asel_capabilities;
} STRUCT_PACKED;

struct ieee80211_vht_capabilities {
	le32 vht_capabilities_info;
	struct {
		le16 rx_map;
		le16 rx_highest;
		le16 tx_map;
		le16 tx_highest;
	} vht_supported_mcs_set;
} STRUCT_PACKED;


struct gas_dialog_info {
	u8 valid;
	struct wpabuf *sd_resp; /* Fragmented response */
	u8 dialog_token;
	size_t sd_resp_pos; /* Offset in sd_resp */
	u8 sd_frag_id;
	int prot; /* whether Protected Dual of Public Action frame is used */
};
/*
 * Internal data structure for wpabuf. Please do not touch this directly from
 * elsewhere. This is only defined in header file to allow inline functions
 * from this file to access data.
 */
struct wpabuf {
	size_t size; /* total size of the allocated buffer */
	size_t used; /* length of data in the buffer */
	u8 *buf; /* pointer to the head of the buffer */
	unsigned int flags;
	/* optionally followed by the allocated buffer */
};

//struct crypto_bignum;
//struct sae_temporary_data;

struct sae_data {
	enum { SAE_NOTHING, SAE_COMMITTED, SAE_CONFIRMED, SAE_ACCEPTED } state;
	u16 send_confirm;
	u8 pmk[SAE_PMK_LEN];
	struct crypto_bignum *peer_commit_scalar;
	int group;
	int sync;
	struct sae_temporary_data *tmp;
};

/* IEEE Std 802.1X-2004, Ch. 8.2 */

typedef enum { ForceUnauthorized = 1, ForceAuthorized = 3, Auto = 2 }
	PortTypes;
typedef enum { Unauthorized = 2, Authorized = 1 } PortState;
typedef enum { Both = 0, In = 1 } ControlledDirection;
typedef unsigned int Counter;


struct eapol_auth_config {
	int eap_reauth_period;
	int wpa;
	int individual_wep_key_len;
	int eap_server;
	void *ssl_ctx;
	void *msg_ctx;
	void *eap_sim_db_priv;
	char *eap_req_id_text; /* a copy of this will be allocated */
	size_t eap_req_id_text_len;
	int erp_send_reauth_start;
	char *erp_domain; /* a copy of this will be allocated */
	int erp; /* Whether ERP is enabled on authentication server */
	unsigned int tls_session_lifetime;
	u8 *pac_opaque_encr_key;
	u8 *eap_fast_a_id;
	size_t eap_fast_a_id_len;
	char *eap_fast_a_id_info;
	int eap_fast_prov;
	int pac_key_lifetime;
	int pac_key_refresh_time;
	int eap_sim_aka_result_ind;
	int tnc;
	struct wps_context *wps;
	int fragment_size;
	u16 pwd_group;
	int pbc_in_m1;
	const u8 *server_id;
	size_t server_id_len;
        int identity_request_retry_interval;

	/* Opaque context pointer to owner data for callback functions */
	void *ctx;
};

#define ERP_MAX_KEY_LEN 64

struct eap_server_erp_key {
	struct dl_list list;
	size_t rRK_len;
	size_t rIK_len;
	u8 rRK[ERP_MAX_KEY_LEN];
	u8 rIK[ERP_MAX_KEY_LEN];
	u32 recv_seq;
	u8 cryptosuite;
	char keyname_nai[];
};

typedef enum {
	EAPOL_LOGGER_DEBUG, EAPOL_LOGGER_INFO, EAPOL_LOGGER_WARNING
} eapol_logger_level;

struct eapol_auth_cb {
	void (*eapol_send)(void *ctx, void *sta_ctx, u8 type, const u8 *data,
			   size_t datalen);
	void (*aaa_send)(void *ctx, void *sta_ctx, const u8 *data,
			 size_t datalen);
	void (*finished)(void *ctx, void *sta_ctx, int success, int preauth,
			 int remediation);
	int (*get_eap_user)(void *ctx, const u8 *identity, size_t identity_len,
			    int phase2, struct eap_user *user);
	int (*sta_entry_alive)(void *ctx, const u8 *addr);
	void (*logger)(void *ctx, const u8 *addr, eapol_logger_level level,
		       const char *txt);
	void (*set_port_authorized)(void *ctx, void *sta_ctx, int authorized);
	void (*abort_auth)(void *ctx, void *sta_ctx);
	void (*tx_key)(void *ctx, void *sta_ctx);
	void (*eapol_event)(void *ctx, void *sta_ctx, enum eapol_event type);
	struct eap_server_erp_key * (*erp_get_key)(void *ctx,
						   const char *keyname);
	int (*erp_add_key)(void *ctx, struct eap_server_erp_key *erp);
};

/**
 * struct eapol_authenticator - Global EAPOL authenticator data
 */
struct eapol_authenticator {
	struct eapol_auth_config conf;
	struct eapol_auth_cb cb;

	u8 *default_wep_key;
	u8 default_wep_key_idx;

	u32 acct_multi_session_id_hi;
	u32 acct_multi_session_id_lo;
};




/**
 * struct eapol_state_machine - Per-Supplicant Authenticator state machines
 */
struct eapol_state_machine {
	/* timers */
	int aWhile;
	int quietWhile;
	int reAuthWhen;

	/* global variables */
	Boolean authAbort;
	Boolean authFail;
	PortState authPortStatus;
	Boolean authStart;
	Boolean authTimeout;
	Boolean authSuccess;
	Boolean eapolEap;
	Boolean initialize;
	Boolean keyDone;
	Boolean keyRun;
	Boolean keyTxEnabled;
	PortTypes portControl;
	Boolean portValid;
	Boolean reAuthenticate;

	/* Port Timers state machine */
	/* 'Boolean tick' implicitly handled as registered timeout */

	/* Authenticator PAE state machine */
	enum { AUTH_PAE_INITIALIZE, AUTH_PAE_DISCONNECTED, AUTH_PAE_CONNECTING,
	       AUTH_PAE_AUTHENTICATING, AUTH_PAE_AUTHENTICATED,
	       AUTH_PAE_ABORTING, AUTH_PAE_HELD, AUTH_PAE_FORCE_AUTH,
	       AUTH_PAE_FORCE_UNAUTH, AUTH_PAE_RESTART } auth_pae_state;
	/* variables */
	Boolean eapolLogoff;
	Boolean eapolStart;
	PortTypes portMode;
	unsigned int reAuthCount;
	/* constants */
	unsigned int quietPeriod; /* default 60; 0..65535 */
#define AUTH_PAE_DEFAULT_quietPeriod 60
	unsigned int reAuthMax; /* default 2 */
#define AUTH_PAE_DEFAULT_reAuthMax 2
	/* counters */
	Counter authEntersConnecting;
	Counter authEapLogoffsWhileConnecting;
	Counter authEntersAuthenticating;
	Counter authAuthSuccessesWhileAuthenticating;
	Counter authAuthTimeoutsWhileAuthenticating;
	Counter authAuthFailWhileAuthenticating;
	Counter authAuthEapStartsWhileAuthenticating;
	Counter authAuthEapLogoffWhileAuthenticating;
	Counter authAuthReauthsWhileAuthenticated;
	Counter authAuthEapStartsWhileAuthenticated;
	Counter authAuthEapLogoffWhileAuthenticated;

	/* Backend Authentication state machine */
	enum { BE_AUTH_REQUEST, BE_AUTH_RESPONSE, BE_AUTH_SUCCESS,
	       BE_AUTH_FAIL, BE_AUTH_TIMEOUT, BE_AUTH_IDLE, BE_AUTH_INITIALIZE,
	       BE_AUTH_IGNORE
	} be_auth_state;
	/* constants */
	unsigned int serverTimeout; /* default 30; 1..X */
#define BE_AUTH_DEFAULT_serverTimeout 30
	/* counters */
	Counter backendResponses;
	Counter backendAccessChallenges;
	Counter backendOtherRequestsToSupplicant;
	Counter backendAuthSuccesses;
	Counter backendAuthFails;

	/* Reauthentication Timer state machine */
	enum { REAUTH_TIMER_INITIALIZE, REAUTH_TIMER_REAUTHENTICATE
	} reauth_timer_state;
	/* constants */
	unsigned int reAuthPeriod; /* default 3600 s */
	Boolean reAuthEnabled;

	/* Authenticator Key Transmit state machine */
	enum { AUTH_KEY_TX_NO_KEY_TRANSMIT, AUTH_KEY_TX_KEY_TRANSMIT
	} auth_key_tx_state;

	/* Key Receive state machine */
	enum { KEY_RX_NO_KEY_RECEIVE, KEY_RX_KEY_RECEIVE } key_rx_state;
	/* variables */
	Boolean rxKey;

	/* Controlled Directions state machine */
	enum { CTRL_DIR_FORCE_BOTH, CTRL_DIR_IN_OR_BOTH } ctrl_dir_state;
	/* variables */
	ControlledDirection adminControlledDirections;
	ControlledDirection operControlledDirections;
	Boolean operEdge;

	/* Authenticator Statistics Table */
	Counter dot1xAuthEapolFramesRx;
	Counter dot1xAuthEapolFramesTx;
	Counter dot1xAuthEapolStartFramesRx;
	Counter dot1xAuthEapolLogoffFramesRx;
	Counter dot1xAuthEapolRespIdFramesRx;
	Counter dot1xAuthEapolRespFramesRx;
	Counter dot1xAuthEapolReqIdFramesTx;
	Counter dot1xAuthEapolReqFramesTx;
	Counter dot1xAuthInvalidEapolFramesRx;
	Counter dot1xAuthEapLengthErrorFramesRx;
	Counter dot1xAuthLastEapolFrameVersion;

	/* Other variables - not defined in IEEE 802.1X */
	u8 addr[ETH_ALEN]; /* Supplicant address */
	int flags; /* EAPOL_SM_* */

	/* EAPOL/AAA <-> EAP full authenticator interface */
	struct eap_eapol_interface *eap_if;

	int radius_identifier;
	/* TODO: check when the last messages can be released */
	struct radius_msg *last_recv_radius;
	u8 last_eap_id; /* last used EAP Identifier */
	u8 *identity;
	size_t identity_len;
	u8 eap_type_authsrv; /* EAP type of the last EAP packet from
			      * Authentication server */
	u8 eap_type_supp; /* EAP type of the last EAP packet from Supplicant */
	struct radius_class_data radius_class;
	struct wpabuf *radius_cui; /* Chargeable-User-Identity */

	/* Keys for encrypting and signing EAPOL-Key frames */
	u8 *eapol_key_sign;
	size_t eapol_key_sign_len;
	u8 *eapol_key_crypt;
	size_t eapol_key_crypt_len;

	struct eap_sm *eap;

	Boolean initializing; /* in process of initializing state machines */
	Boolean changed;

	struct eapol_authenticator *eapol;

	void *sta; /* station context pointer to use in callbacks */

	int remediation;

	u32 acct_multi_session_id_hi;
	u32 acct_multi_session_id_lo;
};


struct sta_info {
	struct sta_info *next; /* next entry in sta list */
	struct sta_info *hnext; /* next entry in hash table list */
	u8 addr[6];
	be32 ipaddr;
	struct dl_list ip6addr; /* list head for struct ip6addr */
	u16 aid; /* STA's unique AID (1 .. 2007) or 0 if not yet assigned */
	u32 flags; /* Bitfield of WLAN_STA_* */
	u16 capability;
	u16 listen_interval; /* or beacon_int for APs */
	u8 supported_rates[WLAN_SUPP_RATES_MAX];
	int supported_rates_len;
	u8 qosinfo; /* Valid when WLAN_STA_WMM is set */

#ifdef CONFIG_MESH
	enum mesh_plink_state plink_state;
	u16 peer_lid;
	u16 my_lid;
	u16 mpm_close_reason;
	int mpm_retries;
	u8 my_nonce[32];
	u8 peer_nonce[32];
	u8 aek[32];	/* SHA256 digest length */
	u8 mtk[16];
	u8 mgtk[16];
	u8 sae_auth_retry;
#endif /* CONFIG_MESH */

	unsigned int nonerp_set:1;
	unsigned int no_short_slot_time_set:1;
	unsigned int no_short_preamble_set:1;
	unsigned int no_ht_gf_set:1;
	unsigned int no_ht_set:1;
	unsigned int ht40_intolerant_set:1;
	unsigned int ht_20mhz_set:1;
	unsigned int no_p2p_set:1;
	unsigned int qos_map_enabled:1;
	unsigned int remediation:1;
	unsigned int hs20_deauth_requested:1;
	unsigned int session_timeout_set:1;
	unsigned int radius_das_match:1;

	u16 auth_alg;

	enum {
		STA_NULLFUNC = 0, STA_DISASSOC, STA_DEAUTH, STA_REMOVE,
		STA_DISASSOC_FROM_CLI
	} timeout_next;

	u16 deauth_reason;
	u16 disassoc_reason;

	/* IEEE 802.1X related data */
	struct eapol_state_machine *eapol_sm;

	u32 acct_session_id_hi;
	u32 acct_session_id_lo;
	struct os_reltime acct_session_start;
	int acct_session_started;
	int acct_terminate_cause; /* Acct-Terminate-Cause */
	int acct_interim_interval; /* Acct-Interim-Interval */

	unsigned long last_rx_bytes;
	unsigned long last_tx_bytes;
	u32 acct_input_gigawords; /* Acct-Input-Gigawords */
	u32 acct_output_gigawords; /* Acct-Output-Gigawords */

	u8 *challenge; /* IEEE 802.11 Shared Key Authentication Challenge */

	struct wpa_state_machine *wpa_sm;
	struct rsn_preauth_interface *preauth_iface;

	int vlan_id; /* 0: none, >0: VID */
	int vlan_id_bound; /* updated by ap_sta_bind_vlan() */
	 /* PSKs from RADIUS authentication server */
	struct hostapd_sta_wpa_psk_short *psk;

	char *identity; /* User-Name from RADIUS */
	char *radius_cui; /* Chargeable-User-Identity from RADIUS */

	struct ieee80211_ht_capabilities *ht_capabilities;
	struct ieee80211_vht_capabilities *vht_capabilities;
	u8 vht_opmode;

#ifdef CONFIG_IEEE80211W
	int sa_query_count; /* number of pending SA Query requests;
			     * 0 = no SA Query in progress */
	int sa_query_timed_out;
	u8 *sa_query_trans_id; /* buffer of WLAN_SA_QUERY_TR_ID_LEN *
				* sa_query_count octets of pending SA Query
				* transaction identifiers */
	struct os_reltime sa_query_start;
#endif /* CONFIG_IEEE80211W */

#ifdef CONFIG_INTERWORKING
#define GAS_DIALOG_MAX 8 /* Max concurrent dialog number */
	struct gas_dialog_info *gas_dialog;
	u8 gas_dialog_next;
#endif /* CONFIG_INTERWORKING */

	struct wpabuf *wps_ie; /* WPS IE from (Re)Association Request */
	struct wpabuf *p2p_ie; /* P2P IE from (Re)Association Request */
	struct wpabuf *hs20_ie; /* HS 2.0 IE from (Re)Association Request */
	u8 remediation_method;
	char *remediation_url; /* HS 2.0 Subscription Remediation Server URL */
	struct wpabuf *hs20_deauth_req;
	char *hs20_session_info_url;
	int hs20_disassoc_timer;
#ifdef CONFIG_FST
	struct wpabuf *mb_ies; /* MB IEs from (Re)Association Request */
#endif /* CONFIG_FST */

	struct os_reltime connected_time;

#ifdef CONFIG_SAE
	struct sae_data *sae;
#endif /* CONFIG_SAE */

	u32 session_timeout; /* valid only if session_timeout_set == 1 */

	/* Last Authentication/(Re)Association Request/Action frame sequence
	 * control */
	u16 last_seq_ctrl;
	/* Last Authentication/(Re)Association Request/Action frame subtype */
	u8 last_subtype;
};

#endif /* 0*/

#endif  /*__IWEVENT__H__*/




