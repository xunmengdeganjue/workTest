#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int getSubKeys(char * keysrc, char *key1,char *key2,char *key3){

	char *p = NULL;
	int i  = 0;
	int ret = -1;

	printf("[%s] trace 111\n",__FUNCTION__);

	p =  keysrc;
	if(strncpy(key1, p, 8)){
		ret = 0;
	}
	p +=8;
	if(strncpy(key2, p, 8)){
		ret = 0;
	}
	p +=8;
	if(strncpy(key3, p, 8)){
		ret = 0;
	}
		
#if 0

	for( p = keysrc ; *p != '\0' ;p += 8 ){
		
		memcpy(key,p,8);

		printf("subkey [%d] is [%s]\n",i,key[i]);

		i++;
	}
#endif
	printf("[%s] trace 222\n",__FUNCTION__);
	return ret;

}


int main(){

	char *key="123456781111111100000000";
	char *key1 = malloc(8);
	char *key2 = malloc(8);
	char *key3 = malloc(8);
	int i = 0;
	printf("原始数组内容：\n");
//	for(i = 0;i<3;i++)
//		printf("subkey[%d]=[%s]\n",i,subkey[i]);
	
	getSubKeys(key,key1,key2,key3);
	//sprintf(subkey[0],"%s","12345678");
	//sprintf(subkey[1],"%s","11111111");
	//sprintf(subkey[2],"%s","22222222");
	printf("key1=%s,key2=%s,key3=%s\n",key1,key2,key3);
	
	//for(i = 0;i<3;i++)
	//	printf("subkey[%d]=[%s]\n",i,subkey[i]);




}
