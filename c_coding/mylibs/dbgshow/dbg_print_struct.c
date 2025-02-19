#include "dbg_print_struct.h"

#define REGISTER_PRINT_STRUCT(name, print_cb, help) \
static print_struct_t __TY_DEFINE_CMD_ST print_struct__##name = {#name, print_cb, help};

/********************* 定义打印的函数开始 *********************************/
void print_IGD_WLAN_ASSOCIATE_SSID_CONF_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}

REGISTER_PRINT_STRUCT(IGD_WLAN_ASSOCIATE_SSID_CONF_TAB, print_IGD_WLAN_ASSOCIATE_SSID_CONF_TAB,"<index>");
//static print_struct_t __attribute((section(".ty_define_cmd_struct"),used,aligned(4))) print_struct__IGD_WLAN_ASSOCIATE_SSID_CONF_TAB = 
//{"IGD_WLAN_ASSOCIATE_SSID_CONF_TAB",print_IGD_WLAN_ASSOCIATE_SSID_CONF_TAB,""};


void print_IGD_WLAN_EASYMESH_ATTR_CFG_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}

REGISTER_PRINT_STRUCT(IGD_WLAN_EASYMESH_ATTR_CFG_TAB, print_IGD_WLAN_EASYMESH_ATTR_CFG_TAB,"");
//static print_struct_t __attribute((section(".ty_define_cmd_struct"),used,aligned(4))) print_struct__IGD_WLAN_EASYMESH_ATTR_CFG_TAB = 
//{"IGD_WLAN_EASYMESH_ATTR_CFG_TAB",print_IGD_WLAN_EASYMESH_ATTR_CFG_TAB,""};

/* ================================================================== */

void print_IGD_EM_CTRL_BASIC_CFG_TAB(int argc, char **argv)
{
     printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_EM_CTRL_BASIC_CFG_TAB, print_IGD_EM_CTRL_BASIC_CFG_TAB, "");

#if 0
>>>>>>> 41ee2b06 (add new debug code frame:dbgshow.)
/* ================================================================== */

void print_IGD_EM_CTRL_TOPOLOGY_QUERY_DEV(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_EM_CTRL_TOPOLOGY_QUERY, print_IGD_EM_CTRL_TOPOLOGY_QUERY_DEV, "");

/* ================================================================== */

void print_IGD_WAN_CONNECTION_ATTR_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_WAN_CONNECTION_ATTR_TAB, print_IGD_WAN_CONNECTION_ATTR_TAB, "<idx>");

/* ================================================================== */
void print_IGD_WAN_CONNECTION_STATE_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_WAN_CONNECTION_STATE_TAB, print_IGD_WAN_CONNECTION_STATE_TAB, "<idx>");
/* ================================================================== */


/* ================================================================== */
void print_IGD_WAN_CONNECTION_BIND_ATTR_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_WAN_CONNECTION_BIND_ATTR_TAB, print_IGD_WAN_CONNECTION_BIND_ATTR_TAB, "<idx>");
/* ================================================================== */

void print_IGD_WLAN_SSID_CFG_ATTR_TAB(int argc, char **argv)
{
    printf("Debug[%s][%d]\n", __FUNCTION__, __LINE__);
}
REGISTER_PRINT_STRUCT(IGD_WLAN_SSID_CFG_ATTR_TAB, print_IGD_WLAN_SSID_CFG_ATTR_TAB, "<idx>");
/* ================================================================== */
#endif

/* ================================================================== */
