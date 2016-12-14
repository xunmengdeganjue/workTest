/*imp1_u.c*/
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <linux/in.h>
#include "imp1.h"
#include <string.h>


#define UMSG      "a message from userspace\n"
#define UMSG_LEN  sizeof("a message from userspace\n")

char kmsg[64] = {0};

int main(int argc ,char **argv)
{
	int sockfd;
	int len;

	sockfd = socket(AF_INET, SOCK_RAW, IPPROTO_RAW);
	if(sockfd < 0)
	{
	  printf("can not create a socket\n");
	  return -1;
	}

	#if 0
	/*If you want to send message to the kernel so call function data_to_kernel()*/
	setsockopt(sockfd, IPPROTO_IP, IMP1_SET, UMSG, UMSG_LEN);
	#endif

	
	while(1){
		
		len = sizeof(char)*64;
		/*call function data_from_kernel()*/
		getsockopt(sockfd, IPPROTO_IP, IMP1_GET, kmsg, &len);
		if(kmsg[0] != 0){
			printf("kmsg: %s", kmsg);
			memset(kmsg,0x00,sizeof(kmsg));
		}
		sleep(1);	
		
	}	
	
	close(sockfd);
	return 0;

}
