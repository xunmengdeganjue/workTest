static const struct nla_policy nlex_policy[ NLE_MAX+1 ] = {
	[ NLE_MYVAR ] = {  .type = NLA_U32  } ,
};

static int nl_step( struct sk_buff *skb , struct nlmsghdr * nlh )
{
	int err;
	struct nlattr * cda [ NLE MAX+1 ];
	struct nlattr * attr = NLMSG_DATA( nlh ) ;
	int attrlen = nlh->nlmsg_len – NLMSG_SPACE ( 0 ) ;

	if( security_netlink_recv( skb , CAP_NET_ADMIN) )
	  return -EPERM;

	if( nlh->nlmsg_len < NLMSG_SPACE( 0 ) )
	  return -EINVAL;

	err = nla_parse( cda , NLE_MAX,
				   attr , attrlen , nlex_policy ) ;
	if( err < 0 )
	  return err;

	return nl_step2( cda ) ;
}

static void nl_callback( struct sk_buff * skb )
{
	netlink_rcv_skb( skb , &nl_step ) ;
}
