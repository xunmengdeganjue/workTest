// des_test.c
//

#include "stdio.h" 
#include "stdlib.h"   
#include "des.h"

int main(int argc,char ** argv)   
{      
	
    char *file_In = "in.txt";
    char *file_Out = "out.txt";
    char *file_tmp = "des.dat";
    char *key = "key.txt"; 
	int ln;

    //DES加密  
    DES_Encrypt_File(file_In,key,file_tmp);   
    printf("DES_E OK!\n");

    //DES解密  
    DES_Decrypt_File(file_tmp,key,file_Out);
    if(remove(file_tmp)){}   
    printf("DES_D OK!\n");

	//3重DES加密
	D3DES_Encrypt_File(file_In,key,file_tmp);   
	printf("D3DES_E OK!\n");

	//3重DES解密  
	//D3DES_Decrypt_File(file_tmp,key,file_Out);
	//if(remove(file_tmp)){}   
	//printf("D3DES_D OK!\n");
	printf("encrypt the strings!\n");
	char * stringbuffer="123456789";
	char result[1024] = {0};
	
	D3DES_Encrypt(stringbuffer,key,result,strlen(stringbuffer));
	printf("the %s is encrypted to %s\n",stringbuffer,result);
	
	getchar();
    return 0;   
}   