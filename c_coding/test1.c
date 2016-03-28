#include<stdio.h>
#include <string.h>

void strtoupper(char *str){
//	cgi_trace_enter();
	int i = 0;
	printf("THE SIZE OF THE STR IS [%ld]\n",strlen(str));
	for(i=0;i<strlen(str);i++){
		str[i]=toupper(str[i]);
	}
	
//	cgi_trace_exit();
}

int main(){

	char conntype[32] = "dhcpdfdfdf";


	strtoupper(conntype);

	printf("The content of conntype is %s\n",conntype);
	
        return 0;	


}
