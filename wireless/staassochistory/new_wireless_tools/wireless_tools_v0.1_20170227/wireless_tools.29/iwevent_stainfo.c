
#include "iwlib.h"		/* Header */
#include "iwevent.h"
#include "logopt.h"


#define	IEEE80211_IOCTL_STA_INFO	(SIOCDEVPRIVATE+6)
#define	IEEE80211_IOCTL_SCAN_RESULTS	(SIOCDEVPRIVATE+9)

#define err(_s, args...) do { \
    fprintf(stderr, "%s: line %d ", __FILE__, __LINE__); \
    fprintf(stderr, args); fprintf(stderr, ": %d\n", errno); \
    exit(_s); } while (0)
    

int	verbose = 0;


static int getsocket(void)
{
	static int s = -1;

	if (s < 0) {
		s = socket(AF_INET, SOCK_DGRAM, 0);
		if (s < 0)
			err(1, "socket(SOCK_DRAGM)");
	}
	return s;
}


static int do80211priv(struct iwreq *iwr, const char *ifname, int op, void *data, size_t len)
{
#define	N(a)	(sizeof(a)/sizeof(a[0]))

	memset(iwr, 0, sizeof(iwr));
	strncpy(iwr->ifr_name, ifname, IFNAMSIZ);
	if (len < IFNAMSIZ) {
		/*
		 * Argument data fits inline; put it there.
		 */
		memcpy(iwr->u.name, data, len);
	} else {
		/*
		 * Argument data too big for inline transfer; setup a
		 * parameter block instead; the kernel will transfer
		 * the data for the driver.
		 */
		iwr->u.data.pointer = data;
		iwr->u.data.length = len;
	}

	if (ioctl(getsocket(), op, iwr) < 0) {
		static const char *opnames[] = {
			"ioctl[IEEE80211_IOCTL_SETPARAM]",
			"ioctl[IEEE80211_IOCTL_GETPARAM]",
			"ioctl[IEEE80211_IOCTL_SETKEY]",
			"ioctl[SIOCIWFIRSTPRIV+3]",
			"ioctl[IEEE80211_IOCTL_DELKEY]",
			"ioctl[SIOCIWFIRSTPRIV+5]",
			"ioctl[IEEE80211_IOCTL_SETMLME]",
			"ioctl[SIOCIWFIRSTPRIV+7]",
			"ioctl[IEEE80211_IOCTL_SETOPTIE]",
			"ioctl[IEEE80211_IOCTL_GETOPTIE]",
			"ioctl[IEEE80211_IOCTL_ADDMAC]",
			"ioctl[SIOCIWFIRSTPRIV+11]",
			"ioctl[IEEE80211_IOCTL_DELMAC]",
			"ioctl[SIOCIWFIRSTPRIV+13]",
			"ioctl[IEEE80211_IOCTL_CHANLIST]",
			"ioctl[SIOCIWFIRSTPRIV+15]",
			"ioctl[IEEE80211_IOCTL_GETRSN]",
			"ioctl[SIOCIWFIRSTPRIV+17]",
			"ioctl[IEEE80211_IOCTL_GETKEY]",
		};
		op -= SIOCIWFIRSTPRIV;
		if (0 <= op && op < N(opnames))
			perror(opnames[op]);
		else
			perror("ioctl[unknown???]");
		return -1;
	}
	return 0;
#undef N
}


static int get80211priv(const char *ifname, int op, void *data, size_t len)
{
	struct iwreq iwr;

	if (do80211priv(&iwr, ifname, op, data, len) < 0)
		return -1;
	if (len < IFNAMSIZ)
		memcpy(data, iwr.u.name, len);
	return iwr.u.data.length;
}

static const char *
ieee80211_ntoa(const uint8_t mac[IEEE80211_ADDR_LEN])
{
	static char a[18];
	int i;

	i = snprintf(a, sizeof(a), "%02x:%02x:%02x:%02x:%02x:%02x",
		mac[0], mac[1], mac[2], mac[3], mac[4], mac[5]);
	return (i < 17 ? NULL : a);
}


/*
 * Copy the ssid string contents into buf, truncating to fit.  If the
 * ssid is entirely printable then just copy intact.  Otherwise convert
 * to hexadecimal.  If the result is truncated then replace the last
 * three characters with "...".
 */
