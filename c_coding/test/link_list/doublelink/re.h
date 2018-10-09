#ifndef __RE_H_
#define __RE_H_

typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;

typedef enum
{
   CMSRET_SUCCESS              = 0,     /**<Success. */
   CMSRET_MALLOC_FAILED        = 7000,  /** malloc memory failed */
   CMSRET_RE_NOT_EXISTED       = 7001,  /** don't find RE */
   CMSRET_INVALID_RE_MAC       = 7002,  /** invalid re mac */

   
   CMSRET_INVALID_PARAMETER    = 9060, 
}CmsRet;


typedef enum {
    BH_ETH_TYPE = 0,
    BH_24G_TYPE = 1,
    BH_5G_TYPE = 2
}BH_TYPE;

typedef enum {
    STA_NORMAL = 0,
    STA_RE = 1
}STA_TYPE;

typedef enum {
    STA_CONN_ETH = 0,
    STA_CONN_24G = 1,
    STA_CONN_5G = 2
}STA_CONN_TYPE;

typedef struct re_node {
    char re_mac[20];
    char re_ip[16];
    u8 bh_type;
    char sw_version[32];
    char hostname[32];
}RE_NODE;

#ifndef RE_NODE_SIZE
#define RE_NODE_SIZE sizeof(RE_NODE)
#endif

typedef struct sta_node {
    DlistNode stalist;
    char mac[20];
    char ip[20];
    char hostname[64];
    u8 conntype;
    u8 re_flag;
    u32 signal;
    DlistNode nextre;
}STA_NODE;

#ifndef STA_NODE_SIZE
#define STA_NODE_SIZE  sizeof(STA_NODE)
#endif

#define cprintf(fmt, args...) do { \
	FILE *fp = fopen("/dev/console", "w"); \
	if (fp) { \
		fprintf(fp, fmt, ## args); \
		fclose(fp); \
	} \
} while (0)


#endif
