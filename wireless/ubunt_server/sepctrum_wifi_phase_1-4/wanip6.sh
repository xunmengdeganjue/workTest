#! /bin/bash

GlobalIp=2001:db1::9
LocalIp1=2001:db1::2
secLocalIp1=2001:db1::3
LocalIp2=2001:db1::4
secLocalIp2=2001:db1::5
interface=eth0

echo "Address available with the interface-------------------"

ip addr show $interface

echo "Assigning Ip's to vlan interface eth0"

ip addr flush dev $interface

ip -6 addr add $GlobalIp/64 dev $interface     
ip -6 addr add $LocalIp1/64 dev $interface     
ip -6 addr add $LocalIp2/64 dev $interface
ip -6 addr add $secLocalIp1/64 dev $interface     
ip -6 addr add $secLocalIp2/64 dev $interface     

                                                                                                        
echo "Address newly assigned to the port-------------------"
                                                                                                        
                   
ip addr show $interface
