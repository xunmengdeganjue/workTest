
#include <stdio.h>
#include "state.h"
#include "tools.h"
#include "arp.h"

P_INFO *pinfo = NULL;

STATE p_state[]={
	{P_START,arp_start,NULL},
	{P_RUNNING,arp_process_start,run_arp_checking},
	{P_ERROR,display_error,NULL},
	{P_END,restart_process,NULL},
	{P_MAX,NULL,NULL}

};
void arp_handler(struct uloop_fd *u, unsigned int events){
	struct arpMsg	arp;
	int len = -1;
   
	if( events & ULOOP_READ)
	{
		len = recv(u->fd, &arp, sizeof(arp), 0);
	}
	if (len <= 0)
		return;

	if (arp.operation == htons(ARPOP_REPLY) && bcmp(arp.tHaddr, pinfo->brmac, 6) == 0 &&
		*((u_int *) arp.sInaddr) == pinfo->gwip)
	{
		pinfo->arp_count = 0;
		printf("Get the arp reply ok!\n");
		set_p_state(P_RUNNING);
	}

}

void restart_process(){
	printf("P_END:here we will restart the process!\n");
	set_p_state(P_START);

}
void display_error(){

	printf("ERROR ERROR ERROR!\n");
	set_p_state(P_END);

}
void  start_arpreq_uloop( int fd){
	//pinfo->arp_count = 0;
	pinfo->arp_uloopfd.fd=fd;
	pinfo->arp_uloopfd.cb=arp_handler;
	pinfo->arp_uloopfd.registered = false;
	pinfo->arp_uloopfd.flags = ULOOP_READ;
	uloop_fd_add(&pinfo->arp_uloopfd, ULOOP_READ);
}

void stop_arpreq_uloopfd(){
	uloop_fd_delete(&pinfo->arp_uloopfd);
	if (pinfo->arp_fd > 0)
		close(pinfo->arp_fd);
	pinfo->arp_fd = -1;
	pinfo->arp_count = 0;

}

void arp_start(){
	pinfo->arp_fd = arp_socket_create();
	start_arpreq_uloop(pinfo->arp_fd);
	arp_send(pinfo->gwip, pinfo->local_ip, pinfo->brmac, LOCAL_INTERFACE, pinfo->arp_fd);
	set_p_state(P_RUNNING);
}

void arp_timer(){
	STATE *pstate;
	printf("%s,%d\n",__FUNCTION__,__LINE__);
	if(pinfo->arp_count < ARP_RETRY_MAXUM){
		pinfo->arp_count += pinfo->arp_count;
		pstate=&p_state[pinfo->p_state];		
		if(pstate && pstate->run)
			pstate->run();
		uloop_timeout_set(&pinfo->arp_tmot, pinfo->arp_check_interval);
	}else{
		/**/
		printf("change the state machine to the R_ERROR!\n");
		set_p_state(P_ERROR);
	}

}
void start_arp_check_timer(int interval){
	pinfo->arp_tmot.cb=arp_timer;
	uloop_timeout_set(&pinfo->arp_tmot, interval);
	printf("%s,%d\n",__FUNCTION__,__LINE__);
}

void arp_process_start(){
	stop_arpreq_uloopfd();
	start_arpreq_uloop(pinfo->arp_fd);
	start_arp_check_timer(pinfo->arp_check_interval);
	printf("%s,%d\n",__FUNCTION__,__LINE__);

	
}

void run_arp_checking(){
	arp_send(pinfo->gwip, pinfo->local_ip, pinfo->brmac, LOCAL_INTERFACE, pinfo->arp_fd);
	uloop_timeout_set( &pinfo->arp_tmot,pinfo->arp_check_interval);
}

/*
设置状态机
*/
void set_p_state(int state){
	STATE *now_state;
	pinfo->p_state = state;
	now_state=&(p_state[state]);
	if(now_state && now_state->start){
		now_state->start();
	}

}
/**/
void p_state_init(){
	char gatway_ip[16] = {0};
	char local_ip[16] = {0};
	
	pinfo = (P_INFO *)malloc(sizeof(P_INFO));
	pinfo->arp_fd = -1;
	pinfo->arp_count = 0;
	memcpy(pinfo->brmac,"\x00\x21\xcc\xd9\x06\x09",MAC_LENGTH);

	if(!get_gw_ip(gatway_ip)){
		pinfo->gwip = inet_addr(gatway_ip);
	}

	if(get_ipaddr_by_ifname(local_ip,LOCAL_INTERFACE)){
		pinfo->local_ip = inet_addr(local_ip);
	}
	pinfo->arp_check_interval = ARP_CHECK_INTERVAL;
	
}

int main(int argc,char **argv){
	printf("enter\n");
    p_state_init();
	printf("enter\n");
    uloop_init();
	printf("enter\n");
	set_p_state(P_START);
    /* enter loop */
    uloop_run();
    /* exit loop */
    uloop_done();
    
    return 0;
}
