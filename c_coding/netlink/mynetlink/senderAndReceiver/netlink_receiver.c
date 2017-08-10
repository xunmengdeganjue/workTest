#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <asm/types.h>
#include <linux/netlink.h>
#include <linux/socket.h>

//#define NETLINK_TEST NETLINK_USERSOCK
#define MAX_PAYLOAD 1024  /* maximum payload size*/

#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif
#define MYMGRP 1

int open_netlink(void){
	
	int sock_fd;
	struct sockaddr_nl src_addr;
	int group = MYMGRP;
	
	sock_fd=socket(PF_NETLINK, SOCK_RAW, NETLINK_EXAMPLE);
	if(sock_fd < 0){
		printf("socket created failed!\n");
		return sock_fd;
	}
	
	memset(&src_addr, 0, sizeof(src_addr));
	
	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pad = 0;
	src_addr.nl_pid = getpid();  /* self pid */
	/* interested in group 1<<0 */
	//src_addr.nl_groups = MYMGRP; //此句必须干掉，否则bind会失败！
	
	if(bind(sock_fd, (struct sockaddr*)&src_addr, sizeof(src_addr)) < 0){
		printf("bind failed!\n");
		return -1;
	}
	
	/*
	 * 270 is SOL_NETLINK. See
	 * http://lxr.free-electrons.com/source/include/linux/socket.h?v=4.1#L314
	 * and
	 * http://stackoverflow.com/questions/17732044/
	 */
	if (setsockopt(sock_fd, 270, NETLINK_ADD_MEMBERSHIP, &group, sizeof(group)) < 0){
	    printf("setsockopt < 0\n");
	    return -1;
	}
	
	return sock_fd;
}

int read_infomation( int sock_fd){
	
	int ret = 0;
	//struct nlmsghdr *nlh = NULL;
	struct iovec iov;
	struct msghdr msg;
	struct sockaddr_nl dest_addr;
	char buffer[getpagesize()];
	 
	//nlh = (struct nlmsghdr *)malloc(NLMSG_SPACE(MAX_PAYLOAD));
	//memset(nlh, 0, NLMSG_SPACE(MAX_PAYLOAD));
	memset(&msg, 0, sizeof(msg));
	memset(&dest_addr, 0, sizeof(dest_addr));
	
//	iov.iov_base = (void *)nlh;
//	iov.iov_len = NLMSG_SPACE(MAX_PAYLOAD);
    iov.iov_base = (void *) buffer;
    iov.iov_len = sizeof(buffer);
	msg.msg_name = (void *)&dest_addr;
	msg.msg_namelen = sizeof(dest_addr);
	msg.msg_iov = &iov;
	msg.msg_iovlen = 1;

	printf("Waiting for message from kernel\n");

	/* Read message from kernel */
	ret = recvmsg(sock_fd, &msg, 0);
	if(ret <0 ){	
		 printf("ret < 0.\n");
	}else{
		printf("Received message payload:\033[31m[ %s ]\033[0m\n", NLMSG_DATA((struct nlmsghdr *) &buffer));
	}
	
}

int main(int argc, char* argv[]) 
{

	int nls;
	nls = open_netlink();
	if (nls < 0)
		return nls;

	while (1)
		read_infomation(nls);
	close(nls);
}
