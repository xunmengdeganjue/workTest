#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <net/sock.h>

#include <linux/netlink.h>
//#include <net/netlink.h>

//#include <net/net_namespace.h>



#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

#define MAX_PAYLOAD 1024
//#define NETLINK_TEST NETLINK_USERSOCK

struct sock *nl_sk = NULL;

void nl_data_ready(struct sock *sk, int len)
{
    // wake_up_interruptible(sk->sk_sleep);
    printk("prepare for the message send to the user space!\n");
	struct sk_buff *skb; 
	struct nlmsghdr *nlh = NULL; 
	u8 *data = NULL; 
	while ((skb = skb_dequeue(&sk->sk_receive_queue)) != NULL) { 
		/* process netlink message pointed by skb->data */ 
		nlh = (struct nlmsghdr *)skb->data; 
		data = NLMSG_DATA(nlh); /* process netlink message with header pointed by * nlh and data pointed by data */ 
	} 
			
}

void send_to_user(struct sk_buff *skb_recv) 
{
    struct sk_buff *skb = NULL;
    struct nlmsghdr *nlh;
	int ret = 0;

	printk("Eneter the send_to_user!\n");
	
	skb = alloc_skb(NLMSG_SPACE(MAX_PAYLOAD),GFP_KERNEL);
	
	nlh = (struct nlmsghdr *)skb->data;
	nlh->nlmsg_len = NLMSG_SPACE(MAX_PAYLOAD);
	nlh->nlmsg_pid = 0;  /* from kernel */
	nlh->nlmsg_flags = 0;
	nlh = (struct nlmsghdr *) skb_put(skb, NLMSG_SPACE(MAX_PAYLOAD));
	strcpy(NLMSG_DATA(nlh), "Greeting from kernel!");

	NETLINK_CB(skb).portid = 0;
	NETLINK_CB(skb).dst_group = 0;
	
	/*multicast the message to all listening processes*/
	ret = netlink_broadcast(nl_sk, skb, 0, 1, GFP_KERNEL);
	//ret = nlmsg_multicast(nl_sk, skb, 0, 1, GFP_KERNEL);
	if(ret < 0){
		printk("message send error! [%d]\n",ret);
	}
	printk("The data is:[%s]\n", NLMSG_DATA(nlh));
	
	sock_release(nl_sk->sk_socket);  	
	
}

struct netlink_kernel_cfg cfg = {
    .input = send_to_user,
};

static int __init testnetlink_init(void)
{

	printk(KERN_INFO "insmod the kernel module netlink_kernel_module.ko !\n");

	nl_sk = netlink_kernel_create(&init_net, NETLINK_EXAMPLE, &cfg);

	
	//printk("released the nl_sk!\n");
	
	return 0;
}
static void __exit testnetlink_exit(void)
{
	printk(KERN_INFO "remove the kernel module netlink_kernel_module.ko !\n");
	netlink_kernel_release(nl_sk);
}

module_init(testnetlink_init);
module_exit(testnetlink_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("nickli");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");



