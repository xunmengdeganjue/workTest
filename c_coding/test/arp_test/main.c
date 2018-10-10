#include <stdio.h>
#include <libubox/uloop.h>
#include "state.h"

P_INFO *pinfo = NULL;

STATE p_state[]={
	{P_START,arp_start,NULL},
	{P_PROCESSING,arp_process,NULL},
	{NULL,NULL,NULL}

};
void arp_handler(struct uloop_fd *u, unsigned int events){
	

}

void  start_arpreq_uloop(fd){
	pinfo->arp_uloopfd.cb=arp_handler;

}
void arp_start(){
	
	

}
/*
设置状态机
*/
void set_p_state(int state){
	STATE *now_state;
	pinfo->state = state;
	now_state=&(p_state[state]);
	if(now_state && now_state->start){
		now_state->start();
	}

}
/**/
void p_state_init(){

	pinfo = (P_INFO *)malloc(sizeof(P_INFO));
	pinfo->arp_fd = -1;
	pinfo->arp_count = 0;

}

int main(int argc,char **argv){

    p_state_init();
    uloop_init();
	set_p_state(P_START);
    /* enter loop */
    uloop_run();
    /* exit loop */
    uloop_done();
    
    return 0;
}
