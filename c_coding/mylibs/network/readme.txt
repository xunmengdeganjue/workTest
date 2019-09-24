
--------------------------------
2019-09-23:add the ipcheck.c

Description：
Calculate the network segment of the destination IP address based on the destination IP address and subnet mask.
Compile:
    gcc -o checkip ipcheck.c
Usage:
./checkip

    please enter the ip:
    192.168.12.11
    please enter the mask:
    255.255.255.0
    NET_IP = 185379008
    NET_MASK = 16777215
    ipsegment = 829632
    ip segment is = [192.168.12.0]

------------------------
Description:
    get ip address of the internet interface.
Compile:
    gcc -o getifinfo getifinfo.c
usage:
./getifinfo


