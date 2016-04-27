/*
Desc:This file is designed for the tr069 project.The file provide a programe that 
can inplet the interface functions from the xml2func programe.and infer to the 
tr69_handler.h file create the macro file which named "tr_uciconfig".the tr_uciconfi 
file is needed by the truciconfigdeal programe.

Date:

History:

*/

#include "tr_func_deal.h"
#include <opt_lib.h>

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
	
	fprintf(fp,"#ifndef __TR69_HANDLER_H__\n");
	fprintf(fp,"#define __TR69_HANDLER_H__\n\n");
	fprintf(fp,"#include \"tr69_handler_ext.h\"\n");
	fprintf(fp,"#include \"tr69_handler_table.h\"\n");
	fprintf(fp,"#include \"suci.h\"\n");
	fprintf(fp,"#include \"tr_uciconfig.h\"\n");
	fprintf(fp,"#include \"log.h\"\n");
	fprintf(fp,"#include \"string.h\"\n\n");
	
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
	fprintf(fp,"\n#endif\n");
	fclose(fp);
	return (func_count);
	
}
int main(int argc,char** argv)
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



