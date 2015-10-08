/* This programe is to use eui-64 algorithm to get the new addr tail 
*  of the br-lan for IPv6-address.
*/

#include<stdio.h>
#include<string.h>



int main(int argc,char**argv){
	char mac[32]={0};
	char eui_ret[64]={0};
	int fourthByte = 0xFF;
	int fifthByte = 0xFE;
	unsigned int mac_byte[6]={0};
	
	if(argc == 2){
		strcpy(mac,argv[1]);
		//printf("Get the mac addr [%s]\n",mac);
		sscanf(mac,"%02x:%02x:%02x:%02x:%02x:%02x",&mac_byte[0],
		&mac_byte[1],&mac_byte[2],&mac_byte[3],&mac_byte[4],&mac_byte[5]);
		//printf("first byte is [%x]\n",mac_byte[0]);
		/*first xor operation to set the seventh bit to be opposite */
		//printf("%x",mac_byte[0]);
		mac_byte[0] = mac_byte[0] ^ 0x02;
		//printf("now the first byte is [%x]\n",mac_byte[0]);
		/*then add the two byte to the place between the third and fourth bytes*/
		sprintf(eui_ret,"%x:%x:%x:%x:%x:%x:%x:%x",mac_byte[0],mac_byte[1],
		mac_byte[2],fourthByte,fifthByte,mac_byte[3],mac_byte[4],mac_byte[5]); 

	}else{
		printf("argument error!\n");

	}

	printf("%s\n",eui_ret);

	return 0;
}

