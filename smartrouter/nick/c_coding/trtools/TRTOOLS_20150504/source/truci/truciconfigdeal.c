/*
Desc:This program is designed to provide the macro file and the uci config file of tr181
	that is used in the project of puma in skysoft.
Date:2015-04-28
History:

*/

#include <opt_lib.h>

#define UCI_MACRO "./tr_uciconfig.h" /*this file defined all of the argument of tr_181*/
#define UCI_SOURCE "./tr_uciconfig"  /*this file is from the trfuncdeal program       */
#define UCI_CONFIG "./trconf"        /*this file is the uci config file of the tr_181 */
#define FUNC_TABLE "./tr69_handler_table.h"

char option_argv[8000][256];

int option_check(char *option)
{
	int i = 0;
	int opnumber = sizeof(option_argv)/sizeof(option_argv[0]);
	for(i= 0;i<opnumber;i++)
	{
		//if()
		if(!strcmp(option,option_argv[i]))
		{
			printf("get a same opeion!!!!!!!!!!!!!!!!!!!!!!!\n");
			return (1);
			
		}
	}	
	return (0);
	
}
int main(int argc,char **argv)
{
	FILE *fp_macro = 0;
	FILE *fp_config = 0;
	FILE *fp_source = 0;
	FILE *fp_table = 0;
	char *line;
	char *line1;
	char *cp ;	
	char *url = (char*)malloc(256*sizeof(char));
	//char macros[4000][256];
	char **macros = (char **)malloc(4000*256*sizeof(char));
	char sameoption = 0;
	
	macros[0] = xasprintf("null");
	
	int i = 0;
	fp_source = fopen(UCI_SOURCE,"r");
	if(!fp_source)
	{
		printf("file %s open failed!\n",UCI_SOURCE);
		return (-1);
	}
	fp_macro = fopen(UCI_MACRO,"w");
	if(!fp_macro)
	{
		printf("file %s open failed\n",UCI_MACRO);
		return (-1);
		
	}
	fp_config = fopen(UCI_CONFIG,"w");
	if(!fp_config)
	{
		printf("file %s open failed\n",UCI_CONFIG);
		return (-1);
		
	}
	fp_table = fopen(FUNC_TABLE,"r");
	if(!fp_table)
	{
		printf("file %s open failed\n",FUNC_TABLE);
		return (-1);
		
	}
	fprintf(fp_macro,"#ifndef __TR_UCICONFIG_H__\n");
	fprintf(fp_macro,"#define __TR_UCICONFIG_H__\n");
	fprintf(fp_macro,"\n");
	fprintf(fp_macro,"#define MS \"trconf\"\n");
	fprintf(fp_macro,"#define TRCONF MS\".\"\n");
	fprintf(fp_macro,"\n");
	
	while(1)
	{
		line  = xmalloc_fgetline(fp_source);//get a line content of the tr_uciconfig file 
		if(line)
		{
			char *option = (char *)malloc(256*sizeof(char));
			char *section = (char *)malloc(256*sizeof(char));
			char *tmp = (char *)malloc(256*sizeof(char));
			char *tmp1 = (char *)malloc(256*sizeof(char));
			
			i++;
			
			/*get the section and the option*/
			strcpy(tmp,line);
			/*	
			cp = strchr(tmp,'');
			*cp = '\0';
			cp = strchr(tmp,' ');
			tmp = ++cp;
			*/
			cp = strchr(tmp,' ');
			cp = ++cp;
			section = xasprintf("%s",cp);
			//section = xasprintf("%s",tmp);
			
			cp = strchr(line,'_');
			cp = ++cp;
			option  = xasprintf("%s",cp);//we can refer to the option get the url of this option in the tr69_handler_table.h
			//option_argv[i] = option;
			printf("the content of the section is [%s]\n",section);
			printf("content of the option [%d]:[%s]\n",i,option);
			strcpy(option_argv[i],option);
			
			/*get the url of this option */
			while(1)
			{
				line1 = xmalloc_fgetline(fp_table);
				if(line1)
				{
					if(strstr(line1,section))
					{
						printf("get the dest section %s and the line content is %s\n",section,line1);
						cp = strchr(line1,'{');
						cp = cp + 2;
						tmp = cp;
						cp = strchr(tmp,'"');
						*cp ='\0';
						url	= xasprintf("%s",tmp);
						cp = strrchr(url,'.');
						*cp = '\0';
						tmp = xasprintf("%s",url);
						while(cp=strchr(tmp,'.'))/*xxx.xx.xxxx*/
						{
							*cp = '_';
						}
						url = xasprintf("%s",tmp);
						/*
						sameoption = option_check(option);
						
						if((!strcmp(url,macros[i-1])) && (sameoption))
						{	
							printf("the url and the option are same!\n");
							continue;
						}
						else 
						*/
						//macros[i] = xasprintf("%s",url);/*xxx_xx_xxxx*/
							break;//every time there is only one option can be deal with.
					}
					
				}
				else 
					break;
				
			}
				
			/*write the tr_uciconfig.h*/
			//fprintf(fp_macro,"%s\tTRCONF \"%s.%s\"\n",line,section,option);
			fprintf(fp_macro,"%s\t\t\tTRCONF \"%s.%s\"\n",line,url,option);
			
			/*write the trconf*/
			//if(strcmp(section,macros[i-1]))//if the current section is not same as the macros[i-1],then create the section name 
			if(strcmp(url,macros[i-1]))
			{
				fprintf(fp_config,"config tr181 \'%s\'\n",url);
				fprintf(fp_config,"\toption %s \'\'\n",option);
			}
			else
			{	
				fprintf(fp_config,"\toption %s \'\'\n",option);
			}
			//strcpy(macros[i],section);
			//macros[i] = xasprintf("%s",section);
			macros[i] = xasprintf("%s",url);/*xxx_xx_xxxx*/
				
		}
		else
		{
			break;
		}
		
	}
	fprintf(fp_macro,"#endif");
exit:
	fclose(fp_source);
	fclose(fp_macro);
	fclose(fp_config);
	fclose(fp_table);
	return (0);
	
}
