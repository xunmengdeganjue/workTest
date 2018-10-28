#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "re.h"
#include "dlist.h"

int main(int argc,char **argv)
{
	
	STA_NODE *sta = NULL;
 	STA_NODE *sta1 = NULL;
	STA_NODE *sta2 = NULL;
	STA_NODE *sta3 = NULL;

	sta = (STA_NODE *)malloc(sizeof(STA_NODE));
	DLIST_HEAD(sta_header);
	sta_header = sta->stalist;
	
	
	printf("prepare the data for station node\n");
	sta1 = (STA_NODE *)malloc(sizeof(STA_NODE));
	strcpy(sta1->hostname,"askey_re1");
	strcpy(sta1->ip,"192.168.1.11");
	//memcpy(sta1->mac,"\0xaa\0xbb\0xcc\0xdd\0xee\0xf1");
	memcpy(sta1->mac,"aa:bb:cc:dd:ee:f1",20);
	
	//DLIST_HEAD_IN_STRUCT_INIT(&sta1->stalist);
	
	printf("prepare the data for station node 2\n");
	sta2 = (STA_NODE *)malloc(sizeof(STA_NODE));
	strcpy(sta2->hostname,"askey_re2");
	strcpy(sta2->ip,"192.168.1.12");
	//memcpy(sta2->mac,"\0xaa\0xbb\0xcc\0xdd\0xee\0xf2");
	memcpy(sta2->mac,"aa:bb:cc:dd:ee:f2",20);
	//DLIST_HEAD_IN_STRUCT_INIT(&sta2->stalist);

	
	printf("add the sta1 to the list!\n");
	sta_node_add(sta_header,&sta1->stalist);
	printf("add the sta2 to the list!\n");
	sta_node_add(sta_header,&sta2->stalist);
	
	printf("show:\n");
	sta3 = lookup_sta_node(sta_header, "aa:bb:cc:dd:ee:f2");
	if(sta3){
		printf("dest sta ip = %s\n", sta3->ip);
	}

	return 0;
	
}








