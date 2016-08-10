#include <stdio.h>
#include <stdlib.h>
#include <string.h>   		/*for memset*/
#include <sys/socket.h>		/* basic socket definitions */
#include <netinet/in.h>	/* sockaddr_in{} and other Internet defns */

#define MAXLINE 1024
#define	SA	struct sockaddr

#ifndef	HAVE_BZERO
#define	bzero(ptr,n)		memset(ptr, 0, n)
/* $$.If bzero$$ */
/* $$.If memset$$ */
#endif
#define PORT 8245 	/*noip server port*/
#define HOST_IP "8.23.224.120"

int main(int argc,char **argv){
	int sockfd,n;
	char recvline[MAXLINE + 1];
	struct sockaddr_in servaddr;
	

	if((sockfd = socket(AF_INET,SOCK_STREAM,0)) < 0)
		//if((sockfd = socket(9999,SOCK_STREAM,0)) < 0)
		printf("socket error");


	bzero(&servaddr,sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_port   = htons(PORT); 
	
	if(inet_pton(AF_INET,HOST_IP,&servaddr.sin_addr) <= 0)
		printf("inet_pton error for %s", HOST_IP);

	if(connect(sockfd,(SA *)&servaddr,sizeof(servaddr)) < 0){
		printf("connect error\n");
		exit(1);
	}else{
		printf("Connect successfully!\n");	
	}
	/*send the requirement to the server*/
	
	snprintf(buff,sizeof(buff),"%.24s\r\n",ctime(&ticks));
	Writen(connfd,buff,strlen(buff));
	
	
	while((n = read(sockfd,recvline,MAXLINE)) > 0){
     
		recvline[n] = 0; /*null terminate*/
        
		if(fputs(recvline,stdout) == EOF)
			printf("fputs error");
	}
    
	if(n < 0){
     
		printf("read error \n");
        
	}

	exit(0);

	
}

