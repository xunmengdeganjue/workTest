/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Nick Li. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   
 *    OS                :   Ubuntu-14.04
 *    Version           :   0.10
 *    Released by Nick Li
 *                      2016.3.30
 *
 *
 *
 *       File Name      : main.c
 *       Create Date    : 2016/03/30
 *       Author         : Nick Li 
 *       Description    : 
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                         	*
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->                      
*****************************************************************************/

#include <stdio.h>

#include "doubleLinkList.h"
#include "data_test.h"
#include "sky_log.h"

int main()
{
	devList  *devlist = (devList *)malloc(sizeof(devList));
	list_init(devlist,destroy);
	
	sky_log_init();
	
#ifdef DATA_TEST	
	/*fill some default data(shubiao,jianpan,xianshiqi) to the link list*/
	if(!fill_default_list(devlist)){
		//printf("the tail of the delvlist is %s\n",list_tail(devlist)->data);
		list_show(devlist);
	}
	
#endif
	fill_default_list(devlist);
	list_show(devlist);


	/*destory the last link list*/
	int size = list_size(devlist);
	printf("the sizeof the list devlist is %d\n",size);
	printf("destroy the devlist link list!\n");
	//list_destroy(devlist);
	
	/*test the inserting*/
	sky_dbg("test the insert operation!\n");
	devNode *newnode = (devNode *)malloc(sizeof(devNode));
	strcpy(newnode->data,"hhhh");
	list_insert(devlist,newnode);
	list_show(devlist);

	sky_dbg("test the remove operation!\n");
	void *del_data; 
	sky_trace_line();
#ifndef DOUBLE_CIRCULAR_LINK
#ifdef BACK_INSERT
	//del_data= NULL;
	sky_dbg("test remove the tail node of the list!\n");
	list_remove_element(devlist,list_tail(devlist),(void **)&del_data);
	sky_dbg("the content of the deleted node is %s\n",del_data);
	list_show(devlist);
#else	
	sky_dbg("test remove the head node of the list!\n");
	list_remove_element(devlist,list_head(devlist),(void **)&del_data);
	sky_dbg("the content of the deleted node is %s\n",del_data);
	list_show(devlist);
#endif
#else
	sky_dbg("test remove the tail node of the list!\n");
	list_remove_element(devlist,list_tail(devlist),(void **)&del_data);
	sky_dbg("the content of the deleted node is %s\n",del_data);
	list_show(devlist);
	
	sky_dbg("test remove the head node of the list!\n");
	list_remove_element(devlist,list_head(devlist),(void **)&del_data);
	sky_dbg("the content of the deleted node is %s\n",del_data);
	list_show(devlist);


#endif

	

	return 0;
}
