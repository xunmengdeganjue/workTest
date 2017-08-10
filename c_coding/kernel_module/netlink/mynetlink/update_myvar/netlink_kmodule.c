#include <linux/kernel.h>
#include <linux/module.h>
#include <net/sock.h>
#include <linux/skbuff.h>
#include <linux/netlink.h>
#include <linux/version.h>

//#include <libmnl/libmnl.h>

#include "nlexample.h"

#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

#define NLEX_GRP_MAX 0
#define kernel_module "netlink_kmodule"

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("MY Netlink Test Kernel Module");
MODULE_AUTHOR("Nick.Li");


static struct sock *nlsk;
static const struct nla_policy nlex_policy[ NLE_MAX+1 ] = {
	[ NLE_MYVAR ] = {  .type = NLA_U32  } ,
};
static int myvar;

static int nlex_unicast( int pid )
{
    struct sk_buff  *skb ;
	printk("Trace nlex_unicast enter\n");

    skb = nlmsg_new(NLMSG_DEFAULT_SIZE,GFP_KERNEL ) ;
    if ( skb == NULL)
		return -ENOMEM;

    nlmsg_put( skb , pid , 0 , NLEX_MSG_UPD, 0 , 0 ) ;
	nla_put_u32( skb , NLE_MYVAR, myvar ) ;

    nlmsg_unicast( nlsk , skb , pid );
	printk("Trace nlex_unicast exit\n");
    return 0 ;

nla_put_failure :
    return -1;
 }


static int nlex_notify( int rep , int pid )
{
    struct sk_buff *skb ;
	printk("Trace nlex_notify enter\n");
    skb = nlmsg_new(NLMSG_DEFAULT_SIZE,GFP_KERNEL ) ;
    if ( skb == NULL)
        return -ENOMEM;

    nlmsg_put ( skb , pid , rep , NLEX_MSG_UPD, 0 , 0 ) ;
    nla_put_u32( skb , NLE_MYVAR, myvar ) ;

    nlmsg_notify( nlsk , skb , pid ,
                   NLEX_GRP_MYVAR,
                   rep , GFP_KERNEL ) ;
	printk("Trace nlex_notify  right exit \n");
     return 0 ;

nla_put_failure :
	printk("Trace nlex_notify wrong enter\n");
     return -1;
 }


static int nl_step2 ( struct nl_attr *cda [ ] , struct nlmsghdr *nlh )
{
	int echo = nlh->nlmsg_flags & NLM_F_ECHO;
	int pid = nlh->nlmsg_pid;
	printk("Trace nl_step2 enter\n");

	switch ( nlh->nlmsg_type ){
		case NLEX_MSG_UPD:
			if ( !cda[NLE_MYVAR] )
				return  -EINVAL;

			myvar = nla_get_u32( cda[NLE_MYVAR] );
			nlex_notify( echo,  pid );
			break;
		case NLEX_MSG_GET:
			nlex_unicast( pid );
			break;
	};
	
	printk("Trace nl_step exit\n");
	
	return 0;
}


static int nl_step( struct sk_buff *skb , struct nlmsghdr * nlh )
{
	int err;
	printk("Trace nl_step enter\n");
	struct nlattr * cda[ NLE_MAX+1 ];
	struct nlattr * attr = NLMSG_DATA(nlh);
	int attrlen = nlh->nlmsg_len - NLMSG_SPACE(0);
	
	/*don't use security_netlink_recv any more?*/
	//if( security_netlink_recv( skb , CAP_NET_ADMIN) )
	//if( security_netlink_recv( CAP_NET_ADMIN) )
	//  return -EPERM;

	if( nlh->nlmsg_len < NLMSG_SPACE( 0 ) )
	  return -EINVAL;

	err = nla_parse( cda , NLE_MAX,
				   attr , attrlen , nlex_policy ) ;
	if( err < 0 )
	  return err;

	printk("Trace nl_step exit\n");

	return nl_step2( cda, nlh ) ;
}



static void nl_callback(struct sk_buff *skb, int len){
	
	printk("hello world!\n");
	netlink_rcv_skb( skb , &nl_step ) ;
	
	
}
struct netlink_kernel_cfg cfg = {
    .input = nl_callback,
};

static int __init nlexample_init(void){
	
	printk(KERN_INFO "insmod the kernel module %s\n", kernel_module);

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




