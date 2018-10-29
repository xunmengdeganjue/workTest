#ifndef __RE_H_
#define __RE_H_

#include "dlist.h"
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
    STA_NORMAL = 0,
    STA_RE = 1
}STA_TYPE;

typedef enum HostConnectType_e {
  HOST_CONN_ETH_WAN = 0,
  HOST_CONN_ETH_LAN = 1,
  HOST_CONN_WIFI_24G = 2,
  HOST_CONN_WIFI_5G = 3
}HostConnectType;
  

#ifndef RE_NODE_SIZE
#define RE_NODE_SIZE sizeof(RE_NODE)
#endif

typedef struct sta_node {
	DlistNode stalist;
    char stamac[20];
	char remac[20];
	u8 con_type;
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

CmsRet sta_node_add(DlistNode* staHeader, const STA_NODE *newsta);
STA_NODE *lookup_sta_node(DlistNode *staHeader, char *stamac);


#endif
