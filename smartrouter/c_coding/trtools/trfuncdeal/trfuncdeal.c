/***
根据xml2func程序生成的函数文件，tr69_handler.h 生成带有函数实现的文件
tr69_handler.c。简化函数填写步骤。

***/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include <fcntl.h>
//#include <grp.h>
#include<stdarg.h>

#define FUNC_FILE "./tr69_handler.h"
#define UCI_CONFIG "./tr_uciconfig"
#define FUNC_OK "./tr69_handler.c"
#define MACRO  "./tr_uciconfig"

char getfuncarg[2000][256]={0};
char setfuncarg[2000][256]={0};
//char funcarg[2000][256]={0};

/* This function reads an entire line from a text file, up to a newline
 * or NUL byte, inclusive.  It returns a malloc'ed char * which
 * must be free'ed by the caller.  If end is NULL '\n' isn't considered
 * end of line.  If end isn't NULL, length of the chunk is stored in it.
 * If lineno is not NULL, *lineno is incremented for each line,
 * and also trailing '\' is recognized as line continuation.
 * Returns NULL if EOF/error. */
char* bb_get_chunk_with_continuation(FILE *file, int *end, int *lineno)
{
	int ch;//change the int to the char 20121216
	int idx = 0;
	char *linebuf = NULL;
	int linebufsz = 0;
	while ((ch = getc(file)) != EOF)
	{
		/* grow the line buffer as necessary */
		if (idx >= linebufsz) 
		{
			linebufsz += 256;
			linebuf = realloc(linebuf, linebufsz);
		}
		linebuf[idx++] = (char) ch;
		if (!ch)
			break;
		if (end && ch == '\n')
		{
			if (lineno == NULL)
				break;
			(*lineno)++;
			if (idx < 2 || linebuf[idx-2] != '\\')
				break;
			idx -= 2;
		}
	}
	if (end)
		*end = idx;
	if (linebuf) 
	{
		linebuf = realloc(linebuf, idx + 1);
		linebuf[idx] = '\0';
	}
	return linebuf;
}

/* Get line.  Remove trailing \n */
char* xmalloc_fgetline(FILE *file)
{
	int i;
	char *c = bb_get_chunk_with_continuation(file, &i,NULL);
	if (i && c[--i] == '\n')
		c[i] = '\0';
	return c;
}
char* xasprintf(const char *format, ...)
{
	va_list p;
	int r;
	char *string_ptr;
	va_start(p, format);
	r = vasprintf(&string_ptr, format, p);
	va_end(p);
	if (r < 0)
		exit(1);
	return string_ptr;
}

/*
 * Find out if the last character of a string matches the one given.
 * Don't underrun the buffer if the string length is 0.
 */
char*  last_char_is(const char *s, int c)
{
	if (s && *s) 
	{
		size_t sz = strlen(s) - 1;
		s += sz;
		if ( (unsigned char)*s == c)
			return (char*)s;
	}
	return NULL;
}
char* xstrdup(const char *s)
{
	char *t;
	if (s == NULL)
		return NULL;
	t = strdup(s);
	if (t == NULL)		
		//bb_error_msg_and_die(bb_msg_memory_exhausted);
		return NULL;
	return t;
}


int get_funcs(char *funcfile, char * argv[])
{
	FILE *fp;
	char *line;
	char *cp;
	char *tmp;
	int i = 0; //number of the functions
	int fd = 0;
	fp = fopen(funcfile,"r");
	if(!fp)
	{	
		printf("file [%s] open failed!\n",funcfile);
		return (-1);
	}
	//
	fd = fileno(fp);
	
	while(1)
	{
		line  = xmalloc_fgetline(fp);//get a line content of the tr_handler.h file 
		
		if (line) /* EOF/error */
		{	
			//if(strstr(line,"get") || strstr(line,"set"))
			if((!strncmp(line,"int get",7))||(!strncmp(line,"int set",7)))
			{
				if(!strncmp(line,"int get",7))
				{
					cp = strchr(line,'g');				
				}
				else if(!strncmp(line,"int set",7))
				{
					cp = strchr(line,'s');					
				}
				else
					printf("error!\n");
				
				tmp = cp;
				cp  = (char *)strchr(tmp,'(');
				*(cp)='\0';
				//strcpy(argv[i],tmp);
				argv[i] = xasprintf("%s",tmp);
				i ++;
			}	
		}
		else
		{
			//return (-1);
			break;
		}
		
	}
	fclose(fp);
	return (i);
	
}
int deal_macro(char **funcargv,int count)
{
	int i = 0;
	char *cp ;
	char *tmp;
	FILE *fp;
	int count_macro  = 0;
	fp = fopen(MACRO,"w");
	if(!fp)
	{
		printf("macro file opened failed!\n");
		return (-1);
	}
	for(i = 0 ;i < count; i++)
	{
		//if(strstr(funcargv[i],"get"))
		if(!strncmp(funcargv[i],"get",3))
		{
			cp = strchr(funcargv[i],'_');
			cp = ++cp;
			fprintf(fp,"#define %s\n",cp);
			count_macro ++;
		}	
		
	}
	fclose(fp);
	return (count_macro);
}



