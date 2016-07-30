#include <stdio.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char **argv){

	char *hostname = "lihuijian.f3322.net";
	char ip[64] = {0};
	struct hostent *hptr; 
	char **pptr, *ptr;
	char str[128] = {0};	
	while(--argc > 0){
		
		ptr = *++argv;
		
		if((hptr = gethostbyname(ptr)) ==NULL){
			printf("gethostbyname error for host: %s: %s",ptr, hstrerror(h_errno));
			continue;
		}
		printf("official hostname: %s\n",hptr->h_name);
		
		for (pptr = hptr->h_aliases; *pptr != NULL; pptr++)
			printf("\talias: %s\n",*pptr);
		switch(hptr->h_addrtype){
			case AF_INET:
				pptr = hptr->h_addr_list;
				for(; *pptr != NULL; pptr++){
					if(inet_ntop(hptr->h_addrtype,*pptr,str,sizeof(str))){
						printf("The ip address is [%s]\n",str);	
					}	
				}
				break;
			default:
				printf("unknown address type");
				break;
		}
	}
	exit(0);
	//printf("The ip is %s",hptr->);
}

