#include "daemon_log.h"

#define LOGFILE "/tmp/daemon.log"

#define daemon_debug(fmt,...) daemon_log(__FUNCTION__,__FILE__,__LINE__,(fmt),##__VA_ARGS__)



//int daemon_log(const char *format, ...){
int daemon_log(const char *func,const char *file,unsigned long line,const char *format,...){
	FILE * logfd = NULL;
	va_list args;
	int msg_buf_len = 32;
	char *msg_buffer = (char *)malloc(msg_buf_len);
	int buffer_len = 0;
	int rec = 0;
	char *new_buf;
	
	logfd = fopen(LOGFILE,"a+");
	if(logfd == NULL)
	{
		printf("open the log file %s filed!\n",LOGFILE);	
		return -1;
	}
	
	va_start(args, format);
	do{
		buffer_len = msg_buf_len;
		rec = vsnprintf(msg_buffer, buffer_len, format, args);
		//#if 0
		if(rec >= buffer_len){
			new_buf = malloc(buffer_len * 2);
			if(new_buf==NULL){
				break;
			}else{
				free(msg_buffer);
				msg_buffer=new_buf;	
				msg_buf_len = buffer_len * 2;
			}
		}
		//#endif
	}while(rec >= buffer_len);
	va_end(args);
	
#define LINE_FILE_FUNC_FMT   "[%4lu@%-15s][%-25s]"	

	fprintf(logfd,LINE_FILE_FUNC_FMT"%s",line,file,func,msg_buffer);
	
	//fprintf(logfd,format,args);
	fflush(logfd);
	fclose(logfd);
	return 0;
}


void logtest()
{
	printf("hello how are you!\n");
	daemon_debug("test the logtest fuction %d!\n",123);
}

