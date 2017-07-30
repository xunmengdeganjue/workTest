#include <linux/kernel.h>
#include <linux/module.h>
#include <net/sock.h>
#include <linux/skbuff.h>
#include <linux/netlink.h>

#ifndef NETLINK_EXAMPLE 17
#define NETLINK_EXAMPLE 17
#endif

#define NLEX_GRP_MAX 0

static struct sock *nlsk;

static void nl_callback(struct sk_buff *skb,int len){
	
	printk("hello world!\n");
	
}
struct netlink_kernel_cfg cfg = {
    .input = nl_callback
};

static int __init nlexample_init(void){
	
	nlsk = netlink_kernel_create(&init_net,NETLINK_EXAMPLE,&cfg); /*different linux kernel has different prototype*/
	if(nlsk == NULL){
		printk(KERN_ERR"Can't create netlink\n");
		return -ENOMEM;
		
	}
	return 0;
}

void __exit nlexample_exit(void){
	
	netlink_kernel_release(nlsk);
	
}

module_init(nlexample_init);
module_exit(nlexample_exit);

