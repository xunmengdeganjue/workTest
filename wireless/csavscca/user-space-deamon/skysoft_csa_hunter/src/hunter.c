/*
 ******************************************************************************
 *
 *    Copyright (C) 2016-2017 by Skysoft Co.,Ltd. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   IPQ806X
 *    OS                :   OpenWRT
 *    Version           :   0.10
 *    Released by Skysoft Co.,Ltd
 *                      2016/12/21
 *
 *
 *
 *       File Name      : hunter.c
 *       Create Date    : 2016/12/21
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


static inline void get_time(char *buff, int buff_len)
{
	struct timeval tv = { 0 };
	struct tm *time_v = NULL, time_value = { 0 };

	gettimeofday(&tv, NULL);
	/* time_v = localtime(&tv.tv_sec); */
	time_v = localtime_r(&tv.tv_sec, &time_value);
	if (NULL != time_v) {
		snprintf(buff, buff_len, "%d-%02d-%02d %02d:%02d:%02d ",
			 time_v->tm_year + 1900, time_v->tm_mon + 1,
			 time_v->tm_mday, time_v->tm_hour, time_v->tm_min, time_v->tm_sec);
	}
}

int main(int argc,char **argv){
	
	char time[64] = {0};
	
	if(signal(SIGUSR1,sighandle) == SIG_ERR){
		printf("signal error\n");
	}
	
	daemon(1, 1);
	/*Write the pid to the /proc/program-pid-file here*/
	pid_write();	
	while(1){
	
		/*Maybe we will add some other operation here.*/
		//get_time(time,sizeof(time));
		//printf("The time is %s\n",time);
		sleep(60);
		

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
	char newbuffer[544] = {0};
	char time[32] = {0};
	
	if((src_fp=fopen(CSAMESSAGE,"r"))){
		if((dest_fp=fopen(CSACCALOG,"a"))){
			while(fgets(buffer,512,src_fp)){
				get_time(time,sizeof(time));
				sprintf(newbuffer,"%s  %s\n",time,buffer);
				fwrite(newbuffer,sizeof(newbuffer),1,dest_fp);	
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

