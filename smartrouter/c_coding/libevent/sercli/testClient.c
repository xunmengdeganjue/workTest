#include "common.h"
#include "ev.h"

#define PORT 57789

void main()
{
	int sd = new_socket_client(PORT);
	char buffer[BSIZE];		
	do{
		printf("client send data: ");
		printf(CALL_A);
		printf("\n");
		if(write(sd,CALL_A,CALL_SIZE) == -1)
		{
			printf("client write error!\n");
			return;
		}
		if(read(sd,buffer,BSIZE) == -1)
		{
			printf("client read error!\n");
			return;
		}
		printf("client read data: %s\n",buffer);
			
		ev_sleep(3);
			
		printf("client send data: ");
		printf(CALL_B);
		printf("\n");
		if(write(sd,CALL_B,CALL_SIZE) == -1)
		{
			printf("client write error!\n");
			return;
		}
		if(read(sd,buffer,BSIZE) == -1)
		{
			printf("client read error!\n");
			return;
		}
		printf("client read data: %s\n",buffer);
			
		ev_sleep(3);
			
		printf("client send data: ");
		printf(CALL_C);
		printf("\n");
		if(write(sd,CALL_C,CALL_SIZE) == -1)
		{
			printf("client write error!\n");
			return;
		}
		if(read(sd,buffer,BSIZE) == -1)
		{
			printf("client read error!\n");
			return;
		}
		printf("client read data: %s\n",buffer);
			
		ev_sleep(3);
			
		printf("client send data: ");
		printf(CALL_A_PART);
		printf("\n");
		if(write(sd,CALL_A_PART,CALL_SIZE) == -1)
		{
			printf("client write error!\n");
			return;
		}
		if(read(sd,buffer,BSIZE) == -1)
		{
			printf("client read error!\n");
			return;
		}
		printf("client read data: %s\n",buffer);
			
		ev_sleep(3);
	}while(1);	
}
