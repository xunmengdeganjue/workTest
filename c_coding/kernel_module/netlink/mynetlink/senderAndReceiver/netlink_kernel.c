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

#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

struct sock *nl_sk = NULL;
#define MYMGRP 1
enum {
	UNICAST,
	BROADCAST,
	MULTICAST
};

/*
@name:parse_message
@parm:
	__skb:The socket buffer.
@description:
	parse the message received from the user space.
*/
void parse_message(struct sk_buff *__skb){

	struct sk_buff *skb;
	struct nlmsghdr *nlh = NULL;
	char string[128] = {0};
	
	while((skb = skb_get(__skb)) != NULL) {/*skb_get对套接字缓冲区再引用一次，返回指向缓冲区的指针*/
	   	nlh = (struct nlmsghdr *)skb->data;
		printk("%s: received netlink message payload: %s \n", __FUNCTION__, (char*)NLMSG_DATA(nlh) );

		/*Following code is the other way deal with the data.*/
		//nlh = nlmsg_hdr(skb);
		//memcpy(string, NLMSG_DATA(nlh), sizeof(string));
	   	//printk("%s:received netlink message payload: %s\n", __FUNCTION__, string);
		
	   	kfree_skb(skb); /*删除对一个缓冲区的引用*/
	   	break;
	}
	printk("recvied finished!\n");
}

int nl_msg_send(char *message, int send_type){
	struct sk_buff *skb = NULL;
    struct nlmsghdr *nlh;
	int ret = 0;
	int pid = 0;
	int msg_size = strlen(message);
	
	/*开辟一个新的套接字缓存*/
	skb = nlmsg_new(NLMSG_ALIGN(msg_size), GFP_KERNEL); 
	//skb = nlmsg_new(NLMSG_DEFAULT_SIZE, GFP_KERNEL);
	if(!skb){
		printk("Allocation failure!\n");
	}
	/*填写数据报相关信息*/
	nlh = nlmsg_put(skb, 0, 1, NLMSG_DONE, msg_size + 1, 0);/*must*/
	
	strcpy(NLMSG_DATA(nlh), message);

	printk("send skb message!\n");
	switch(send_type){
	case UNICAST:
		printk("send data by unicast!\n");
		ret = netlink_unicast(nl_sk, skb, pid, MSG_DONTWAIT);
		break;
	case BROADCAST:
		printk("send data by broadcast!\n");
		ret = netlink_broadcast(nl_sk, skb, 0, 1, GFP_KERNEL);
		break;
	case MULTICAST:
	default:
		printk("send data by multicast!\n");
		ret = nlmsg_multicast(nl_sk, skb, 0, MYMGRP, GFP_KERNEL);
		break;
	}
	
	if(ret < 0){
		printk("message send error! [%d]\n",ret);
	}else{
		printk("Send successfully! The data is:[%s]\n", NLMSG_DATA(nlh));
	}
	return ret;

}

void data_operation(struct sk_buff *__skb) 
{

	char *message = "Hello from the kernel!";
	printk("Eneter the %s!\n",__FUNCTION__);

	/*parse the data that comes from the user-space*/
	parse_message(__skb);
	/*send the data from the kernel space to the user-space*/
	nl_msg_send(message,MULTICAST);
	
}

struct netlink_kernel_cfg cfg = {
    .input = data_operation,
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
	nl_sk = NULL;
}

module_init(testnetlink_init);
module_exit(testnetlink_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("nickli");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");

void send_data_to_user(char *msg,int len){

	if(msg != NULL && len != 0){
		nl_msg_send(msg,BROADCAST);
	}

}
EXPORT_SYMBOL(send_data_to_user);



