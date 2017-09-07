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
 *       File Name      : hunter.c
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
****************************************************************************/

#include "hunter.h"


int main(int argc,char **argv){
	
	if(signal(SIGUSR1,sighandle) == SIG_ERR){
		printf("signal error\n");
	}
	
	daemon(1, 1);
	/*Write the pid to the /proc/program-pid-file here*/
	pid_write();	
	while(1){
	
		printf("hello\n");
		sleep(1);

	}

}

static void sighandle(int signo){
	
	printf("I catch a signal send by user!\n");
	do_capture();
	
}

static int pid_write(void){
	
	FILE * pid_fp;
	char pidbuffer[32] = {0};
	
	sprintf(pidbuffer,"%d",getpid());
	printf("Pid is %d",getpid());
	
	pid_fp=fopen(PID_FILE,"w");
	if(pid_fp){
		if(!fwrite(pidbuffer,sizeof(pidbuffer),1,pid_fp)){
			printf("write the pid file failed!\n");
		}
		fclose(pid_fp);
	}
	
	return 0;
}

int do_capture(){
	FILE *src_fp,*dest_fp;
	char buffer[512] = {0};
	
	if((src_fp=fopen(CSAMESSAGE,"r"))){
		if((dest_fp=fopen(CSACCALOG,"a"))){
			while(fgets(buffer,512,src_fp)){
				fwrite(buffer,sizeof(buffer),1,dest_fp);	
			}
			fclose(dest_fp);
		}else{
			printf("Open the file [%s] failed!\n",CSACCALOG);
			return -1;
		}
		fclose(src_fp);
	}else{
		printf("Open the file [%s] failed!\n",CSAMESSAGE);
		return -1;
	}
	return 0;
}
