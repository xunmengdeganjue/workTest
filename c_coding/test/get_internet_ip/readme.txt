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