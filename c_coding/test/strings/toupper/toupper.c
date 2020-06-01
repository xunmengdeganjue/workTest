#include<stdio.h>
#include<string.h>

int char_toupper( int c){
    if( 'z' >= c && c >= 'a' ){
        c = c + ('A' - 'a' );
    }
    return c;

}

/*使用宏定义，减少因函数调用而导致的系统开销*/
#define __toupper(c) (((c)>='a' && (c)<='z')?((c)+('A' - 'a')): (c))


void str_toupper( char *source, char *result ){
    
    int i = 0;
    char *ps = source;
    char *po = result;

    for(i = 0; i<strlen(source); i++){
        *po = char_toupper( (int)*ps );
        //*po = __toupper( *ps );
        ps++;
        po++;
    }


}







int main(int argc,char**argv){
    
    char source[256] = { 0 };
    char result[256] = { 0 };
    if(argc == 2){
        strcpy( source , argv[1] );
    }

    str_toupper(source,result);
    
    printf( "the [ %s ] toupper=[ %s ]\n", source,result );
   // putchar(char_toupper(source));
    printf("\n");
}






