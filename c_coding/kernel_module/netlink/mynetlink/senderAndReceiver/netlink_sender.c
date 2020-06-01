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

#define MAX_PAYLOAD 1024  /* maximum payload size*/

#ifndef NETLINK_EXAMPLE
#define NETLINK_EXAMPLE 17
#endif

struct nlmsghdr *nlh = NULL;
struct iovec iov;
struct msghdr message;
struct sockaddr_nl dest_addr;
struct sockaddr_nl src_addr;


#define SEND_TEST_DATA "Hello Word" 

int open_netlink(void){
	
	int sock_fd;
	//struct sockaddr_nl src_addr;
	
	//sock_fd=socket(PF_NETLINK, SOCK_RAW, NETLINK_EXAMPLE);
	sock_fd=socket(AF_NETLINK, SOCK_RAW, NETLINK_EXAMPLE);/*看起来AF_NETLINK和PF_NETLINK都能正常工作*/
	if(sock_fd < 0){
		printf("socket created failed!\n");
		return sock_fd;
	}
	
	memset(&src_addr, 0, sizeof(src_addr));
	
	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pid = getpid();  /* self pid */
	/* interested in group 1<<0 */
	//src_addr.nl_groups = 1; //此句必须干掉，否则bind会失败！
	//src_addr.nl_groups = 0;
	
	if(bind(sock_fd, (struct sockaddr*)&src_addr, sizeof(src_addr)) < 0){
		printf("bind failed!\n");
		return -1;
	}
	printf("The sock_fd = %d\n",sock_fd);
	return sock_fd;
}

int send_infomation( int sock_fd){
	
	/*参考：http://blog.csdn.net/shichaog/article/details/44682613*/
	
	int ret = 0;

	printf("prepare for the header!\n");
	nlh=(struct nlmsghdr *)malloc(NLMSG_SPACE(MAX_PAYLOAD));
	/*fill the netlink message header*/
	nlh->nlmsg_len = NLMSG_SPACE(MAX_PAYLOAD);/*每个netlink消息头后跟零个或多个字节的辅助数据。 
												该4字节字段记录消息中的数据总量，包括报头本身*/
	nlh->nlmsg_pid = getpid(); /*For Linux kernel*/
	nlh->nlmsg_flags = 0;/*这个2字节字段或逻辑或运算位定义了各种控制标志，它们决
                          定了哪些消息被处理和解释*/
	/*Fill in the netlink message payload*/
	strcpy(NLMSG_DATA(nlh),"How are you!\n");
						  
	memset(&dest_addr, 0, sizeof(dest_addr));
	dest_addr.nl_family = AF_NETLINK;	/*必须设置目标地址族*/
	dest_addr.nl_pid = 0;				/*0表示目标针对内核*/
	
	//printf("test %d time; %s\n",i,(msg->sub_event == LOOP_UNICAST) ? "UNICAST" : "BROADCAST");  
	iov.iov_base = (void *)nlh; //这边管理netlink头，也是关联msg，在70行，netlink和msg的关系就确定了。  
	iov.iov_len = nlh->nlmsg_len;  
	message.msg_name = (void *)&dest_addr;  
	message.msg_namelen = sizeof(dest_addr);  
	message.msg_iov = &iov;  
	message.msg_iovlen = 1;  
	
	printf("send message!\n");
	ret = sendmsg(sock_fd, &message, 0); //发送消息给内核  
	if(ret < 0){
		printf("Message send failed [ret=%d]\n",ret);
	}else{
		printf("Message send successfully!\n");
	}

}



int main(int argc, char* argv[]) 
{

	int nls;
	
	nls = open_netlink();
	if (nls < 0)
		return nls;
	else
		printf("netlink socket opened successuflly[nls = %d]!\n",nls);
		
	send_infomation(nls);	
		
	close(nls);         
	
}
