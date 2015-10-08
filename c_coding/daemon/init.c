/* 
 *------------------------------------------------------------------------------ 
 * 
 *    Copyright (C) 2015-2016 by Chengdu Skysoft Info&Tech Co., Ltd. All rights reserved. 
 *    All source codes is distributed under the U-License. 
 * 
 *    CPU:         x86
 *    RTOS:       
 *    Version:    0.50.00 
 *    Released by Chengdu Skysoft Info&Tech Co., Ltd.
 *                  2015/09/20. 
 * 
 * 
 *  File Name    : init.c
 *  Create Date  : 2015/09/20 
 *  Author   	 : Nick Li
 *  Description  : Use Main Interface function definition. 
 *------------------------------------------------------------------------------- 
 */ 

#include<sys/param.h> /* for NOFILE */
#include <stdlib.h> /*for eixt*/
 
void init_daemon(void){
	
	int pid;
	int i;
	if(pid=fork())/*it's the paraent daemon*/
		exit(0); /*end the paraent daemon*/
	else if(pid<0){
		exit(1);/*fork failed ,game over.*/	
	}else{/*it's the first sub deamon.*/
		
		setsid();/*make the first subdaemon to he the new conversation and 
		daemon group leader. And seperate itself from the control terminal*/
		
		if(pid = fork()){
			exit(0);
		}else if(pid <0){
			exit(1);
		}else{/*It's the second sub-daemon,so continue.But the second sub-daemon
		is not the conversation group leader.*/
			for(i=0;i<NOFILE;++i)/*close all the opened file descriptor.*/
				close(i);
			chdir("/tmp");/*change the work folder to the /tmp.*/
			umask(0);/*reset the mask of the file.*/
			return ;
		}
	}
	
}