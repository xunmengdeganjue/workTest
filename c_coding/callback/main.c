/*
 *	Call Back
 *
 *		
 */
 
/***************************** INCLUDES *****************************/

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

/*
* Function Name : sig
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output：
* Input：
* Return Code : .
*/
void sig(int signum)
{
        printf("Received signal number %d!\n", signum);
}

/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output：
* Input：
* Return Code : .
*/
int one_morningcall(int *time){
	
	printf("%s,%d,%s,%d\n",__FUNCTION__,__LINE__,__FILE__,*time);
	
}
/*
* Function Name : two_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output：
* Input：
* Return Code : .
*/
int two_morningcall(int *time){
	
	printf("%s,%d,%s,%d\n",__FUNCTION__,__LINE__,__FILE__,*time);
	
}
/*
* Function Name : register_cb
* Create Date : 2017/03/20
* Author : Nick
* Description : the caller to call the callback functions.
* Param : 1:input number
		  2:the pointer to the callback functions.
* Output：void
* Input：Null
* Return Code :void
*/

void register_cb(int input,int *callback(int *)){
	if(callback(&input)){
		printf("I have done the callback!\n");
	}
}


/*
* Function Name : main
* Create Date : 2017/03/20
* Author : Nick
* Description : 
* Param : 
* Output：
* Input：
* Return Code : .
*/
int main(int argc,char ** argv){

        signal(SIGUSR1, sig);
	
		sleep(2);
		register_cb(11,one_morningcall);
		
		sleep(1);
		register_cb(21,two_morningcall);
        
		pause();
        
        return 0;	
		
}
