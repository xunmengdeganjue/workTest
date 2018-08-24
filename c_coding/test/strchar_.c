# include <stdio.h>
#include <string.h>

int main()
{

	char *strings="AAABC-2G AAA-spectrumWiFi_2g";
	char *p=NULL;
	char str1[64] = {0};
	char str2[64] = {0};

	if( (p = strchr(strings,' ')) != NULL ){
		sscanf(strings, "%s %s",str1,str2 );
		printf("str1=%s\n",str1);
		printf("str2=%s\n",str2);
		
		
	}else{
		printf("string=%s\n",strings);
	}

	return 0;

}
