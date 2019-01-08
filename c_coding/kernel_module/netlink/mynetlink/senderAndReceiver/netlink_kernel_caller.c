/*
	Refference:
	https://stackoverflow.com/questions/22691305/multicast-from-kernel-to-user-
space-via-netlink-in-c
	For Kernel send to user space:
	http://www.linuxjournal.com/node/7356/print
	
*/

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <net/sock.h>
#include <linux/netlink.h>
#include <linux/skbuff.h>

//#include <linux/init.h>
//#include <linux/ip.h>


#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

struct sock *nl_sk = NULL;
#define MYMGRP 1

/*
@name:parse_message
@parm:
	__skb:The socket buffer.
@description:
	parse the message received from the user space.
*/

extern void send_data_to_user(char *msg,int len);

static int __init  testnetlink_init(void)
{

	printk(KERN_INFO "insmod the kernel module netlink_kernel_module.ko !\n");
	char buffer[128] = {0};
	snprintf(buffer,sizeof(buffer),"%s","I'm call the sender to send data to user space!");
	//nl_sk = netlink_kernel_create(&init_net, NETLINK_EXAMPLE, &cfg);
	send_data_to_user(buffer,strlen(buffer));
	return 0;
}
static void __exit  testnetlink_exit(void)
{
	printk(KERN_INFO "remove the kernel module netlink_kernel_module.ko !\n");
	

}

module_init(testnetlink_init);
module_exit(testnetlink_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("nickli");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");



