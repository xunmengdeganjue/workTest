#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <libmnl/libmnl.h>

#include "nlexample.h"

int main ( void )
{
   char buf [ getpagesize( ) ] ;
   struct nlmsghdr *nlh ;
   struct mnl_socket *nl ;

   int ret , numbytes ;
   unsigned int seq , oper ;

   nlh = mnl_nlmsg_put_header ( buf ) ;
   nlh->nlmsg_type = NLEX_MSG_UPD;
   nlh->nlmsg_flags = NLM_F_REQUEST | NLM_F_ACK;
   nlh->nlmsg_seq = seq = time (NULL ) ;

   mnl_attr_put_u32( nlh ,NLE_MYVAR, 10 ) ;

   numbytes = mnl_nlmsg_get_len( nlh ) ;

   nl = mnl_socket_open(NETLINK_EXAMPLE ) ;
   if( nl == NULL) {
       perror( " mnl_socket_open " ) ;
       exit(EXIT_FAILURE ) ;
   }

   ret = mnl_socket_bind( nl , 0 , 0 ) ;
   if ( ret == -1){
       perror( " mnl_socket_bind " ) ;
       exit(EXIT_FAILURE ) ;
   }

   ret = mnl_socket_sendto ( nl , nlh , numbytes ) ;
   if( ret == -1) {
       perror( " mnl_socket_send " ) ;
       exit(EXIT_FAILURE ) ;
   }

   ret = mnl_socket_recvfrom( nl , buf , sizeof( buf ) ) ;
   if( ret == -1){
       perror( " recvfrom " ) ;
       exit(EXIT_FAILURE ) ;
   }

   ret = mnl_cb_run( buf , ret , seq ,NULL,NULL ) ;
   if ( ret == -1){
       perror( " callback " );
       exit(EXIT_FAILURE );
   }
   mnl_socket_close( nl );
}

