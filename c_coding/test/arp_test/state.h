#ifndef __STATE_H__
#define __STATE_H__

typedef struct state_machine{
	int state;
	void (*start)(void);
	void (*run)(void);
}STATE;

enum{
	P_START = 0,
	P_PROCESSING = 1,
	P_END = 2
};
typedef struct p_info{
	int p_state;
	int arp_count;
	unsigned int gwip;
	struct uloop_fd arp_uloopfd;
	struct uloop_timer arp_tmot;
}P_INFO;


void arp_start(void);
void arp_process(void);
void set_p_state(int state);

#endif