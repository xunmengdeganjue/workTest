#include <linux/kernel.h>
#include <linux/module.h>
#include <net/sock.h>
#include <linux/skbuff.h>
#include <linux/netlink.h>
#include <linux/version.h>

#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

#define NLEX_GRP_MAX 0
#define kernel_module "netlink_helloworld"

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");
MODULE_AUTHOR("Nick.Li");


static struct sock *nlsk;

static void nl_callback(struct sk_buff *skb,int len){
	
	printk(KERN_INFO "hello world!\n");
	
}
struct netlink_kernel_cfg cfg = {
    .input = nl_callback,
};

static int __init nlexample_init(void){
	
	printk(KERN_INFO "insmod the kernel module %s\n", kernel_module);

	//printk("insmod the kernel module !\n");
	nlsk = netlink_kernel_create(&init_net, NETLINK_EXAMPLE, &cfg); /*different linux kernel has different prototype*/
	if(nlsk == NULL){
		printk(KERN_ERR"Can't create netlink\n");
		return -ENOMEM;
	}
	return 0;
}

void __exit nlexample_exit(void){
	
	printk(KERN_INFO "remove the kernel module netlink_hello_kernel_module.ko !\n");
	netlink_kernel_release(nlsk);
	
}

module_init(nlexample_init);
module_exit(nlexample_exit);




