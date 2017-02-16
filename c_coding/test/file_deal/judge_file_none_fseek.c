#include<stdio.h>
#include<string.h>

#define ATTACH_FILE "./attach_device"

int main(){

	 FILE *fp;
        int len = 0;
        fp = fopen(ATTACH_FILE, "r");
	fseek(fp,0,SEEK_END);/*将文件游标移动到末尾*/
	len = ftell(fp);

                if(len != 0){
                        printf("the getchar is %d\n",len);
                        printf("The file %s is not none!\n",ATTACH_FILE);
                }else{
                        printf("The attach_file has no content!\n");
                }


        return 0;




}

