/*lib-acs.c*/
#ifndef __KERNEL__
#define __KERNEL__
#endif

#ifndef MODULE
#define MODULE
#endif

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/string.h>
#include <linux/netfilter_ipv4.h>
#include <linux/init.h>
#include <asm/uaccess.h>
#include "imp1.h"

#define KMSG      "a message from kernel\n"
#define KMSG_LEN  sizeof("a message from kernel\n")

char KERNEL_GOT[128] = {0};
int  KERNEL_GOT_LENTH = 0;


int send_data_to_user( char *data,int len){
		
	if((data != NULL) && (len != 0)){
		KERNEL_GOT_LENTH=len;
		strncpy(KERNEL_GOT,data,KERNEL_GOT_LENTH);
	}
	return 0;
}

EXPORT_SYMBOL(send_data_to_user);


static int data_to_kernel(struct sock *sk, int cmd, void *user,
			  unsigned int len)
{
	switch(cmd)
	{
		case IMP1_SET:
		{
			char umsg[64];
			memset(umsg, 0, sizeof(char)*64);
			copy_from_user(umsg, user, sizeof(char)*64);
			printk("umsg: %s", umsg);
		}
		break;
	}
  return 0;
}

static int data_from_kernel(struct sock *sk, int cmd, void *user, char *data, int len)
{
  switch(cmd)
    {
    case IMP1_GET:
      {
        //copy_to_user(user, KMSG, KMSG_LEN);
		copy_to_user(user, KERNEL_GOT, KERNEL_GOT_LENTH);
      }
      break;
    }
  return 0;
}

static struct nf_sockopt_ops imp1_sockops =
{
  .pf = PF_INET,
  .set_optmin = IMP1_SET,
  .set_optmax = IMP1_MAX,
  .set = data_to_kernel,
  .get_optmin = IMP1_GET,
  .get_optmax = IMP1_MAX,
  .get = data_from_kernel,
};

static int __init init(void)
{
  return nf_register_sockopt(&imp1_sockops);
}

static void __exit fini(void)
{
  nf_unregister_sockopt(&imp1_sockops);
}

module_init(init);
module_exit(fini);
