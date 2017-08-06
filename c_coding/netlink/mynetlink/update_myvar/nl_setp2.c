static int myvar;

static int nl_step2 ( struct nl_attr *cda [ ] , struct nlmsghdr *nlh )
{
	int echo = nlh->nlmsg_flags & NLM_F_ECHO;
	int pid = nlh->nlmsg_pid;

	switch ( nlh->nlmsg_type ){
		case NLEX_MSG_UPD:
			if ( ! cda[NLE_MYVAR] )
				return  -EINVAL;

			myvar = nla_get_u32( cda[NLE_MYVAR] );
			nlex_notify( echo,  pid );
			break;
		case NLEX_MSG_GET:
			nlex_unicast( pid );
			break;
	};
	return 0;
}

