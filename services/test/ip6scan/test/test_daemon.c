#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char **argv){

	char cmdline[512] = {0};

	printf("start the test daemon!\n");
	
	daemon(0,2);
	
	while(1){
		sprintf(cmdline,"killall -10 net6scan");
		system(cmdline);
		usleep(1000000);
		printf("send a signal to write the data\n");
	}

	return 0;
}
