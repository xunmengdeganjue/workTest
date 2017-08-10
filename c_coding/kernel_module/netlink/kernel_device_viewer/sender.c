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

#define NETLINK_GENERIC 18
#define MAX_PAYLOAD 1024

struct sockaddr_nl src_addr, dst_addr;
struct nlmsghdr *nlh = NULL;
struct msghdr msg;
struct iovec iov;
int sock_fd;

int main(int argc, char **argv)
{
    int i = 0;
    if(argc < 2)
       {
        printf("usage: %s <all>/<nic name>\n", argv[0]);
        exit(0);
    }
    
	sock_fd = socket(PF_NETLINK, SOCK_RAW, NETLINK_GENERIC);
	memset(&dst_addr, 0, sizeof(dst_addr));
	dst_addr.nl_family = AF_NETLINK;
	dst_addr.nl_pid = 0;
	dst_addr.nl_groups = 0; // no multicast

	nlh = (struct nlhmsghdr *)malloc(NLMSG_SPACE(MAX_PAYLOAD));

	for(i = 1; i < argc; i++)
    {
        memset(nlh, 0, NLMSG_SPACE(MAX_PAYLOAD));
		nlh->nlmsg_len = NLMSG_SPACE(MAX_PAYLOAD);
		nlh->nlmsg_pid = getpid();
		nlh->nlmsg_flags = 0;
		strcpy( NLMSG_DATA(nlh), argv[i] );
		iov.iov_base = (void *)nlh;
		iov.iov_len = nlh->nlmsg_len;
		msg.msg_name = (void *)&dst_addr;
		msg.msg_namelen = sizeof(dst_addr);
		msg.msg_iov = &iov;
		msg.msg_iovlen = 1;
		sendmsg(sock_fd, &msg, 0);
		memset(nlh, 0, NLMSG_SPACE(MAX_PAYLOAD));
		recvmsg(sock_fd, &msg, 0);
		printf("Received message:\n%s\n", NLMSG_DATA(nlh));
        usleep(1000);
	}
    close(sock_fd);
	return (1);
}