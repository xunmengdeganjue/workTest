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

int main()
{
	devList  *devlist = (devList *)malloc(sizeof(devList));
	list_init(devlist,destroy);
	
#ifdef DATA_TEST	
	/*fill some default data(shubiao,jianpan,xianshiqi) to the link list*/
	if(!fill_default_list(devlist)){
		list_show(devlist);
	}
	/*destory the last link list*/
#endif	
	
	
	

	return 0;
}
