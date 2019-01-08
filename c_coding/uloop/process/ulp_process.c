#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <libubox/uloop.h>

struct uloop_process *u_process = NULL;
/*c: present the process who exit, ret:present the exist status*/
void process_exit(struct uloop_process *c , int ret){
	printf("child process eixt id[%d],status[%#x]\n",c->pid ,ret);
	free(c);

}

void child_process(int t){
	printf("process pid:%d is running\n",getpid());
	if(t > 0)
		sleep(t);
	printf("process id[%d] will exit...\n",getpid());
	exit(t);

}

int main(){

	int i;
	pid_t pid;
	uloop_init();
	for(i=0;i<10;i++){
		usleep(500);
		pid = fork();
		if( pid==0){
			child_process((i+1) *10);
		}
		else{
			u_process = (struct uloop_process *)malloc(sizeof(struct uloop_process));
			if(NULL ==u_process){
				perror("malloc");
				exit(-1);
			}
			u_process->pid = pid;
			u_process->cb = process_exit;
			u_process->pending = false;
			if(uloop_process_add(u_process) < 0){
				printf("uloop_process_add failed...\n");
			}
			printf("success create proces pid:%d\n",pid);
		}
	}
	printf("uloop_runing...\n");

	uloop_run();

	uloop_done();

	return 0;

}