static size_t
copy_essid(char buf[], size_t bufsize, const u_int8_t *essid, size_t essid_len)
{
	const u_int8_t *p;
	size_t maxlen;
	int i;
	size_t orig_bufsize =  bufsize;

	if (essid_len > bufsize)
		maxlen = bufsize;
	else
		maxlen = essid_len;
	/* determine printable or not */
	for (i = 0, p = essid; i < maxlen; i++, p++) {
		if (*p < ' ' || *p > 0x7e)
			break;
	}
	if (i != maxlen) {		/* not printable, print as hex */
		if (bufsize < 3)
			return 0;
#if 0
		strlcpy(buf, "0x", bufsize);
#else
		strncpy(buf, "0x", bufsize);
#endif
		bufsize -= 2;
		p = essid;
		for (i = 0; i < maxlen && bufsize >= 2; i++) {
			sprintf(&buf[2+2*i], "%02x", *p++);
			bufsize -= 2;
		}
		maxlen = 2+2*i;
	} else {			/* printable, truncate as needed */
		memcpy(buf, essid, maxlen);
	}
	if (maxlen != essid_len)
		memcpy(buf+maxlen-3, "...", 3);

	/* Modify for static analysis, protect for buffer overflow */
	buf[orig_bufsize-1] = '\0';

	return maxlen;
}

/*
 * Convert MHz frequency to IEEE channel number.
 */
static u_int
ieee80211_mhz2ieee(u_int freq)
{
#define IS_CHAN_IN_PUBLIC_SAFETY_BAND(_c) ((_c) > 4940 && (_c) < 4990)

	if (freq == 2484)
        return 14;
    if (freq < 2484)
        return (freq - 2407) / 5;
    if (freq < 5000) {
        if (IS_CHAN_IN_PUBLIC_SAFETY_BAND(freq)) {
            return ((freq * 10) +
                (((freq % 5) == 2) ? 5 : 0) - 49400)/5;
        } else if (freq > 4900) {
            return (freq - 4000) / 5;
        } else {
            return 15 + ((freq - 2512) / 20);
        }
    }
    return (freq - 5000) / 5;
}


//typedef u_int8_t uint8_t;

static int
getmaxrate(uint8_t rates[15], uint8_t nrates)
{
	int i, maxrate = -1;

	for (i = 0; i < nrates; i++) {
		int rate = rates[i] & IEEE80211_RATE_VAL;
		if (rate > maxrate)
			maxrate = rate;
	}
	return maxrate / 2;
}

static const char *
getcaps(int capinfo)
{
	static char capstring[32];
	char *cp = capstring;

	if (capinfo & IEEE80211_CAPINFO_ESS)
		*cp++ = 'E';
	if (capinfo & IEEE80211_CAPINFO_IBSS)
		*cp++ = 'I';
	if (capinfo & IEEE80211_CAPINFO_CF_POLLABLE)
		*cp++ = 'c';
	if (capinfo & IEEE80211_CAPINFO_CF_POLLREQ)
		*cp++ = 'C';
	if (capinfo & IEEE80211_CAPINFO_PRIVACY)
		*cp++ = 'P';
	if (capinfo & IEEE80211_CAPINFO_SHORT_PREAMBLE)
		*cp++ = 'S';
	if (capinfo & IEEE80211_CAPINFO_PBCC)
		*cp++ = 'B';
	if (capinfo & IEEE80211_CAPINFO_CHNL_AGILITY)
		*cp++ = 'A';
	if (capinfo & IEEE80211_CAPINFO_SHORT_SLOTTIME)
		*cp++ = 's';
	if (capinfo & IEEE80211_CAPINFO_DSSSOFDM)
		*cp++ = 'D';
	*cp = '\0';
	return capstring;
}

static void printie(const char* tag, const uint8_t *ie, size_t ielen, int maxlen)
{
	printf("%s", tag);
	if (verbose) {
		maxlen -= strlen(tag)+2;
		if (2*ielen > maxlen)
			maxlen--;
		printf("<");
		for (; ielen > 0; ie++, ielen--) {
			if (maxlen-- <= 0)
				break;
			printf("%02x", *ie);
		}
		if (ielen != 0)
			printf("-");
		printf(">");
	}
}
//typedef char               A_INT8,  int8_t, A_CHAR;
//typedef __a_int8_t      a_int8_t; /**< 1 Byte */

#define a_int32_t   signed int 
#define a_uint8_t   unsigned char     
#define a_uint16_t  unsigned short int
#define a_uint64_t  unsigned long long
#define a_uint32_t  unsigned int
#define a_int8_t    signed char
#define a_int16_t   signed short int   

