DESCRIPTION:
	get the ip-address of the internet network interface of the pc.
COMPILE:
$ gcc -o getifaddr get_if_ip.c -DDEBUG -DIF_LOOKUP
RUN:
$ ./getifaddr

RETURN:
get_if_ip.c,88: eth0: 10.8.4.16
The address of the interface eth0  is [10.8.4.16]

																						NICK
																						2016-07-26 
IPv4套接字地址结构，通常也称“网际套接字地址结构”，它以sockaddr_in命名，定义在					<netinet/in.h>头文件中：
struct in_addr{
	in_addr_t s_addr;			/*32-bit IPv4 address*/
								/*network byte ordered*/
}
struct sockaddr_in
{
	short sin_family;			/*Address family一般来说AF_INET（地址族）PF_INET（协议族）*/ 
	unsigned short sin_port;	/*Port number(必须要采用网络数据格式,普通数字可以用htons()函数转换成网络数据格式的数字)*/
	struct in_addr sin_addr;	/*IP address in network byte order（Internet address）*/
	unsigned char sin_zero[8];	/*Same size as struct sockaddr没有实际意义,只是为了　跟SOCKADDR结构在内存中对齐*/
 
};

struct sockaddr
{
	unsigned short sa_family;	/*address family,AF_xxx*/
	char sa_data[14];			/*14bytes of protocol address*/
};	

ifreq结构定义在/usr/include/net/if.h，用来配置ip地址，激活接口，配置MTU等接口信息的。其中包含了一个接口的名 字和具体内容——（是个共用体，有可能是IP地址，广播地址，子网掩码，MAC号，MTU或其他内容）。ifreq包含在ifconf结构中。而 ifconf结构通常是用来保存所有接口的信息的。																					
struct ifreq
{
#define IFHWADDRLEN 6
 union
 {
  char ifrn_name[IFNAMSIZ];  
 } ifr_ifrn;
 
 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  struct sockaddr ifru_netmask;
  struct  sockaddr ifru_hwaddr;
  short ifru_flags;
  int ifru_ivalue;
  int ifru_mtu;
  struct  ifmap ifru_map;
  char ifru_slave[IFNAMSIZ]; 
  char ifru_newname[IFNAMSIZ];
  void __user * ifru_data;
  struct if_settings ifru_settings;
 } ifr_ifru;
};
#define ifr_name ifr_ifrn.ifrn_name 
#define ifr_hwaddr ifr_ifru.ifru_hwaddr 
#define ifr_addr ifr_ifru.ifru_addr 
#define ifr_dstaddr ifr_ifru.ifru_dstaddr 
#define ifr_broadaddr ifr_ifru.ifru_broadaddr 
#define ifr_netmask ifr_ifru.ifru_netmask 
#define ifr_flags ifr_ifru.ifru_flags 
#define ifr_metric ifr_ifru.ifru_ivalue 
#define ifr_mtu  ifr_ifru.ifru_mtu 
#define ifr_map  ifr_ifru.ifru_map 
#define ifr_slave ifr_ifru.ifru_slave 
#define ifr_data ifr_ifru.ifru_data 
#define ifr_ifindex ifr_ifru.ifru_ivalue 
#define ifr_bandwidth ifr_ifru.ifru_ivalue    
#define ifr_qlen ifr_ifru.ifru_ivalue 
#define ifr_newname ifr_ifru.ifru_newname 
#define ifr_settings ifr_ifru.ifru_settings 