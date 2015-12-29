#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<string.h>



//#define PIDFILE "/var/run/ip6scan.pid"

#define PIDFILE "/tmp/ip6scan.pid"
static void recordPid(){
	FILE *fp;
	char buffer[256] = {0};
	sprintf(buffer,"%d\n",getpid());
	
	if((fp = fopen(PIDFILE,"w")) == NULL){
		printf("open the file failed\n");
		exit(1);
	}
	printf("the pid is %s \n",buffer);
	fwrite(buffer,sizeof(buffer),1,fp);
	
	fclose(fp);
	
}

static void dataTransmission(){
	printf("mv the data from the /proc/ip6addr to /tmp/ip6addrs\n");
}

static void sigUsr(int signo){/*argument is signal number*/
	if (signo == SIGUSR1){
		printf("received SIGUSR1 [%d]\n",signo);
		dataTransmission();
	}else{
		printf("received signal %d \n",signo);
	}
}

int main(int argc,char **argv){

	printf("---------hello world\n");
	
	recordPid();
	
	if(signal(SIGUSR1,sigUsr) == SIG_ERR){
			printf("can't catch SIGUSR1\n");
	}
	
	daemon(0,2);
	
	while(1)
	{
		printf("loop\n");
		
		sleep(5);

		pause();//let the program 
		
	}



	


}
