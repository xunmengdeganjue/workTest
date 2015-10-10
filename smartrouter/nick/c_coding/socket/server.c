#include<stdio.h>
#include <sys/socket.h>
//#include <sys/types.h> 
#include <string.h> //for strlen()
#include <netinet/in.h>


#define SERVER_PORT 6666

int main(int argc ,char **argv)
{
	int server_socketfd;//服务器端套接字 
	int client_socketfd;//客户端套接字
	struct sockaddr_in server_addr;//服务器网络地址结构体 
	struct sockaddr_in client_add;//客户端网络地址结构体  
	int addr_len = sizeof(server_addr);
	int client_len = 0;
	int mesge_len = 0;
	
	/*创建服务器端套接字--IPv4协议，面向连接通信，UDP协议*/  
	server_socketfd = socket(PF_INET, SOCK_STREAM, 0);  
	if(server_socketfd < 0)  
	{  
	  printf("socket error\n");  
	  return -1;  
	}
	//socket配置
	bzero(&server_addr, sizeof(server_addr)); 
	server_addr.sin_family = AF_INET;  
	server_addr.sin_port = htons(SERVER_PORT);  
	server_addr.sin_addr.s_addr = INADDR_ANY;
	
	
	//将服务器端套接字绑定到服务器IP上
	if(bind(server_socketfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) != 0)  
	{  
	  printf("bind error\n");  
	  return -1;  
	}  
	/*监听服务器套接字,监听队列长度为5*/
	if(listen(server_socketfd, 5) < 0)  
	{  
	  printf("listen error\n");  
	  return -1;  
	}
	
	char message[1024]={"hello how are you?"};
	int mesge_send_len = strlen(message);
	client_len = sizeof(struct sockaddr_in);
	
	/*等待客户端连接请求到达*/ 
	client_socketfd = accept(server_socketfd,(struct sockaddr *)&client_add,&client_len);
	int send_len=0;
	send_len=send(client_socketfd,message,mesge_send_len,0);//发送信息
	printf("send lenght is:%d\n",send_len); //if the send_len is equal to the mesge_send_len,means the sending is successfully.
	
	while(1)
	{	
		//message[1024}={0};
		int recv_len = 0;
		recv_len=recv(client_socketfd,message,sizeof(message),0);
		//message[recv_len]='\0';
		printf("\nthe client say:\n%s\n\n",message);		
		//message[1024}={0};
		//bzero(message, sizeof(message));
		memset(message,0,sizeof(message));
		printf("you say:\n");
		//scanf("%s\n",message);
		//scanf("%[^\n]",message);
		fgets(message,sizeof(message),stdin);
		//printf("yu want to say:%s\n",message);
		//printf("length of the mesge_send_len is:%d\n",(int)strlen(message));
		//printf("content of the message is:%s\n",message);
		send_len=send(client_socketfd,message,strlen(message),0);//发送信息
		//printf("send lenght is:%d\n",send_len); //if the send_len is equal to the mesge_send_len,means the sending is successfully.
		memset(message,0,sizeof(message));
	}
	close(server_socketfd);

	return 0;
	
}
