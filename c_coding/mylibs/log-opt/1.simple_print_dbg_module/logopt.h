
#ifndef __LOGOPT_H__
#define __LOGOPT_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*NICK DEBUG*/


enum debug_level{
	DEBUG,
	INFO,
	ERROR,
};

/*
* Function Name : simple_print
* Create Date : 2017/03/20
* Author : Nick
* Description :NICK add this func for the debug methord of mine.
* Param : 
* Output:
* Input:
* Return Code : .
*/
static inline void simple_print(int debug_level,const char *file,unsigned long line,const char *function,const char *fmt,...){	
	va_list ap;
	va_start(ap, fmt);	
	
	switch (debug_level){
		case DEBUG:
			printf("\033[32mNick:[DEBUG][%-25s][%-25s][%5ld]",file,function,line);
			break;
		case ERROR:
			printf("\033[31mNick:[ERROR][%-25s][%-25s][%5ld]",file,function,line);
			break;
		case INFO:
			printf("\033[33mNick:[INFO ][%-25s][%-25s][%5ld]",file,function,line);
			break;
		default:
			printf("\033[35mNick:[DEFAULT][%-25s][%-25s][%5ld]",file,function,line);
			break;
	}

	vprintf(fmt, ap);
	printf("\033[0m\n");
	va_end(ap);
}


#define trace_line() do{\
	printf("\033[32mNICK:[TRACE][%-25s][%-25s][%5ld]\033[0m\n",__FILE__,__FUNCTION__,__LINE__); \
	}while(0)

#define trace_enter() do{\
	printf("\033[32mNICK:[Enter][%-25s][%-25s][%5ld]\033[0m\n",__FILE__,__FUNCTION__,__LINE__);\
	}while(0)
	
#define trace_exit() do{\
	printf("\033[32mNICK:[Exit ][%-25s][%-25s][%5ld]\033[0m\n",__FILE__,__FUNCTION__,__LINE__);\
	}while(0)

#define trace_dbg(fmt,...) do{\
	simple_print(DEBUG,__FILE__,__LINE__,__FUNCTION__,fmt,##__VA_ARGS__);\
	}while(0)

#define trace_info(fmt,...) do{\
	simple_print(INFO,__FILE__,__LINE__,__FUNCTION__,fmt,##__VA_ARGS__);\
	}while(0)
#define trace_err(fmt,...) do{\
	simple_print(ERROR,__FILE__,__LINE__,__FUNCTION__,fmt,##__VA_ARGS__);\
	}while(0)
		
	
#endif
