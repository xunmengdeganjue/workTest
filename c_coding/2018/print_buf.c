

#include<stdio.h>
#include<string.h>

#define NROWS 100
#define NCOLS 100
#define BUFSIZE (NROWS*(NCOLS-1))


static int buffer[BUFSIZE];
static int *bufptr = buffer;



void print(int n)
{
	if( bufptr == &buffer[BUFSIZE] ){
		/*some */
		static int row = 0;
		int *p;
		for( p = buffer+row; p <bufptr; p+=NROWS ){
			printnum( *p );
		}
		printnum( n );/*打印当前行的最后一个元素*/
		printnl();/*另起新的一行*/
		if( ++row==NROWS ){
				printpage();
				row = 0;	/*重置当前行号*/
				bufptr = buffer;/*重置指针bufptr*/
		}
	}else{
		*bufptr++ = n;
	}    
}

void flush()
{
	int row;
	int k = bufptr -buffer ; /*计算缓冲区中剩余项的数目*/
	if (k > NROWS){
		k = NROWS;
	}
	if( k > 0 ){
		for ( row = 0; row < k; row++ ){
			int *p;
			for ( p = buffer + row; p < buffer; p += NROWS ){
				printnum( *p );
			}
			printnl();

		}
		printpage();
	}
}

int main()
{
	





}


