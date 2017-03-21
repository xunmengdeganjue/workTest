#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<stdarg.h>

#define MSG_BUF_LEN 128

/*
* Function Name : one_morningcall
* Create Date : 2017/03/20
* Author : Nick
* Description : 执行任意长度的信息打印动作
* Param : 
* Output：
* Input：
* Return Code : .
*/
void log_printf(const char *file,const long line, const char*func, const char *fmt,...){
	va_list args;
	int buf_len;
	int rc = 0;
	char *msg_buf = malloc(MSG_BUF_LEN);
	char *new_buf;
	
	va_start(args, fmt);
	do {
		buf_len = MSG_BUF_LEN;
		rc = vsnprintf(msg_buf,MSG_BUF_LEN, fmt, args);
		if (rc >= buf_len) {
			//printf("Need relloc buf to %lu\n", log->msg_buf_len);
			new_buf = malloc(buf_len * 2);
			if (new_buf == NULL) {
				break;
			} else {
				free(msg_buf);
				msg_buf = new_buf;
				//msg_buf_len = buf_len * 2;
			}
		}
	} while (rc >= buf_len);
	va_end(args);
	
	printf("\033[32mNick:[file-%s][line-%ld][func-%s]:%s\033[0m\n",file,line,func,msg_buf);
	
}

#define trace_line() do{\
	printf("\033[32m[file:%s]:[line:%d]:[func:%s]\033[0m\n",__FILE__,__LINE__,__FUNCTION__);\
}while(0)

#define dbg_print(fmt,...) do{\
	log_printf(__FILE__,__LINE__,__FUNCTION__,(fmt), ##__VA_ARGS__);\
}while(0)

/*
* Function Name : simple_print
* Create Date : 2017/03/20
* Author : Nick
* Description : 更加简化的，执行任意长度的信息打印动作函数
* Param : 
* Output：
* Input：
* Return Code : .
*/
void simple_print(const char *fmt,...)
{
	va_list ap;
	va_start(ap, fmt);
	printf("\033[32m[%s][%ld][%s]\033[0m",__FILE__,__LINE__,__FUNCTION__);
	vprintf(fmt, ap);
	printf("\n");
	va_end(ap);
	
}
	
#define trace_info(fmt,...) do{\
	simple_print(fmt,##__VA_ARGS__);\
}while(0)	


int main(int argc,char **argv){
	
	trace_line();
	int num=100;
	dbg_print("hello %s","how are you");
	trace_info("nihao %d",num);
	return 0;

}
