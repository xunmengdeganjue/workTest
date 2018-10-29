#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "re.h"
#include "dlist.h"

DLIST_HEAD(sta_header);

int main(int argc,char **argv)
{

#ifndef _RE_DEBUG	
 	STA_NODE *sta1 = NULL;
	STA_NODE *sta2,*sta3 = NULL;
	int i = 0;

	struct dlist_node *sta;
	

	//DLIST_HEAD(sta_header);
	
	printf("prepare the data for station node\n");
	sta1=sta_node_alloc();
	//memcpy(sta1->mac,"\0xaa\0xbb\0xcc\0xdd\0xee\0xf1");
	memcpy(sta1->stamac,"aa:bb:cc:dd:ee:f0",18);
	memcpy(sta1->remac,"aa:bb:cc:dd:ee:f1",18);
	sta1->con_type = HOST_CONN_WIFI_24G;
	
	printf("prepare the data for station node 2\n");
	sta2=sta_node_alloc();
	memcpy(sta2->stamac,"aa:bb:cc:dd:ee:f2",18);
	memcpy(sta2->remac,"aa:bb:cc:dd:ee:f3",18);
	sta2->con_type = HOST_CONN_WIFI_5G;
	sta3=sta_node_alloc();
	memcpy(sta3->stamac,"aa:bb:cc:dd:ee:f2",18);
	memcpy(sta3->remac,"aa:bb:cc:dd:ee:f3",18);
	sta3->con_type = HOST_CONN_WIFI_5G;
	printf("=============Add the node to the double linklist sta_header==========\n");
	//dlist_append(&sta1->stalist, &sta_header);
	sta_node_add(&sta_header, sta1);
	//dlist_append(&sta2->stalist, &sta_header);
	sta_node_add(&sta_header, sta2);
	sta_node_add(&sta_header, sta2);

	printf("\033[35mShow the orginal content of the sta table:\033[0m\n");
	display_sta_table(&sta_header);
	
	printf("=============Test for the 'list_for_each' Macro=================\n");
	list_for_each(sta, &sta_header) /*Test for the 'list_for_each' Macro*/
	{
		STA_NODE *tmp_sta;
		printf("%s\n", dlist_entry(sta, struct sta_node, stalist)->remac);
		/*check the stamac to get the remac*/
		tmp_sta = dlist_entry(sta, struct sta_node, stalist);
		if(strcmp(tmp_sta->stamac,"aa:bb:cc:dd:ee:f2")==0){
			printf("find the dest station node!\n");
		}
	}
	
	STA_NODE *dest_sta = NULL;
 	dest_sta = lookup_sta_node(&sta_header,"aa:bb:cc:dd:ee:f2");	/*find the dest station node*/
	if(dest_sta){
		printf("find dest_sta:\n");
		printf("remac=[%s]\n", dest_sta->remac);
		printf("Connect type is [%d]\n", dest_sta->con_type);
		
#if 0
		/*Test the delete option.*/
		printf("=============Test the delete operation of the the double linklist=============");
		printf("Test the delete operation of the delete the renode[%s]\n",dest_sta->remac);
		re_node_del(&sta_header,dest_sta->remac);		/*Delete the dest station node*/
#else		
		/*Test modification of the dest station node*/
		printf("=============Test the node replace operation of the double linklist !=============\n");
		STA_NODE *new_sta = sta_node_alloc();
		memcpy(new_sta->stamac,"aa:bb:cc:dd:ee:ff",18);
		memcpy(new_sta->remac,"A0:b0:c0:d0:e0:f0",18);
		new_sta->con_type = HOST_CONN_ETH_WAN;
		printf("Replace the old node stamac[%s] by new node stamac[%s]\n",dest_sta->stamac,new_sta->stamac);
		sta_node_replace(dest_sta,new_sta);				/*replace the dest station node*/
#endif		
	}
	
	//re_node_del(&sta_header,"aa:bb:cc:dd:ee:f1");

	/*Display all content of the list*/
	printf("\033[33m=============Show the content of the sta table:=============\033[0m\n");
	display_sta_table(&sta_header);
	
#else
	/*The simplest test of the linx kernel double linklist.*/
	struct num {
		 struct dlist_node node;
		 int number;
	};

	DLIST_HEAD(head);
	struct num *tmp;
	struct dlist_node *iterator;
	int i;   

	for (i=0 ; i<5 ; i++) {
	 tmp = malloc(sizeof(struct num));
	 tmp->number = i;
	 dlist_append(&tmp->node, &head);
	}

	list_for_each(iterator, &head)
	{
	 printf("%d\n", dlist_entry(iterator, struct num, node)->number);
	}
#endif

	return 0;
	
}








