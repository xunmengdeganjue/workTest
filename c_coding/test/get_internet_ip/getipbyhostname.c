#include <stdio.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>

getipbyhostname(char *hostname,char *ip){
	
	struct hostent *hptr; 
	char **pptr;
	char str[128] = {0};
	printf("the hostname is %s\n",hostname);
	if((hptr = gethostbyname(hostname)) ==NULL){
		printf("error!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
		printf("gethostbyname error for host: %s: %s",hostname, hstrerror(h_errno));
	}
	
	printf("official hostname: %s\n",hptr->h_name);
	
	for (pptr = hptr->h_aliases; *pptr != NULL; pptr++)
		printf("\talias: %s\n",*pptr);
#if 0	
	switch(hptr->h_addrtype){
		case AF_INET:
			pptr = hptr->h_addr_list;
			for(; *pptr != NULL; pptr++){
				if(inet_ntop(hptr->h_addrtype,*pptr,str,sizeof(str))){
					printf("The ip address is [%s]\n",str);	
					strcpy(ip,str);	
				}
			}
			break;
		default:
			printf("unknown address type");
			break;
	}	
#endif
	if(hptr->h_addrtype == AF_INET){
		pptr = hptr->h_addr_list;
		for(; *pptr != NULL; pptr++){
			if(inet_ntop(hptr->h_addrtype,*pptr,str,sizeof(str))){
				printf("The ip address is [%s]\n",str);	
				strcpy(ip,str);	
			}
		}
	}else{
		printf("unknown address type");
	}
}

int main(int argc, char **argv){

	char *domain = NULL;
	char ip[128] = {0};
	
	char str[128] = {0};
	
	while(--argc > 0){	
		domain = *++argv;		
		printf("get start!\n");
		getipbyhostname(domain,ip);
		printf("Get the IP is %s\n",ip);
		
	}

	return 0;

}

