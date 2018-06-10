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


#if 0
static void nl_data_ready(struct sk_buff *__skb)
{
    struct sk_buff *skb;
    struct nlmsghdr *nlh = NULL;
	while((skb = skb_get(__skb)) != NULL) {
		nlh = (struct nlmsghdr *)skb->data;
		//nlh = nlmsg_hdr(skb);
		printk("%s: received netlink message payload: %s \n", __FUNCTION__, (char*)NLMSG_DATA(nlh) );
		kfree_skb(skb);
		break;
    }
    printk("recvied finished!\n");
}
#endif


void parse_message(struct sk_buff *__skb, char *message){

	struct sk_buff *skb;
	struct nlmsghdr *nlh = NULL;
	while((skb = skb_get(__skb)) != NULL) {
	   	nlh = (struct nlmsghdr *)skb->data;
	   	//nlh = nlmsg_hdr(skb);
	   	printk("%s: received netlink message payload: %s \n", __FUNCTION__, (char*)NLMSG_DATA(nlh) );
		//strcpy(message, (char*)NLMSG_DATA(nlh));
	   	kfree_skb(skb);
	   	break;
	}
	printk("recvied finished!\n");
}


void send_to_user(struct sk_buff *__skb) 
{
    struct sk_buff *skb = NULL;
    struct nlmsghdr *nlh;
	int ret = 0;
	char *message = "Hello from the kernel!";

	int msg_size = strlen(message) + 1;

	printk("Eneter the send_to_user!\n");

	
	
	/*����һ���µ��׽��ֻ���*/
	skb = nlmsg_new(NLMSG_ALIGN(msg_size + 1), GFP_KERNEL);	
	//skb = nlmsg_new(NLMSG_DEFAULT_SIZE, GFP_KERNEL);
	if(!skb){
		printk("Allocation failure!\n");
	}
	/*��д���ݱ������Ϣ*/
	nlh = nlmsg_put(skb, 0, 1, NLMSG_DONE, msg_size + 1, 0);/*must*/
	
	strcpy(NLMSG_DATA(nlh), message);

	printk("send skb message!\n");

	/*multicast the message to all listening processes*/
	//ret = netlink_broadcast(nl_sk, skb, 0, 1, GFP_KERNEL);
	ret = nlmsg_multicast(nl_sk, skb, 0, MYMGRP, GFP_KERNEL);
	//ret = netlink_unicast(nl_sk, skb, pid, MSG_DONTWAIT);
	if(ret < 0){
		printk("message send error! [%d]\n",ret);
	}else{
		printk("Send successfully! The data is:\033[32m[%s]\033[0m\n", NLMSG_DATA(nlh));
		
	}
}

struct netlink_kernel_cfg cfg = {
    .input = send_to_user,
};

static int __init  testnetlink_init(void)
{

	printk(KERN_INFO "insmod the kernel module netlink_kernel_module.ko !\n");

	nl_sk = netlink_kernel_create(&init_net, NETLINK_EXAMPLE, &cfg);
	
	return 0;
}
static void __exit  testnetlink_exit(void)
{
	printk(KERN_INFO "remove the kernel module netlink_kernel_module.ko !\n");
	netlink_kernel_release(nl_sk);
}

module_init(testnetlink_init);
module_exit(testnetlink_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("nickli");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");