#ifndef LE_READ_4
#define LE_READ_4(p)                            \
    ((u_int32_t)                                \
    ((((const u_int8_t *)(p))[0]      ) |       \
    (((const u_int8_t *)(p))[1] <<  8) |        \
    (((const u_int8_t *)(p))[2] << 16) |        \
    (((const u_int8_t *)(p))[3] << 24)))
#endif

#define ATH_OUI_TYPE                    0x01
#define ATH_OUI_SUBTYPE                 0x01
#define WPA_OUI                     0xf25000
#define WPA_OUI_TYPE                    0x01
#define WPA_VERSION                        1    /* current supported version */
#define WME_OUI                     0xf25000
#define WME_OUI_TYPE                    0x02
#define WME_INFO_OUI_SUBTYPE            0x00
#define WME_PARAM_OUI_SUBTYPE           0x01
#define WME_TSPEC_OUI_SUBTYPE           0x02
#define	ATH_OUI			0x7f0300		/* Atheros OUI */
#define	ATH_OUI_TYPE		0x01

static inline a_int8_t
iswpaoui(const a_uint8_t *frm)
{
    return frm[1] > 3 && LE_READ_4(frm+2) == ((WPA_OUI_TYPE<<24)|WPA_OUI);
}

static inline a_int8_t
iswmeoui(const uint8_t *frm)
{
    return frm[1] > 3 && LE_READ_4(frm+2) == ((WME_OUI_TYPE<<24)|WME_OUI);
}

static inline a_int8_t
iswmeparam(const u_int8_t *frm)
{
    return ((frm[1] > 5) && (LE_READ_4(frm+2) == 
                ((WME_OUI_TYPE<<24)|WME_OUI)) && 
            (frm[6] == WME_PARAM_OUI_SUBTYPE));
}

static inline a_int8_t
isatherosoui(const a_uint8_t *frm)
{
    return frm[1] > 3 && LE_READ_4(frm+2) == ((ATH_OUI_TYPE<<24)|ATH_OUI);
}

static void
printies(const u_int8_t *vp, int ielen, int maxcols)
{
	while (ielen > 0) {
		switch (vp[0]) {
		case IEEE80211_ELEMID_VENDOR:
			if (iswpaoui(vp))
				printie(" WPA", vp, 2+vp[1], maxcols);
			else if (iswmeoui(vp))
				printie(" WME", vp, 2+vp[1], maxcols);
			else if (isatherosoui(vp))
				printie(" ATH", vp, 2+vp[1], maxcols);
			else
				printie(" VEN", vp, 2+vp[1], maxcols);
			break;
        case IEEE80211_ELEMID_RSN:
            printie(" RSN", vp, 2+vp[1], maxcols);
            break;
		default:
			printie(" ???", vp, 2+vp[1], maxcols);
			break;
		}
		ielen -= 2+vp[1];
		vp += 2+vp[1];
	}
}


void list_scan(const char *ifname)
{
	uint8_t buf[24*1024];
	struct iwreq iwr;
	char ssid[14];
	uint8_t *cp;
	int len;

	log_dbg("\033[31mTHE he interface is [%s]\033[0m\n",ifname);

	len = get80211priv(ifname, IEEE80211_IOCTL_SCAN_RESULTS,
			    buf, sizeof(buf));
	if (len == -1)
		errx(1, "unable to get scan results");
	if (len < sizeof(struct ieee80211req_scan_result))
		return;

	printf("%-14.14s  %-17.17s  %4s %4s  %-5s %3s %4s\n"
		, "SSID"
		, "BSSID"
		, "CHAN"
		, "RATE"
		, "S:N"
		, "INT"
		, "CAPS"
	);
	cp = buf;
	do {
		struct ieee80211req_scan_result *sr;
		uint8_t *vp;
        const char *ntoa;

		sr = (struct ieee80211req_scan_result *) cp;
		vp = (u_int8_t *)(sr+1);
                ntoa = ieee80211_ntoa(sr->isr_bssid);
		printf("%-14.*s  %s  %3d  %3dM %2d:%-2d  %3d %-4.4s"
			, copy_essid(ssid, sizeof(ssid), vp, sr->isr_ssid_len)
				, ssid
			, (ntoa != NULL) ? ntoa:"WRONG MAC"
			, ieee80211_mhz2ieee(sr->isr_freq)
			, getmaxrate(sr->isr_rates, sr->isr_nrates)
			, (int8_t) sr->isr_rssi, sr->isr_noise
			, sr->isr_intval
			, getcaps(sr->isr_capinfo)
		);
		printies(vp + sr->isr_ssid_len, sr->isr_ie_len, 24);;
		printf("\n");
		cp += sr->isr_len, len -= sr->isr_len;
	} while (len >= sizeof(struct ieee80211req_scan_result));
}


