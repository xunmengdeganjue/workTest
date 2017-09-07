//net_link.c by duanjigang
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/config.h>
#include <linux/types.h>
#include <linux/if.h>
#include <linux/timer.h>
#include <linux/netdevice.h>
#include <linux/inetdevice.h>
#include <linux/if_arp.h>
#include <linux/sched.h>
#include <net/sock.h>
#include <linux/netlink.h>

#define NETLINK_GENERIC 18
#define BUF_SIZE 1024
static struct sock *netlink_exam_sock;
static unsigned char szBuff[BUF_SIZE];
static int exit_flag = 0;
static DECLARE_COMPLETION(exit_completion);
static void get_dev_info(int type, const char* name);
static void recv_handler(struct sock * sk, int length)
{
    wake_up(sk->sk_sleep);
}

static int process_message_thread(void * pData)
{
    struct sk_buff * skb = NULL;
    struct nlmsghdr * nlhdr = NULL;
    int len;
    char data[1024] = {0};
    DEFINE_WAIT(wait);
    
    daemonize("cme_netlink");
    
    while (exit_flag == 0) 
    {
        prepare_to_wait(netlink_exam_sock->sk_sleep, &wait, TASK_INTERRUPTIBLE);
        schedule();
        finish_wait(netlink_exam_sock->sk_sleep, &wait); 
        
        while ((skb = skb_dequeue(&netlink_exam_sock->sk_receive_queue)) != NULL) 
        {
            u32 pid;
            nlhdr = (struct nlmsghdr *)skb->data;
            if (nlhdr->nlmsg_len < sizeof(struct nlmsghdr)) 
            {
                printk("Corrupt netlink message.\n");
                continue;
            }
            
            len = nlhdr->nlmsg_len - NLMSG_LENGTH(0);
            
            if (len > 1024) 
            {
                printk("netlink buffer is overflow.\n");
                memcpy(data, NLMSG_DATA(nlhdr), 1024);
            }
            else 
            {
                memcpy(data, NLMSG_DATA(nlhdr), len);
            }
            printk(data);    
            if(strncmp(data, "all", 3) == 0)
            {
                get_dev_info(0, NULL);
            }
            else
            {
                get_dev_info(1, data);
            }
            pid = nlhdr->nlmsg_pid;
            nlhdr->nlmsg_pid = 0;
            nlhdr->nlmsg_flags = 0;
            NETLINK_CB(skb).pid = 0;
            NETLINK_CB(skb).dst_pid = pid;
            NETLINK_CB(skb).dst_groups = 0;
            memset(nlhdr, 0, NLMSG_SPACE(nlhdr->nlmsg_len));
            strcpy(NLMSG_DATA(nlhdr), szBuff);
            netlink_unicast(netlink_exam_sock, skb, pid, MSG_DONTWAIT);
        }
    }
    complete(&exit_completion);
    return 0;
}

