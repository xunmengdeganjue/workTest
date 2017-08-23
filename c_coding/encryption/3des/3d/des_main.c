// des_test.c
//
 


#include "cencode.h"
#include "cdecode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "des.h"


/* arbitrary buffer size */
#define SIZE 100

char* encode(const char* input)
{
	/* set up a destination buffer large enough to hold the encoded data */
	char* output = (char*)malloc(SIZE);
	/* keep track of our encoded position */
	char* c = output;
	/* store the number of bytes encoded by a single call */
	int cnt = 0;
	/* we need an encoder state */
	base64_encodestate s;
	
	/*---------- START ENCODING ----------*/
	/* initialise the encoder state */
	base64_init_encodestate(&s);
	/* gather data from the input and send it to the output */
	cnt = base64_encode_block(input, strlen(input), c, &s);
	c += cnt;
	/* since we have encoded the entire input string, we know that 
	   there is no more input data; finalise the encoding */
	cnt = base64_encode_blockend(c, &s);
	c += cnt;
	/*---------- STOP ENCODING  ----------*/
	
	/* we want to print the encoded data, so null-terminate it: */
	*c = 0;
	
	return output;
}

char* decode(const char* input)
{
	/* set up a destination buffer large enough to hold the encoded data */
	char* output = (char*)malloc(SIZE);
	/* keep track of our decoded position */
	char* c = output;
	/* store the number of bytes decoded by a single call */
	int cnt = 0;
	/* we need a decoder state */
	base64_decodestate s;
	
	/*---------- START DECODING ----------*/
	/* initialise the decoder state */
	base64_init_decodestate(&s);
	/* decode the input data */
	cnt = base64_decode_block(input, strlen(input), c, &s);
	c += cnt;
	/* note: there is no base64_decode_blockend! */
	/*---------- STOP DECODING  ----------*/
	
	/* we want to print the decoded data, so null-terminate it: */
	*c = 0;
	
	return output;
}

int main()   
{      
    char *file_In = "in.txt";
    char *file_Out = "out.txt";
    char *file_tmp = "des.dat";
    char *key = "key.txt"; 
	int ln;

	char* encoded;
	char* decoded;

	

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
	char * stringbuffer = "123456789";
	char * result = (char *)malloc(sizeof(char) * (strlen(stringbuffer) +1));
	
	printf("do the encryption!\n");
	
	char *keycont = "asdfghjklzxcvbnmqwertyui";
	
	printf("the keycont is [%s]\n",keycont);
	
	D3DES_Encrypt(stringbuffer,keycont,result,strlen(stringbuffer));
	
	printf("the result convert to [%ld] \n",strtol(result,NULL,16));

	/*使用base64来讲3des加密后的数据进行重新编码以方便传输给前台*/
	char *basetest="123456789";
	encoded = encode(basetest);/*base64 加密算法经验证是ok的*/
	printf("the encode by base64 is [%s]\n",encoded);
	
	
	printf("the %s is encrypted to [%s]\n",stringbuffer,result);

	char *newcc="0x702e9bd6606d63485e72a26c1b5197a0";

	char *decrypt_tmp = (char *)malloc(sizeof(char) * (strlen(newcc)+1));
	printf("Now decrypt the password!\n");
	D3DES_Decrypt(newcc, keycont, decrypt_tmp, strlen(result));
	printf("the result is [%s] \n",decrypt_tmp);


    return 0;   
}   
