#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*本程序实现将16进制的字符串转化成普通的字符串，比如将68656c6c6f2140233132330505050505
这串16进制字符串转换成 'hello!@#123'
请注意，16进制字符串字母目前只支持全部为大写的情况，所以需要将小写的字母转换成大写方可
*/
/**
 * hex2int
 * take a hex string and convert it to a 32bit number (max 8 hex digits)
 */
int hex2int(char hex) {
    int val = 0;
    //while (*hex) {
        // get current character then increment
       // char byte = *hex++;
		char byte = hex;
        // transform hex character to the 4bit equivalent number, using the ascii table indexes
        if (byte >= '0' && byte <= '9') byte = byte - '0';
        else if (byte >= 'a' && byte <='f') byte = byte - 'a' + 10;
        else if (byte >= 'A' && byte <='F') byte = byte - 'A' + 10;    
        // shift 4 to make space for new digit, and add the 4 bits of the new digit 
        val = (val << 4) | (byte & 0xF);
   // }
    return val;
}


int hex_to_int(char c){
		printf("\033[32m[%s] the input data[%c]\033[0m\n",__FUNCTION__,c);
		printf("\033[33m[%s] the input data[%d]\033[0m\n",__FUNCTION__,c);
        int first = c / 16 - 3;
        int second = c % 16;
        int result = first*10 + second;
        if(result > 9) result--;
		printf("\033[32m[%s]the result = [%d]\033[0m\n",__FUNCTION__,result);
        return result;
}

int hex_to_ascii(char c, char d){
		printf("[%s]high=[%c],low=[%c]\n",__FUNCTION__,c,d);
        //int high = hex_to_int(c) * 16;
        //int low = hex_to_int(d);
		int high = hex2int(c) * 16;
		int low =hex2int(d);
		printf("[%s] the return[%d]\n",__FUNCTION__,high+low);
        return high+low;
}



int main(){
	
        const char* st = "68656c6c6f2140233132330505050505";
		char *ret = (char *)malloc(64);
        int length = strlen(st);
        int i;
        char buf = 0;
		printf("original data = [%s]\n",st);
        for(i = 0; i < length; i++){
                if(i % 2 != 0){
                        //printf("%c", hex_to_ascii(buf, st[i]));
						printf("i = %d\n",i);
						sprintf(ret,"%s%c",ret,hex_to_ascii(buf, st[i]));
                }else{
					
                        buf = st[i];
                }
        }
		printf("the result is [%s]\n",ret);
		
		for(i  =0; i< length; i++){
			
			
		}
}
