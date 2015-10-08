/* 
 *------------------------------------------------------------------------------ 
 * 
 *    Copyright (C) 2015-2016 Chengdu Skysoft Info&Tech Co., Ltd. All rights reserved. 
 *    All source codes is distributed under the U-License. 
 * 
 *    CPU:        x86   
 *    RTOS:       
 *    Version:    0.50.00 
 *    Released by Chengdu Skysoft Info&Tech Co., Ltd.
 *                  2015/09/20. 
 * 
 * 
 *  File Name    : daemon.c
 *  Create Date  : 2015/09/20 
 *  Author   	 : Nick Li
 *  Description  : Use Main Interface function definition. 
 *------------------------------------------------------------------------------- 
 */ 
 
#include<stdio.h>
#include<time.h>

void init_daemon(void);

int main()
{
	FILE * fp;
	time_t t;
	
	init_daemon();/*init the daemon*/
	
	while(1){
		sleep(60);
		if((fp=fopen("/tmp/daemon_test.log","a")) >= 0){
			t= time(0);
			fprintf(fp,"\33[31mIm here\33[0m  \33[33mat %s\33[0m \n",asctime(localtime(&t)));
			fclose(fp);
		}	
	}
	return 0;
	
}
