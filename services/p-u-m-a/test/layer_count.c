#include<stdio.h>
#include<string.h>


int main(void)
{
	char *path="/mnt/sdb1";
	char dest_path[128]={0};
	int count=0;
	int i = 0;

	for(i=0;i<strlen(path);i++){
		if(path[i]=='/'){
			count++;
		}
	}
	printf("the layer count is %d\n",count);

	return 0;
}
