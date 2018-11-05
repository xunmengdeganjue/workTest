#ifndef __STA_TABLE_OPT_H__
#define __STA_TABLE_OPT_H__

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
    u8 stamac[6];
	u8 remac[6];
	u8 con_type;
	/*DlistNode nextre; //make it more efficacious*/
}STA_NODE;

#ifndef STA_NODE_SIZE
#define STA_NODE_SIZE  sizeof(STA_NODE)
#endif
#define MACSIZE 6

/*
STA_NODE *sta_node_alloc(void);
void sta_node_free(STA_NODE *sta);
CmsRet _sta_node_add(DlistNode* staHeader, STA_NODE *newsta);
CmsRet sta_node_replace(STA_NODE *old, STA_NODE *new);
CmsRet _sta_node_del(DlistNode *staHeader, unsigned char *stamac);
CmsRet _re_node_del(DlistNode *staHeader, unsigned char *stamac);
STA_NODE *_lookup_sta_node(DlistNode *staHeader, unsigned char *stamac);
STA_NODE *_lookup_re_node(DlistNode *staHeader, unsigned char *remac);
*/

CmsRet sta_node_add(unsigned char *stamac,unsigned char*remac, unsigned char contype);
CmsRet sta_node_del(unsigned char *stamac);
CmsRet re_node_del(unsigned char *remac);
int lookup_sta_node(unsigned char *stamac, unsigned char *remac);
void display_sta_table(void);
void sta_node_clear(void);

#endif
