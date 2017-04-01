#include <stdio.h>
#include <signal.h>
#include <unistd.h>



int result = 0;

/*
* Function Name : sig
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output£º
* Input£º
* Return Code : .
*/
void sig(int signum)
{
        printf("Received signal number %d!\n", signum);
		exit(1);
}

/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output£º
* Input£º
* Return Code :
*/
int do_add(int data1,int data2){
	
	printf("%s,%d,%s\n",__FUNCTION__,__LINE__,__FILE__);
	printf("the data1 = %d,data2= %d\n",data1,data2);
	return result = data1+data2;
}

/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output£º
* Input£º
* Return Code : .
*/
int do_delete(int data1,int data2){
	
	return result = data1-data2;
}

/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output£º
* Input£º
* Return Code : .
*/
int do_multiply(int data1,int data2){
	
	return result = data1*data2;
	
}
/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output£º
* Input£º
* Return Code : .
*/
int do_divide(int data1,int data2){
	return result = data1/data2;
}

/*
* Function Name : register_cb
* Create Date : 2017/03/20
* Author : Nick
* Description : the caller to call the callback functions.
* Param : 1:input number
		  2:the pointer to the callback functions.
* Output£ºvoid
* Input£ºNull
* Return Code :void
*/

void register_cb(int input1,int input2,int *callback(int ,int )){
	if(callback(input1,input2)){
		printf("I have done the callback!\n");
	}
}


void adapter(char *cmd,int data1,int data2){
	char *callback = malloc(16*sizeof(char));
	
	if(cmd){
		if(!strcmp(cmd,"ADD")){
			//strcpy(callback,"do_add");
			callback=do_add; //atention that the callback is not a string,it's a address.
		}else if(!strcmp(cmd,"DELETE")){
			//callback="do_delete";
			callback=do_delete;
		}else if(!strcmp(cmd,"MULTIPLY")){
			//callback="do_multiply";
			callback=do_multiply;
		}else if(!strcmp(cmd,"DIVIDE")){
			//callback="do_divide";
			callback=do_divide;
		}
		printf("the callback = [%p]\n",callback);
		register_cb(data1,data2,(int *)callback);
	}
	
}


int main(int argc,char ** argv){

	char buffer[64] = {0};	
	char cmd[16] = {0};
	char data1[32] = {0};
	char data2[32] = {0};
	
	signal(SIGUSR1, sig);
	//sleep(2);
	//register_cb(11,one_morningcall);
	//sleep(1);
	//register_cb(21,two_morningcall);

	//daemon(1,1);
	while(1){
		if(buffer[0]!= 0){
			memset(buffer,0x00,sizeof(buffer));
		}	
		printf("Please input your command like [command data]\n");
		scanf("%s %s %s",cmd,data1,data2);

		printf("the cmd is [%s]\n",cmd);
		printf("the data1 is [%s]\n",data1);
		printf("the data2 is [%s]\n",data2);
		
		adapter(cmd,atoi(data1),atoi(data2));
	
		printf("the result = %d\n",result);
		sleep(1);
		
	}

	//pause();

	return 0;	

}
