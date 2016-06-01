#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char **argv)
{
	char *str1="WWW.HELLO.COM";
	char *str2=(char *)malloc(256);


	if(argc == 2){
		if(argv[1]!=NULL){
			strcpy(str2,argv[1]);
			if(strcasecmp(str1,str2)==0){
				printf("THE STRING IS THE SAME!\n");
			}else{
				printf("THE STRING IS DIFFERENT!\n");
			}
		
		}
	}

	return 0;

}
