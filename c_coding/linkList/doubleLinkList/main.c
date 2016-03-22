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
		printf("the tail of the delvlist is %s\n",list_tail(devlist)->data);
		list_show(devlist);
	}
	
#endif
	fill_default_list(devlist);
	list_show(devlist);


	/*destory the last link list*/
	int size = list_size(devlist);
	printf("the sizeof the list devlist is %d\n",size);
	printf("destroy the devlist link list!\n");
	list_destroy(devlist);
	list_show(devlist);
	
	

	return 0;
}
