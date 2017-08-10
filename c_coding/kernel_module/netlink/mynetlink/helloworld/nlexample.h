#ifndef _NLEXAMPLE_H_
#define _NLEXAMPLE_H_

#include<linux/netlink.h>


#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

enum nlexample_msg_types{
    NLEX_MSG_BASE = NLMSG_MIN_TYPE,
    NLEX_MSG_UPD = NLEX_MSG_BASE,
    NLEX_MSG_GET,
    NLEX_MSG_MAX
};

enum nlexample_attr{
    NLE_UNSPEC,
    NLE_MYVAR,
    /*add your new attributes here */
    __NLE_MAX,
};

#define NLE_MAX  ( NLE_MAX - 1 )

#define NLEX_GRP_MYVAR  (1 << 0 )

#endif

