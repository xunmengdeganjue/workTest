#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <unistd.h>


#define BSIZE 1024

#define CALL_A 			"A"
#define CALL_A_PART 	"A:part"
#define CALL_B 			"B"
#define CALL_B_PART 	"B:part"
#define CALL_C 			"C"
#define CALL_C_PART 	"C:part"
#define CALL_D 			"D"
#define CALL_D_PART 	"D:part"
#define CALL_SIZE 32

static int new_socket_server(int port)
{
int sd; 
struct sockaddr_in addr;
int addr_len = sizeof(addr);
	
//创建socket连接  
  sd = socket(PF_INET, SOCK_STREAM, 0);  
  if(sd < 0)  
  {  
      printf("socket error\n");  
      return -1;  
  }

  bzero(&addr, sizeof(addr)); 
  addr.sin_family = AF_INET;  
  addr.sin_port = htons(port);  
  addr.sin_addr.s_addr = INADDR_ANY;

 //正常bind  
  if(bind(sd, (struct sockaddr*)&addr, sizeof(addr)) != 0)  
  {  
      printf("bind error\n");  
      return -1;  
  }  
//正常listen  
  if(listen(sd, SOMAXCONN) < 0)  
  {  
      printf("listen error\n");  
      return -1;  
  }  
	
return sd;
}

static int new_socket_client(int port)
{
int sd; 
struct sockaddr_in addr;
int addr_len = sizeof(addr);
	
//创建socket连接  
  sd = socket(PF_INET, SOCK_STREAM, 0);  
  if(sd < 0)  
  {  
      printf("socket error\n");  
      return -1;  
  }
  	
  bzero(&addr, sizeof(addr)); 
  addr.sin_family = AF_INET;  
  addr.sin_port = htons(port);  
  addr.sin_addr.s_addr = INADDR_ANY;
	
if(connect(sd,(struct sockaddr*)(&addr),sizeof(addr)))
{
	printf("connect fail !\r\n");
	return-1;
}
	
return sd;
}
