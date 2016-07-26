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