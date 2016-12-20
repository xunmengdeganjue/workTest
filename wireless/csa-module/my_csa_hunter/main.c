/*
 ******************************************************************************
 *
 *    Copyright (C) 2016-2017 by Skysoft Co.,Ltd. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   
 *    OS                :   OpenWRT
 *    Version           :   0.10
 *    Released by TianFu Software Park Co.,Ltd
 *                      2013.01.30
 *
 *
 *
 *       File Name      : account.c
 *       Create Date    : 2012/12/21
 *       Author         : Li Qiyuan
 *       Description    : These program is to capture the Csa and CCA information
 *						  send by the AP.
 ******************************************************************************
*/
/****************************************************************************
 *  modify history(TransPlant-1st)                                          *
 *  NO.     modify reason              modify date      modify person       *
 *<--1-->   creat                      2016/12/21		Nick.Li             *
/****************************************************************************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>

static void sighandle(int);

int main(int argc,char **argv){
	
	if(signal(SIGUSR1,sighandle) == SIG_ERR){
		printf("signal error\n");
	}
	
	daemon(1, 1);
	while(1){
	
		printf("hello\n");
		sleep(1);

	}

}

static void sighandle(int signo){
	
	printf("I catch a signal send by user!\n");
	exit(1);
	
}