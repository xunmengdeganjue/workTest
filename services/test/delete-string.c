#include <stdio.h>
#include <string.h>

int main(){

	//char strings[] = {"hello hi - CUPS+guten"};
	char strings[] = {"Brother HL-2240D Foomatic/hpijs-pcl5e (en)"};
	char *p = NULL;
	char *q = NULL;
	char buffer[128] = {0};

	printf("The orignal strings is [%s]\n",strings);	

	if((p = strstr(strings,"CUPS"))){
		printf("There is a CUPS in the strings\n");
		p = p -3;
		*p = '\0';
		
		
	}else if((p = strstr(strings,","))){
		printf("there is a ',' in the strings\n");
		sscanf(strings,"%[^,],%*s",buffer);
		printf("the result is [%s]\n",buffer);
		
	}else if((p = strstr(strings," "))){
		p++;
		if(p = strstr(p," ")){
			*p = '\0';
		}
		//sscanf(strings,"%s %s %*s",buffer);
		
		printf("the result is [%s]\n",strings);
	}
	printf("Now the strings is [%s]\n",strings);
	
	return 0;


}
