#include<stdio.h>
#include <netinet/icmp6.h>
#include <ifaddrs.h>

#define ALL_IPV6_NODES {{{0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01}}}
/*
typedef struct in6_addr {
  union {
    u_char  Byte[16];
    u_short Word[8];
  } u;
} IN6_ADDR, *PIN6_ADDR, FAR *LPIN6_ADDR;
*/


#define STRING "hello"

int main ()
{

	IN6_ADDR=ALL_IPV6_NODES;
	printf("then ALL_IPV6_NODES is %s\n" ,IN6_ADDR.u);
	return 0;

}