int deal_funcs(char **funcargv,const long int count)
{
	int i = 0;
	int func_count = 0;
	char *cp;
	FILE *fp = 0;
	
	fp = fopen(FUNC_OK,"w");
	if(!fp)
	{
		printf("functions file opened failed!\n");
		return (-1);		
	}
	printf("Functions count ----------------------%ld\n",count);
	for(i = 0; i < count; i ++)
	{
		printf("number %d \n",i);
		//if(strstr(funcargv[i],"get"))
		if(!strncmp(funcargv[i],"get",3))
		{
			printf("1111the dest function is [%s]\n",funcargv[i]);
			cp = strchr(funcargv[i],'_');//skip the "get_"
			cp = ++cp;
			fprintf(fp,"int %s(char * path_name, char *value)\n{\n\tint ret = 0;\n\ttr_log(LOG_DEBUG,\"path_name[%%s]\",path_name);\n\tret = do_uci_get(%s, value);\n\tif(ret)\n\t{\n\t\treturn -1;\n\t}\n\ttr_log(LOG_DEBUG,\"get value [%%s]\",value);\n\treturn ret;\n}\n",funcargv[i],cp);
			func_count ++;
		}
		//else if(strstr(funcargv[i],"set"))
		else if(!strncmp(funcargv[i],"set",3))	
		{
			printf("22222the dest function is [%s]\n",funcargv[i]);
			cp = strchr(funcargv[i],'_');//cut the "set_"
			cp = ++cp;	
			fprintf(fp,\
			"int %s(char * path_name, char *value)\n{\n\
\tint ret = 0;\n\
\ttr_log(LOG_DEBUG,\"path_name[%%s]\",path_name);\n\
\tret = do_uci_set(%s, value);\n\
\tif(ret)\n\
\t{\n\
\t\treturn (-1);\n\
\t}\n\
\telse\n\
\t{\n\
\t\tret = do_uci_commit(MS);\n\
\t\tif(ret)\n\
\t\t{\n\
\t\t\treturn (-1);\n\
\t\t}\n\
\t}\n\
\ttr_log(LOG_DEBUG,\"set value [%%s]\",value);\n\
\treturn ret;\n\
}\n"
			,funcargv[i],cp);
			func_count ++;
			
		}
		else
			printf("error:");
	}
	fclose(fp);
	return (func_count);
	
}
int main(char argc,char** argv)
{
	int i = 0;
	char **funcarg=(char **)malloc(6000*256*sizeof(char));
	
	long int count = 0;
	int func_count = 0;
	count = get_funcs(FUNC_FILE,funcarg);
	
	printf("count of the functions %ld\n",count);
	
	
	if(argc < 2)
	{
		printf("parameter error:please check you parameter!\n");
		printf("USAGE:\n\t%s macro:deal with the tr_uciconfig.h\n",argv[0]);
		printf("USAGE:\n\t%s func:deal with the tr69_handler.h\n",argv[0]);
		
	}
	
	
	if(!strcmp(argv[1],"macro"))
	{
		if(*funcarg)
		{	
			deal_macro(funcarg,count);
		}	
	}		
	else if(!strcmp(argv[1],"func"))
	{
		if(*funcarg)
		{
			func_count = deal_funcs(funcarg,count);
			printf("there are %d functions\n",func_count);	
		}
	
	}
	else
	{
		for( i=0 ;i<count ;i++ )
		{
			printf("%d funcs name :[%s]\n",i,funcarg[i]);
		}
		printf("count of the functions %ld\n",count);
		
	}
		
	
	return (0);		
}