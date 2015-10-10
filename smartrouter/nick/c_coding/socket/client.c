#include<stdio.h>
#include <sys/socket.h>
#include <sys/types.h> 
#include <string.h> //for strlen()
#include <netinet/in.h>


#define SERVER_PORT 6666

int main(int argc ,char **argv)
{
	int client_socketfd; //客户端套接字 
	struct sockaddr_in addr; //服务器端网络地址结构体
	int addr_len = sizeof(addr); //目标服务器socket地址数据长度
	int mesge_len = 0; //接收消息的总长度
	char msg_buffer[1024]={0}; //用来接收消息
	
	/*创建客户端套接字--IPv4协议，面向连接通信，TCP协议*/  
	client_socketfd = socket(AF_INET, SOCK_STREAM, 0);  
	if(client_socketfd < 0)  
	{  
	  printf("socket error\n");
	  return -1;  
	}
 	/*配置socket*/
	bzero(&addr, sizeof(addr)); 
	addr.sin_family = AF_INET;  //设置成IP通信
	addr.sin_port = htons(SERVER_PORT);  //设置服务器端口号
	addr.sin_addr.s_addr = INADDR_ANY;  //设置服务器IP，INADDR_ANY表示使用本地IP地址，系统会自动填充本地IP地址；
										//也可以这样设置目标服务器IP地址 addr.sin_addr.s_addr = inet_addr("127.0.0.1");

	//将客户端套接字绑定到服务器IP上去
	if(connect(client_socketfd, (struct sockaddr*)&addr, sizeof(addr)) == -1)  
	{  
	  printf("bind error\n");  
	  return -1;  
	} 
	while(1)
	{
		int send_len = 0;
		printf("you say:\n");
		//scanf("%s",msg_buffer);
		//scanf("%[^\n]",msg_buffer);//这种方法会导致莫名的问题，没有正确获取键盘输入就跳过了
		fgets(msg_buffer,sizeof(msg_buffer),stdin);//这种方法获取带有空格的字串比较可靠
		send_len = send(client_socketfd,msg_buffer,sizeof(msg_buffer),0);	
		sleep(1);
		
		memset(msg_buffer,0,sizeof(msg_buffer));
		
		//接收来自服务器的消息
		if((mesge_len = recv(client_socketfd,msg_buffer,sizeof(msg_buffer),0))<0)//注意sizeof(msg_buffer),而非strlen(msg_buffer)
		{
			printf("receive error!\n");
			return -1;
		}
		else
		{
			printf("received data length is:%d\n",mesge_len);
			msg_buffer[mesge_len]= '\0';
			printf("The server say:%s\n\n",msg_buffer);	
		}
		memset(msg_buffer,0,sizeof(msg_buffer));
		
	}
	close(client_socketfd);
			
	

	return 0;
	
}

