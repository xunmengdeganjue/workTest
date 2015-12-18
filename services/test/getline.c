#include<stdio.h>
#include<string.h>



int main(){
	
	FILE *fp;
	char cmmand[128] = {0};
	char buff[128] = {0};
	sprintf(cmmand,"cat /tmp/upnp.leases  |awk -F \":\" '{print $4\":\"$6}' ");

	if( (fp=popen(cmmand,"r")) != NULL){
		
		while(fgets(buff,sizeof(buff)-1,fp)){
			printf("the content of the buffer is:\n [%s]\n",buff);
			
		}
	}

	return 0;

}
