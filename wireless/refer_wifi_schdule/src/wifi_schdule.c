#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <suci.h>
#include "command.h"

extern int do_cmd(char *cmd);

#define WIFI_DELSCHFILE			"rm -rf /etc/crontabs/root"
#define WIFI_SCHDULE			"wifi schdule"
#define WIRELESS				"wireless"
#define WIFI_RESTART			"wifi down;wifi up"

#define WIFI0_SCHENABLE			"wireless.wifi0.wlshcenable"
#define WIFI0_DATEWKDY			"wireless.wifi0.datewkdy"
#define WIFI0_WKDYSTART			"wireless.wifi0.wkdystart"
#define WIFI0_WKDYEND			"wireless.wifi0.wkdyend"
#define WIFI0_DATEWKEN			"wireless.wifi0.datewken"
#define WIFI0_WKENSTART			"wireless.wifi0.wkenstart"
#define WIFI0_WKENEND			"wireless.wifi0.wkenend"
#define WIFI0_DISABLED			"wireless.wifi0.disabled"

#define WIFI1_SCHENABLE			"wireless.wifi1.wlshcenable"
#define WIFI1_DATEWKDY			"wireless.wifi1.datewkdy"
#define WIFI1_WKDYSTART			"wireless.wifi1.wkdystart"
#define WIFI1_WKDYEND			"wireless.wifi1.wkdyend"
#define WIFI1_DATEWKEN			"wireless.wifi1.datewken"
#define WIFI1_WKENSTART			"wireless.wifi1.wkenstart"
#define WIFI1_WKENEND			"wireless.wifi1.wkenend"
#define WIFI1_DISABLED			"wireless.wifi1.disabled"

int main(int argc, char *argv[])
{

	int ret = -1, k = 0, flag_t = 0, flag_upwk = 0, flag_upen = 0, flag_wifirestart = 0;
	char *p = NULL, ifname[32]={0}, wlschenable[32]={0},wifi_disabled[32]={0};
	int  sch_tab_dy[32], sch_tab_en[8];
	char datewkdy[32] = {0}, wkdystart[32] = {0}, wkdyend[32] = {0};
	char datewken[32] = {0}, wkenstart[32] = {0}, wkenend[32] = {0};
	int start_hour=-1,start_min=-1,end_hour=-1,end_min=-1;
	time_t now;
	struct tm *now_tm;


	if(argc == 2)
		strcpy(ifname, argv[1]);
	else
		strcpy(ifname, "wifi0");

	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_SCHENABLE, wlschenable);
	}
	else {
		ret = do_uci_get(WIFI1_SCHENABLE, wlschenable);
	}

	if(strcmp(wlschenable, "1")) {
		goto out;
	}

	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_DISABLED, wifi_disabled);
	}
	else {
		ret = do_uci_get(WIFI1_DISABLED, wifi_disabled);
	}


	now = time(0);
	now_tm = localtime(&now);

	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_DATEWKDY, datewkdy);
	}
	else {
		ret = do_uci_get(WIFI1_DATEWKDY, datewkdy);
	}

	p = strtok(datewkdy, ",");
	while(p !=NULL) {
		sscanf(p, "%d", &sch_tab_dy[k]);
		if(sch_tab_dy[k] == now_tm->tm_wday) {
			flag_t = 1;
		}
		p = strtok(NULL, ",");
		k++;
	}
	p = NULL;


	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_WKDYSTART, wkdystart);
	}
	else {
		ret = do_uci_get(WIFI1_WKDYSTART, wkdystart);
	}


	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_WKDYEND, wkdyend);
	}
	else {
		ret = do_uci_get(WIFI1_WKDYEND, wkdyend);
	}


	if(flag_t == 1) {
		sscanf(wkdystart, "%d:%d", &start_hour, &start_min);
		sscanf(wkdyend, "%d:%d", &end_hour, &end_min);
		if(start_hour==0 && start_min==0 && end_hour==0 && end_min==0) {
				flag_upwk = 1;
		}
		else if((start_hour*60+start_min) <= (now_tm->tm_hour*60+now_tm->tm_min)) {
			if((end_hour*60+end_min) > (now_tm->tm_hour*60+now_tm->tm_min)) {
				flag_upwk = 1;
			}
		}
	}


	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_DATEWKEN, datewken);
	}
	else {
		ret = do_uci_get(WIFI1_DATEWKEN, datewken);
	}

	k =0;
	flag_t = 0;
	start_hour=-1;
	start_min=-1;
	end_hour=-1;
	end_min=-1;
	p = strtok(datewken, ",");
	while(p !=NULL) {
		sscanf(p, "%d", &sch_tab_en[k]);
		if(sch_tab_en[k] == now_tm->tm_wday) {
			flag_t = 1;
		}
		p = strtok(NULL, ",");
		k++;
	}
	p = NULL;


	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_WKENSTART, wkenstart);
	}
	else {
		ret = do_uci_get(WIFI1_WKENSTART, wkenstart);
	}


	if(!strcmp(ifname, "wifi0")) {
		ret = do_uci_get(WIFI0_WKENEND, wkenend);
	}
	else {
		ret = do_uci_get(WIFI1_WKENEND, wkenend);
	}

	if(flag_t == 1) {
		sscanf(wkenstart, "%d:%d", &start_hour, &start_min);
		sscanf(wkenend, "%d:%d", &end_hour, &end_min);

		if(start_hour==0 && start_min==0 && end_hour==0 && end_min==0) {
			flag_upen =1;
		}
		else if((start_hour*60+start_min) <= (now_tm->tm_hour*60+now_tm->tm_min)) {
			if((end_hour*60+end_min) > (now_tm->tm_hour*60+now_tm->tm_min)) {
				flag_upen =1;
			}
		}
	}
	printf("upen [%d], upwk [%d]\n", flag_upen, flag_upwk);

	if(flag_upen == 0 && flag_upwk == 0) {
		if(!strcmp(wifi_disabled, "0")) {
			flag_wifirestart = 1;
			if(!strcmp(ifname, "wifi0"))
				ret = do_uci_set(WIFI0_DISABLED, "1");
			else
				ret = do_uci_set(WIFI1_DISABLED, "1");
		}
	}
	else {
		if(!strcmp(wifi_disabled, "1")) {
			flag_wifirestart = 1;
			if(!strcmp(ifname, "wifi0"))
				ret = do_uci_set(WIFI0_DISABLED, "0");
			else
				ret = do_uci_set(WIFI1_DISABLED, "0");
		}
	}

	printf("wifi restart [%d]\n", flag_wifirestart);
	if(flag_wifirestart == 1) {
		ret = do_uci_commit(WIRELESS);
		if(ret != 0) {
			goto out;
		}


		ret = system(WIFI_RESTART);
		if(ret != 0) {
			goto out;
		}
	}

out:
	return ret;
}
