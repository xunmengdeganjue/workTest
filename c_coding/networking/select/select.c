#include <stdio.h>
#include <sys/select.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>                 /*for read()*/


#define DESTFILE "/tmp/select.txt"

int main(int argc,char **argv){
	
	FILE *fp;
	fd_set fdset; /*定义一个监听的文件描述符集合*/
	int maxfdpl;
	char buffer[256] = {0};
	int i  = 0;
	struct timeval timeout={3,0}; //select等待3秒，3秒轮询，要非阻塞就置0 
	 
	 
	//fp = fopen(DESTFILE,"r");
	
	while(1){
		FD_ZERO(&fdset);
		
		FD_SET(fileno(stdin), &fdset);
		maxfdpl = fileno(stdin) + 1;
		
		switch(select(maxfdpl,&fdset,&fdset,&fdset,&timeout)){
			case -1:/*select错误，退出程序*/
				printf("case -1 there is something wrong!\n");
				exit(-1);
				break;
			case 0:/*再次轮询*/
				printf("再次轮询\n");
				continue;
			default:
				printf("默认操作 [%d]\n",i);
				if(FD_ISSET(fileno(stdin), &fdset)){/*判断文件是否可读*/
					printf("读取文件内容\n");
					if(read(fileno(stdin),buffer,128) == -1){/*读出文件内容*/
						printf("read error!\n");
						
					}else{
						printf("the content of the buffer is [%s]\n",buffer);
						sleep(5);
					
					}
					//fclose(fp);
					memset(buffer,0x00,sizeof(buffer));
					
				}
				i++;
				break;
		}
	}
	
	printf("game over!\n");
	return 0;
	
}
