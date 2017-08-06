#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <libmnl/libmnl.h>

#include "nlexample.h"

static int
data_cb ( const struct nlmsghdr * nlh , void * data )
{
    struct nlattr * tb [NLE MAX+1];
    struct nlattr * attr;

    mnl_attr_parse( nlh , tb ,NLE_MAX ) ;
    if( tb [NLE_MYVAR] )
        printf( "myvar = %u\n" , mnl_attr_get_u32( tb [NLE_MYVAR] ) ) ;

    return MNL_CB_OK;
}

int main ( )
{
   struct mnl_socket * nl ;
   char buf [ getpagesize( ) ] ;
   struct nlmsghdr *nlh = ( struct nlmsghdr *) buf ;
   int ret;

   nl = mnl_socket_open( NETLINK_EXAMPLE ) ;
   if ( nl == NULL) {
       perror( " mnl_socket_open " ) ;
       exit(EXIT_FAILURE );
   }

   i f ( mnl_socket_bind( nl ,NLEX_GRP_MYVAR, 0 ) < 0 ){
       perror( " mnl_socket_bind " ) ;
       exit(EXIT_FAILURE ) ;
   }

   ret = mnl_socket_recvfrom ( nl , buf , sizeof( buf ) ) ;
   while ( ret > 0 ){
       ret = mnl_cb_run ( buf , ret , 0 , data_cb ,NULL ) ;
       if( ret <= 0 )
           break ;
       ret = mnl_socket_recvfrom ( nl , buf , sizeof( buf ) );
   }
   if( ret == -1){
       perror( " error " );
       exit(EXIT_FAILURE );
   }

   mnl_socket_close( nl );

   return 0 ;
}

