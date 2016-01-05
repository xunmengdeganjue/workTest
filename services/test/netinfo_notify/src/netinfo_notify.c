/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Sky Software  Co.,Ltd. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   ARM9
 *    OS                :   OpenWRT
 *    Version          :   0.10
 *    Released by Sky Software  Co.,Ltd
 *                      2015.12.31
 *
 *
 *
 *       File Name      : netinfo_notify.c
 *       Create Date    : 2016/1/4
 *       Author         : Nick Li 
 *       Description    : 
 ******************************************************************************
*/

/****************************************************************************
 *  modify history(TransPlant-1st)                                         								 *
 *  NO.     modify reason              modify date      modify person      						 *
 *<--1-->                      
*****************************************************************************/


#include<stdio.h>
#include<unistd.h>

int main(void){
	
	printf("start the netinfo_notification daemon!\n");
	char cmdline[256] = {0};
	
	daemon(0,2);
	
	while(1)
	{	
		sprintf(cmdline,"%s","killall -10 netscan");
		system(cmdline);
		sleep(60);		
	}
	
	return 0;
}