/*for stations info*/
/*
 * These are taken from ieee80211_node.h
 */

#define IEEE80211_NODE_TURBOP	0x0001		/* Turbo prime enable */
#define IEEE80211_NODE_AR	0x0010		/* AR capable */
#define IEEE80211_NODE_BOOST	0x0080
#define MACSTR_LEN 18

static const char *
getathcaps(int capinfo)
{
	static char capstring[32];
	char *cp = capstring;

	if (capinfo & IEEE80211_NODE_TURBOP)
		*cp++ = 'D';
	if (capinfo & IEEE80211_NODE_AR)
		*cp++ = 'A';
	if (capinfo & IEEE80211_NODE_BOOST)
		*cp++ = 'T';
	*cp = '\0';
	return capstring;
}

static const char *
gethtcaps(int capinfo)
{
	static char capstring[32];
	char *cp = capstring;

	if (capinfo & IEEE80211_HTCAP_C_ADVCODING)
		*cp++ = 'A';
	if (capinfo & IEEE80211_HTCAP_C_CHWIDTH40)
		*cp++ = 'W';
	if ((capinfo & IEEE80211_HTCAP_C_SM_MASK) ==
             IEEE80211_HTCAP_C_SMPOWERSAVE_DISABLED)
		*cp++ = 'P';
	if ((capinfo & IEEE80211_HTCAP_C_SM_MASK) ==
             IEEE80211_HTCAP_C_SMPOWERSAVE_STATIC)
		*cp++ = 'Q';
	if ((capinfo & IEEE80211_HTCAP_C_SM_MASK) ==
             IEEE80211_HTCAP_C_SMPOWERSAVE_DYNAMIC)
		*cp++ = 'R';
	if (capinfo & IEEE80211_HTCAP_C_GREENFIELD)
		*cp++ = 'G';
	if (capinfo & IEEE80211_HTCAP_C_SHORTGI40)
		*cp++ = 'S';
	if (capinfo & IEEE80211_HTCAP_C_DELAYEDBLKACK)
		*cp++ = 'D';
	if (capinfo & IEEE80211_HTCAP_C_MAXAMSDUSIZE)
		*cp++ = 'M';
	*cp = '\0';
	return capstring;
}

#define LIST_STATION_ALLOC_SIZE 24*1024
#define IEEE80211_AID(b)    ((b) &~ 0xc000)

