/*
 ******************************************************************************
 *
 *    Copyright (C) 2015-2016 by Nick Li. All rights reserved.
 *    All source codes is distributed under the U-License.
 *
 *    CPU               :   ARM9
 *    OS                 :   OpenWRT
 *    Version          :   0.10
 *    Released by Nick Li
 *                      2015.12.31
 *
 *
 *
 *       File Name      : func.c
 *       Create Date  : 2015/12/31
 *       Author         	: Nick Li 
 *       Description    : 
 ******************************************************************************
*/

/****************************************************************************
 *  modify history(TransPlant-1st)                                         								 *
 *  NO.     modify reason              modify date      modify person      						 *
 *<--1-->                      
*****************************************************************************/

#include "func.h"


static void sigUsr(int signo){/*argument is signal number*/
	if (signo == SIGUSR1){
		printf("received SIGUSR1 [%d]\n",signo);
		data_transmission();
	}else if(signo == SIGTERM){
		printf("USER STOP THE DAEMON\n");
		//remove(runfile);
	}else if(signo == SIGKILL){
		printf("USER IS SEND A KILL SIGNAL\n");	
	}
	else{
		printf("received signal %d \n",signo);
	}
}

static void recordPid(){
	
	FILE *fp;
	int fd;
	char *runfile = NULL;
	char buffer[256] = {0};
	struct flock lock;
	
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	
	runfile = PIDFILE;
	if(runfile){
		
		//unlink(runfile);
		
		if((fp = fopen(PIDFILE,"w")) == NULL){
			printf("open the file failed\n");
			exit(1);
		}
		
		fd = fileno(fp);
		
		if( fcntl(fd, F_SETLK, &lock) < 0 ){
			printf("set lock to the pidfile %s failed!\n",runfile);
			unlink(runfile);
		}
		
		sprintf(buffer,"%d\n",getpid());	
		
		printf("the pid is %s \n",buffer);
		fwrite(buffer,sizeof(buffer),1,fp);
		fclose(fp);
	}
		
	
}


int main(int argc,char **argv){

	printf("---------hello world\n");
	
	if(signal(SIGUSR1,sigUsr) == SIG_ERR){
			printf("can't catch SIGUSR1\n");
	}
	
	daemon(0,2);
	
	while(1)
	{
		printf("loop\n");
		
		recordPid();
		
		sleep(5);

		pause();//let the program 
		
	}
	
	remove(PIDFILE);
	
}
