#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/types.h>
#include <linux/sched.h>
#include <net/sock.h>
#include <linux/netlink.h>

#define MAX_PAYLOAD 1024
#define NETLINK_TEST 17

struct sock *nl_sk = NULL;

void nl_data_ready (struct sock *sk, int len)
{
       // wake_up_interruptible(sk->sk_sleep);
	struct sk_buff *skb; 
	struct nlmsghdr *nlh = NULL; 
	u8 *data = NULL; 
	while ((skb = skb_dequeue(&sk->sk_receive_queue)) != NULL) { 
		/* process netlink message pointed by skb->data */ 
		nlh = (struct nlmsghdr *)skb->data; 
		data = NLMSG_DATA(nlh); /* process netlink message with header pointed by * nlh and data pointed by data */ 
	} 
			
}

void test_netlink(void) 
{
        struct sk_buff *skb = NULL;
        struct nlmsghdr *nlh;
        
        nl_sk = netlink_kernel_create(NETLINK_TEST, nl_data_ready);
        skb = alloc_skb(NLMSG_SPACE(MAX_PAYLOAD),GFP_KERNEL);
        nlh = (struct nlmsghdr *)skb->data;
        nlh->nlmsg_len = NLMSG_SPACE(MAX_PAYLOAD);
        nlh->nlmsg_pid = 0;  /* from kernel */
        nlh->nlmsg_flags = 0;
        nlh = (struct nlmsghdr *) skb_put(skb, NLMSG_SPACE(MAX_PAYLOAD));
        strcpy(NLMSG_DATA(nlh), "Greeting from kernel!");
        /* sender is in group 1<<0 */
        NETLINK_CB(skb).groups = 1;
        NETLINK_CB(skb).pid = 0;  /* from kernel */
        NETLINK_CB(skb).dst_pid = 0;  /* multicast */
        /* to mcast group 1<<0 */
        NETLINK_CB(skb).dst_groups = 1;
        /*multicast the message to all listening processes*/
        netlink_broadcast(nl_sk, skb, 0, 1, GFP_KERNEL);
        //printk("%s\n", NLMSG_DATA(nlh));

        sock_release(nl_sk->sk_socket);         
}

int init_module()
{
        test_netlink();
        return 0;
}
void cleanup_module( )
{
        
}




MODULE_LICENSE("GPL");
MODULE_AUTHOR("nickli");