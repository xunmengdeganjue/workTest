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
 *       File Name      : func.c
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

int main()
{
	devList  *devlist = (devList *)malloc(sizeof(devList));
	list_init(devlist,destroy);
	devlist = fill_default_list();
/*	
	devList *tmplist = devlist;
	while(tmplist->tail->data != NULL){
		printf("the data lof the tmplist is %s\n",tmplist->tail->data);
		tmplist = tmplist->tail;		
	}
*/	
	list_show(devlist);

	return 0;
}
