#include <stdio.h>
#include <string.h>
/*本程序实现将16进制的字符串转化成普通的字符串，比如将68656c6c6f2140233132330505050505
这串16进制字符串转换成 'hello!@#123'
请注意，16进制字符串字母目前只支持全部为大写的情况，所以需要将小写的字母转换成大写方可
*/


int hex_to_int(char c){
        int first = c / 16 - 3;
        int second = c % 16;
        int result = first*10 + second;
        if(result > 9) result--;
        return result;
}

int hex_to_ascii(char c, char d){
        int high = hex_to_int(c) * 16;
        int low = hex_to_int(d);
        return high+low;
}

int main(){
	
        const char* st = "68656C6C6F2140233132330505050505";
        int length = strlen(st);
        int i;
        char buf = 0;
        for(i = 0; i < length; i++){
                if(i % 2 != 0){
                        printf("%c", hex_to_ascii(buf, st[i]));
                }else{
                        buf = st[i];
                }
        }
}
