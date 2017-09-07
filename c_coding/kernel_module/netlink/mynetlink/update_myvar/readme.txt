

netlink_kernel_create
原形：
vim /usr/src/linux-headers-3.13.0-71-generic/include/linux/netlink.h  57行
static inline struct sock *
netlink_kernel_create(struct net *net, int unit, struct netlink_kernel_cfg *cfg)
{
        return __netlink_kernel_create(net, unit, THIS_MODULE, cfg);
}

2017-08-01

