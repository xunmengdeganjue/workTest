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