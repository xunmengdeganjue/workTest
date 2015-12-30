#ifndef __FUNC_H__ 
#define __FUNC_H__


#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
#include<string.h>
#include<fcntl.h>
#include<stdarg.h> //for va_start

//#define PIDFILE "/var/run/ip6scan.pid"

#define PIDFILE "/tmp/ip6scan.pid"
#define PROCIP6CLIENTS "/proc/ip6addr"
#define IPV6CLIENTS "/tmp/ip6clients"

char* xasprintf(const char *format, ...);
char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno);
char* xmalloc_fgetline(FILE *file);
int data_transmission();




#endif