static void get_dev_info(int ntype, const char* name)
{
    int n = 1;
    struct net_device * dev = dev_base;
    struct net_device_stats * stats = NULL;
    char type[32];
    struct in_device *ind = NULL;
    struct in_ifaddr *ina = NULL;
    memset(szBuff, 0, 1024);
    read_lock(&dev_base_lock);
    while (dev) 
    {
        char szdata[1024] ={0};
        if (dev->type == ARPHRD_ETHER)
        {
            sprintf(type, "Ethernet");
        }
        else if (dev->type == ARPHRD_LOOPBACK)
        {
            sprintf(type, "Local Loopback");
        }
        else
        {
            sprintf(type, "%d", dev->type);
        }
        stats = dev->get_stats(dev);
        sprintf(szdata, "%s\t", dev->name);
        //printk("%s\n", dev->name);

        if(ntype != 0)
        {
            if(strncmp(dev->name, name, strlen(name)) != 0)
            {
                dev = dev->next;
                continue;
            }
        }else
        {
            memcpy(szBuff + strlen(szBuff), szdata, strlen(szdata));
            dev = dev->next;
            continue;    
        }
        sprintf(szdata + strlen(szdata), "Link encap:%s  ", type);
        sprintf(szdata + strlen(szdata), "HWaddr %2.2X:%2.2X:%2.2X:%2.2X:%2.2X:%2.2X\n",
            dev->dev_addr[0], dev->dev_addr[1],
            dev->dev_addr[2], dev->dev_addr[3],
            dev->dev_addr[4], dev->dev_addr[5]);
        ind = in_dev_get(dev);
        if (ind) 
        {
            ina = (struct in_ifaddr *)ind->ifa_list;
            if (ina) 
            {
                sprintf(szdata + strlen(szdata), 
                "\tinet addr:%u.%u.%u.%u Bcast:%u.%u.%u.%u Mask:%u.%u.%u.%u\n",
                    NIPQUAD(ina->ifa_address),
                    NIPQUAD(ina->ifa_broadcast),
                    NIPQUAD(ina->ifa_mask));
            }
        }
        sprintf(szdata + strlen(szdata), "\t");
        if (dev->flags & IFF_UP) sprintf(szdata + strlen(szdata), "UP ");
        if (dev->flags & IFF_BROADCAST) sprintf(szdata + strlen(szdata), "BROADCAST ");
        if (dev->flags & IFF_RUNNING) sprintf(szdata + strlen(szdata), "RUNNING ");
        if (dev->flags & IFF_LOOPBACK) sprintf(szdata + strlen(szdata), "LOOPBACK ");
        if (dev->flags & IFF_MULTICAST) sprintf(szdata + strlen(szdata), "MULTICAST ");
        sprintf(szdata + strlen(szdata), "MTU:%d\n", dev->mtu);
        sprintf(szdata + strlen(szdata), "\t");
        sprintf(szdata + strlen(szdata), 
        "RX packets:%lu errors:%lu dropped:%lu overruns:%lu frame:%lu\n",
            stats->rx_packets, stats->rx_errors, stats->rx_dropped, 
            stats->rx_over_errors, stats->rx_frame_errors);
        sprintf(szdata + strlen(szdata), "\t");
        sprintf(szdata + strlen(szdata), 
        "TX packets:%lu errors:%lu dropped:%lu overruns:%lu carrier:%lu\n",
            stats->tx_packets, stats->tx_errors, stats->tx_dropped, 
            stats->tx_aborted_errors, stats->tx_carrier_errors);
        sprintf(szdata + strlen(szdata), "\t");
        sprintf(szdata + strlen(szdata), "RX Bytes:%lu  TX Bytes:%lu\n", stats->rx_bytes, stats->tx_bytes);
        sprintf(szdata + strlen(szdata), "\t");
        sprintf(szdata + strlen(szdata), "Interrupt:%d Base address:0x%lx\n", dev->irq, dev->base_addr);
        sprintf(szdata + strlen(szdata), "\n");
        n++;
        dev = dev->next;
        //printk("%d: %s\n", n, szdata);

        memcpy(szBuff + strlen(szBuff), szdata, strlen(szdata));
    }
    read_unlock(&dev_base_lock);
    //printk("\n==\n%d:%s==\n",n, szBuff);

}

int init_module()
{
    netlink_exam_sock = netlink_kernel_create(NETLINK_GENERIC, recv_handler);
    if (!netlink_exam_sock) 
    {
        printk("Fail to create netlink socket.\n");
        return 1;
    }
    kernel_thread(process_message_thread, NULL, CLONE_KERNEL);
    return 0;
}
void cleanup_module( )
{
    exit_flag = 1;
    wake_up(netlink_exam_sock->sk_sleep);
    wait_for_completion(&exit_completion);
    sock_release(netlink_exam_sock->sk_socket);
}

MODULE_LICENSE("GPL");   
MODULE_AUTHOR("duanjigang");  