void list_stations(const char *ifname)
{
    char *ieee80211_phymode_str[23] =  {
        "IEEE80211_MODE_AUTO",
        "IEEE80211_MODE_11A",
        "IEEE80211_MODE_11B",
        "IEEE80211_MODE_11G",
        "IEEE80211_MODE_FH",
        "IEEE80211_MODE_TURBO_A",
        "IEEE80211_MODE_TURBO_G",
        "IEEE80211_MODE_11NA_HT20",
        "IEEE80211_MODE_11NG_HT20",
        "IEEE80211_MODE_11NA_HT40PLUS",
        "IEEE80211_MODE_11NA_HT40MINUS",
        "IEEE80211_MODE_11NG_HT40PLUS",
        "IEEE80211_MODE_11NG_HT40MINUS",
        "IEEE80211_MODE_11NG_HT40",
        "IEEE80211_MODE_11NA_HT40",
        "IEEE80211_MODE_11AC_VHT20",
        "IEEE80211_MODE_11AC_VHT40PLUS",
        "IEEE80211_MODE_11AC_VHT40MINUS",
        "IEEE80211_MODE_11AC_VHT40",
        "IEEE80211_MODE_11AC_VHT80",
        "IEEE80211_MODE_11AC_VHT160",
        "IEEE80211_MODE_11AC_VHT80_80",
        (char *)NULL,
    };

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
	  return;
	}

	s = socket(AF_INET, SOCK_DGRAM, 0);
	if (s < 0){
		free(buf);
		err(1, "socket(SOCK_DRAGM)");
	}

	if (!strncmp(ifname, "wifi", 4)) {
		free(buf);
		err(1, "Not a valid interface");
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
		errx(1, "unable to get station information");
    }
    else if(req_space > 0) {
        free(buf);
        buf = malloc(req_space);
        if(!buf) {
            fprintf (stderr, "Unable to allocate memory for station list\n");
            return;
        }
        iwr.u.data.pointer = (void *) buf;
        iwr.u.data.length = req_space;
        if(iwr.u.data.length < req_space)
            iwr.u.data.flags = 1;
        if (ioctl(s, IEEE80211_IOCTL_STA_INFO, &iwr) < 0 ){
            free(buf);
            errx(1, "unable to get station information");
        }
        len = req_space;

    }
    else {
        len = iwr.u.data.length;
    }

    if (len < sizeof(struct ieee80211req_sta_info)){
        free(buf);
        return;
    }
	cp = buf;
	printf("%-17.17s %4s %4s %4s %4s %4s %7s %7s %4s %6s %6s %5s %12s %7s %8s %14s %6s %9s %6s %6s %6s\n"
		, "ADDR"
		, "AID"
		, "CHAN"
		, "TXRATE"
		, "RXRATE"
		, "RSSI"
        , "MINRSSI"
        , "MAXRSSI"
		, "IDLE"
		, "TXSEQ"
		, "RXSEQ"
		, "CAPS"
	    , "ACAPS"
		, "ERP"
		, "STATE"
        , "MAXRATE(DOT11)"
	    , "HTCAPS"
		, "ASSOCTIME"
		, "IEs"
	    , "MODE"
		, "PSMODE"
	);
	cp = buf;
	do {
		struct ieee80211req_sta_info *si;
		uint8_t *vp;

		si = (struct ieee80211req_sta_info *) cp;
		time_val = si->isi_tr069_assoc_time.tv_sec;
	 	hour_val = time_val / 3600;
 	 	time_val = time_val % 3600;
 	 	min_val = time_val / 60;
 	 	sec_val = time_val % 60;
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
		printf("%s %4u %4d %3dM %6dM %4d %7d %7d %4d %6d %7d %5.4s %-5.5s %3x %10x %14d %14.6s %02u:%02u:%02u"
			, (ntoa != NULL) ? ntoa:"WRONG MAC"
			, IEEE80211_AID(si->isi_associd)
			, ieee80211_mhz2ieee(si->isi_freq)
			, txrate
			, rxrate
			, si->isi_rssi
            , si->isi_min_rssi
            , si->isi_max_rssi
			, si->isi_inact
			, si->isi_txseqs[0]
			, si->isi_rxseqs[0]
		    , getcaps(si->isi_capinfo)
		    , getathcaps(si->isi_athflags)
			, si->isi_erp
			, si->isi_state
            , maxrate
		    , gethtcaps(si->isi_htcap)
			, hour_val
			, min_val
			, sec_val
		);
		printies(vp, si->isi_ie_len, 24);
		printf (" %s ",(si->isi_stamode < 22)?ieee80211_phymode_str[si->isi_stamode]:"IEEE80211_MODE_11B");
		printf(" %d \r\n",si->isi_ps);
		cp += si->isi_len, len -= si->isi_len;
	} while (len >= sizeof(struct ieee80211req_sta_info));

	free(buf);
}



int finde_dest_stations(const char *ifname, const char *statocheck)
{
	log_trace_enter();
	trace_line();
	char *ieee80211_phymode_str[23] =  {
		"IEEE80211_MODE_AUTO",
		"IEEE80211_MODE_11A",
		"IEEE80211_MODE_11B",
		"IEEE80211_MODE_11G",
		"IEEE80211_MODE_FH",
		"IEEE80211_MODE_TURBO_A",
		"IEEE80211_MODE_TURBO_G",
		"IEEE80211_MODE_11NA_HT20",
		"IEEE80211_MODE_11NG_HT20",
		"IEEE80211_MODE_11NA_HT40PLUS",
		"IEEE80211_MODE_11NA_HT40MINUS",
		"IEEE80211_MODE_11NG_HT40PLUS",
		"IEEE80211_MODE_11NG_HT40MINUS",
		"IEEE80211_MODE_11NG_HT40",
		"IEEE80211_MODE_11NA_HT40",
		"IEEE80211_MODE_11AC_VHT20",
		"IEEE80211_MODE_11AC_VHT40PLUS",
		"IEEE80211_MODE_11AC_VHT40MINUS",
		"IEEE80211_MODE_11AC_VHT40",
		"IEEE80211_MODE_11AC_VHT80",
		"IEEE80211_MODE_11AC_VHT160",
		"IEEE80211_MODE_11AC_VHT80_80",
		(char *)NULL,
	};

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
		log_trace_line();
	} while (len >= sizeof(struct ieee80211req_sta_info));

	free(buf);
	log_trace_exit();
	trace_exit();
	return 0;

	
}
