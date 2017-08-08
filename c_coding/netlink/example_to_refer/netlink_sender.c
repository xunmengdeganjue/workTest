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

#define NETLINK_TEST NETLINK_USERSOCK
#define MAX_PAYLOAD 1024  /* maximum payload size*/

#define SEND_TEST_DATA "Hello Word" 

struct event_msg{  
	unsigned int event;  
	unsigned int sub_event;  
	unsigned int len;  
	unsigned char data[0];  
}; 

int open_netlink(void){
	
	int sock_fd;
	struct sockaddr_nl src_addr;
	
	sock_fd=socket(AF_NETLINK, SOCK_RAW, NETLINK_TEST);
	if(sock_fd < 0){
		printf("socket created failed!\n");
		return sock_fd;
	}
	
	memset(&src_addr, 0, sizeof(src_addr));
	
	src_addr.nl_family = AF_NETLINK;
	src_addr.nl_pid = getpid();  /* self pid */
	/* interested in group 1<<0 */
	//src_addr.nl_groups = 1; //此句必须干掉，否则bind会失败！
	
	if(bind(sock_fd, (struct sockaddr*)&src_addr, sizeof(src_addr)) < 0){
		printf("bind failed!\n");
		return -1;
	}
	
	return sock_fd;
}

int send_infomation( int sock_fd){
	
	/*参考：http://blog.csdn.net/shichaog/article/details/44682613*/
	
	int ret = 0;
	struct nlmsghdr *nlh = NULL;
	struct iovec iov;
	struct msghdr message;
	struct event_msg *msg; 
	struct sockaddr_nl dest_addr;

	msg = NLMSG_DATA(nlh); //消息头的首部存放netlink的头，见图14.1。  
	msg->event = 0;  
	msg->sub_event = 1;  
	msg->len = sizeof(SEND_TEST_DATA);//Hello Word字符串在payload里了，见图14.1。  
	printf("prepare the message!\n");
	strcpy(msg->data, SEND_TEST_DATA);  
	printf("prepare for the header!\n");
	//printf("test %d time; %s\n",i,(msg->sub_event == LOOP_UNICAST) ? "UNICAST" : "BROADCAST");  
	iov.iov_base = (void *)nlh; //这边管理netlink头，也是关联msg，在70行，netlink和msg的关系就确定了。  
	iov.iov_len = nlh->nlmsg_len;  
	message.msg_name = (void *)&dest_addr;  
	message.msg_namelen = sizeof(dest_addr);  
	message.msg_iov = &iov;  
	message.msg_iovlen = 1;  
	
	printf("send message!\n");
	sendmsg(sock_fd, &message, 0); //发送消息给内核  


}

int main(int argc, char* argv[]) 
{

	int nls;
	
	nls = open_netlink();
	if (nls < 0)
		return nls;
	else
		printf("netlink socket opened successuflly!\n");
	//while (1)
	//	read_infomation(nls);
        //printf("Received message payload: %s\n", NLMSG_DATA(nlh));
		
	send_infomation(nls);	
		
	close(nls);         
	
}
