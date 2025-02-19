#ifndef __HIS_PRINT_STRUCT_H__
#define __HIS_PRINT_STRUCT_H__
//#pragma once
#include <stdio.h>

#define __TY_DEFINE_CMD_ST __attribute((section(".my_cmd_struct"),unused,aligned(4)))

typedef struct {
    char *name;
    void (*cmd)(int argc, char **argv);
    char *help;
}print_struct_t;

extern print_struct_t __TY_DEFINE_CMD_ST_start;
extern print_struct_t __TY_DEFINE_CMD_ST_end;
#define IGD_DEVICE_TAB_START 0
enum cm_tab_id {
	IGD_TAB_ID_BEGIN = IGD_DEVICE_TAB_START,
	IGD_DEV_CAPABILITY_TAB,
	IGD_DEVINFO_TAB,
	IGD_WLAN_ASSOCIATE_SSID_CONF_TAB,
	IGD_WLAN_EASYMESH_ATTR_CFG_TAB,
	// tianyi add
	IGD_TY_WIFI_TIMER_TAB,
	IGD_TY_SYSTEM_MISC_TAB,
	IGD_TY_WEB_TIMER_REBOOT_TAB,
	IGD_TY_AUTO_UPGRADE_TAB,
	IGD_TY_FTP_UPGRADE_TAB,
	IGD_TY_CM_PLUGIN_TAB,
	// tianyi add end

	IGD_TAB_ID_MAX,
};

#endif
