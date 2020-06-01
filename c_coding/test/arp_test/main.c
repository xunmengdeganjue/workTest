
#include <stdio.h>
#include "state.h"
#include "tools.h"
#include "arp.h"
#include "logopt.h"

P_INFO *pinfo = NULL;

STATE p_state[]={
	{P_START,arp_start,NULL},
	{P_RUNNING,arp_process_start,run_arp_checking},
	{P_ERROR,display_error,NULL},
	{P_END,restart_process,NULL},
	{P_MAX,NULL,NULL}

};
void arp_handler(struct uloop_fd *u, unsigned int events){
	logopt_trace_enter();
	struct arpMsg	arp;
	int len = -1;
   
	if( events & ULOOP_READ)
	{
		len = recv(u->fd, &arp, sizeof(arp), 0);
	}
	if (len <= 0)
		return;

	if (arp.operation == htons(ARPOP_REPLY) && bcmp(arp.tHaddr, pinfo->ifmac, 6) == 0 &&
		*((u_int *) arp.sInaddr) == pinfo->gwip)
	{
		pinfo->arp_count = 0;
		logopt_info("Get the arp reply ok!\n");
		set_p_state(P_RUNNING);
	}
	logopt_trace_exit();

}

void restart_process(){
	printf("P_END:here we will restart the process!\n");
	set_p_state(P_START);

}
void display_error(){

	logopt_err("ERROR ERROR ERROR!\n");
	set_p_state(P_END);

}
void  start_arpreq_uloop( int fd){
	logopt_trace_enter();
	pinfo->arp_fd = fd;
	pinfo->arp_uloopfd.fd = fd;
	logopt_dbg("the fd=%d;the pinfo->arp_uloopfd.fd=%d\n",fd,pinfo->arp_uloopfd.fd);
	pinfo->arp_uloopfd.cb = arp_handler;
	pinfo->arp_uloopfd.registered = false;
	pinfo->arp_uloopfd.flags = ULOOP_READ;
	uloop_fd_add(&pinfo->arp_uloopfd, ULOOP_READ);
	logopt_trace_exit();
}

void stop_arpreq_uloopfd(){
	logopt_trace_enter();
	uloop_fd_delete(&pinfo->arp_uloopfd);
	if (pinfo->arp_fd > 0)
		close(pinfo->arp_fd);
	pinfo->arp_fd = -1;
	pinfo->arp_count = 0;
	logopt_trace_exit();

}

void arp_start(){
	logopt_trace_enter();
	logopt_info("Gateway is [%ld]\n" ,pinfo->gwip);

	//start_arpreq_uloop(pinfo->arp_fd);
	//arp_send(pinfo->gwip, pinfo->local_ip, pinfo->brmac, LOCAL_INTERFACE, pinfo->arp_fd);
	set_p_state(P_RUNNING);
	logopt_trace_exit();
}

void arp_timer(){
	logopt_trace_enter();
	STATE *pstate;
	
	//stop_arpreq_uloopfd();
	//start_arpreq_uloop(pinfo->arp_fd);
	logopt_dbg("arp send times = %d\n",pinfo->arp_count);
	if(pinfo->arp_count < ARP_RETRY_MAXUM){
		pinfo->arp_count += 1;
		pstate=&p_state[pinfo->p_state];
		if(pstate && pstate->run)
			pstate->run();
		uloop_timeout_set(&pinfo->arp_tmot, pinfo->arp_check_interval);
	}else{
		/**/
		logopt_err("change the state machine to the R_ERROR!\n");
		set_p_state(P_ERROR);
	}
	logopt_trace_exit();

}
void start_arp_check_timer(int interval){
	logopt_trace_enter();
	
	pinfo->arp_tmot.cb = arp_timer;
	uloop_timeout_set(&pinfo->arp_tmot, interval);
	
	logopt_trace_exit();
}

void arp_process_start(){
	logopt_trace_enter();
	int fd = -1;

	fd = arp_socket_create();
	logopt_info("the pinfo->arp_fd=%d\n",pinfo->arp_fd);

	stop_arpreq_uloopfd();
	logopt_dbg("the pinfo->arp_fd=%d\n",pinfo->arp_fd);
	
	start_arpreq_uloop(fd);
	logopt_dbg("the pinfo->arp_fd=%d\n",pinfo->arp_fd);
	
	start_arp_check_timer(pinfo->arp_check_interval);
	
	logopt_trace_exit();
}

void run_arp_checking(){
	logopt_trace_enter();
	show_ip(pinfo->gwip);
	logopt_info("the gateway ip is [%s]\n", show_ip(pinfo->gwip));
	logopt_info("the source ip is [%s]\n", show_ip(pinfo->local_ip));
	logopt_info("the mac addr of the interface is [%02x:%02x:%02x:%02x:%02x:%02x]\n", pinfo->ifmac[0],
		pinfo->ifmac[1],pinfo->ifmac[2],pinfo->ifmac[3],pinfo->ifmac[4],pinfo->ifmac[5],pinfo->ifmac[6]);
	arp_send(pinfo->gwip, pinfo->local_ip, pinfo->ifmac, LOCAL_INTERFACE, pinfo->arp_fd);
	uloop_timeout_set( &pinfo->arp_tmot,pinfo->arp_check_interval);
	logopt_trace_exit();
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
	logopt_trace_enter();
	char gatway_ip[16] = {0};
	char local_ip[20] = {0};
	char mac[32] ={0};
	unsigned char xmac[6] = {0};
	
	pinfo = (P_INFO *)malloc(sizeof(P_INFO));
	pinfo->arp_fd = -1;
	pinfo->arp_count = 0;
	
	//memcpy(pinfo->ifmac,"\x00\x21\xcc\xd9\x06\x09",MAC_LENGTH);
	//logopt_info("the pinfo->ifmac=[%s]",pinfo->ifmac);
	
	get_mac_by_ifname(mac, LOCAL_INTERFACE);
	logopt_info("get the mac as humanbeen like format[%s]\n",mac);
	ether_atoe(mac,xmac);//convert the macaddr 'xx:xx:xx:xx:xx:xx' to the binary format.
	logopt_info("show the xmac the machine format[%02x:%02x:%02x:%02x:%02x:%02x]",
		xmac[0],xmac[1],xmac[2],xmac[3],xmac[4],xmac[5]);
	memcpy(pinfo->ifmac, xmac, MAC_LENGTH);
	
	if(!get_gw_ip(gatway_ip)){
		logopt_dbg("the gateway_ip is [%s]\n", gatway_ip);
		pinfo->gwip = inet_addr(gatway_ip);
		logopt_dbg("the pinfo->gwip is [%d]\n", pinfo->gwip);
	}
	show_ip(pinfo->gwip);

	if( get_ipaddr_by_ifname(local_ip,LOCAL_INTERFACE) == 0){
		logopt_info("the source ip is [%s]\n", local_ip);
		pinfo->local_ip = inet_addr(local_ip);
	}
	pinfo->arp_check_interval = ARP_CHECK_INTERVAL;
	
}
 
int main(int argc,char **argv){
	printf("enter\n");
	logopt_log_init();
    p_state_init();
    uloop_init();
	set_p_state(P_START);
    /* enter loop */
    uloop_run();
    /* exit loop */
    uloop_done();
	free(pinfo);
    
    return 0;
}
