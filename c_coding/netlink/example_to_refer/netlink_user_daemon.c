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

#define NETLINK_TEST 17
#define MAX_PAYLOAD 1024  /* maximum payload size*/


int open_netlink(void){
	
	int sock_fd;
	struct sockaddr_nl src_addr;
	
	sock_fd=socket(PF_NETLINK, SOCK_RAW, NETLINK_TEST);
	memset(&src_addr, 0, sizeof(src_addr));
	

	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pid = getpid();  /* self pid */
	/* interested in group 1<<0 */
	src_addr.nl_groups = 1;
	bind(sock_fd, (struct sockaddr*)&src_addr, sizeof(src_addr));
	
	return sock_fd;
}

int read_infomation( int sock_fd){
	
	int ret = 0;
	struct nlmsghdr *nlh = NULL;
	struct iovec iov;
	struct msghdr msg;
	struct sockaddr_nl dest_addr;
	
	nlh = (struct nlmsghdr *)malloc(NLMSG_SPACE(MAX_PAYLOAD));
	memset(nlh, 0, NLMSG_SPACE(MAX_PAYLOAD));
	memset(&msg, 0, sizeof(msg));
	memset(&dest_addr, 0, sizeof(dest_addr));
	
	iov.iov_base = (void *)nlh;
	iov.iov_len = NLMSG_SPACE(MAX_PAYLOAD);
	msg.msg_name = (void *)&dest_addr;
	msg.msg_namelen = sizeof(dest_addr);
	msg.msg_iov = &iov;
	msg.msg_iovlen = 1;

	printf("Waiting for message from kernel\n");

	/* Read message from kernel */
	ret = recvmsg(sock_fd, &msg, 0);
	if(ret <0 ){	
		 printf("ret < 0.\n");
	}
	 printf("Received message payload: %s\n", NLMSG_DATA((struct nlmsghdr *) &nlh));
}

int main(int argc, char* argv[]) 
{

	int nls;
	nls = open_netlink();
	if (nls < 0)
		return nls;

	while (1)
		read_infomation(nls);
        //printf("Received message payload: %s\n", NLMSG_DATA(nlh));
	close(nls);         
	
}
