#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int str2int(char *str)
{
    int n=0;
    while(*str)
    {
        n<<=4;
        if(*str<='9')
            n|=*str-'0';
        else
            n|=(*str&~0x20)-'A'+10;
        ++str;
    }
    return n;
}
/*
*
*
*/
char *str2hex(char *string){
	char *ch;
	char *hexstr=(char *)malloc(sizeof(char)*strlen(string)*2);/*the length is two times of the string*/
	for(ch = string; *ch != '\0'; ++ch){
		sprintf(hexstr,"%s%02x",hexstr,*ch);
		printf("the original data[%c] to hex data [%02x]\n",*ch,*ch);
	}
	return hexstr;
}


int main(){

	char *str = "-100";
	int x  = 0;

	x = atoi(str);
	printf("the x is [%d]\n",x);
	

	char *string1 ="hello";
	//int buffer[8]={ 0, 1,2,3,4,5,6,7};
	char *buffer=(char *)malloc(1024);	
	int i = 0;
	char * ch;
	
	for(ch = string1; *ch != '\0'; ++ch){
		printf("string1[%d]=%x\n",i,*ch);
		sprintf(buffer,"%s%02x",buffer,*ch);
		i++;
	}
	printf("the buffer = [%s]\n",buffer);
	
	
	
	char *string2="hello world";
	printf("the str1 = %x\n",str2int(string2));
//	for(i = 0;i<strlen(str1);i++)
//		printf("the buffer to hex=[%s]\n",buffer[i]);

	buffer = str2hex(string2);
	printf("string2 [%s] to hex [%s]\n",string2,buffer);
	return 0;
}
