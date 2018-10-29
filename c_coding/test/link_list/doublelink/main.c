#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "re.h"
#include "dlist.h"

int main(int argc,char **argv)
{
	
 	STA_NODE *sta1 = NULL;
	STA_NODE *sta2 = NULL;
	STA_NODE *sta = NULL;

	DLIST_HEAD(sta_header);
	//struct dlist_node *sta_header;
	//DLIST_HEAD_INIT(sta_header);	
	
	printf("prepare the data for station node\n");
	sta1 = (STA_NODE *)malloc(sizeof(STA_NODE));
	//memcpy(sta1->mac,"\0xaa\0xbb\0xcc\0xdd\0xee\0xf1");
	memcpy(sta1->stamac,"aa:bb:cc:dd:ee:f0",18);
	memcpy(sta1->remac,"aa:bb:cc:dd:ee:f1",18);
	
	printf("prepare the data for station node 2\n");
	sta2 = (STA_NODE *)malloc(sizeof(STA_NODE));
	memcpy(sta2->stamac,"aa:bb:cc:dd:ee:f2",18);
	memcpy(sta2->remac,"aa:bb:cc:dd:ee:f3",18);

	printf("add the sta1 to the list!\n");
	sta_node_add(sta_header,&sta1->stalist);
	printf("add the sta2 to the list!\n");
	sta_node_add(sta_header,&sta2->stalist);
	
	printf("show:\n");
	sta = lookup_sta_node(sta_header, "aa:bb:cc:dd:ee:f2");
	if(sta){
		printf("dest stamac = %s\n", sta->stamac);
	}

	return 0;
	
}








