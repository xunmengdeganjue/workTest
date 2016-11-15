#! /bin/bash

GlobalIp=10.42.0.1
LocalIp1=10.42.0.2
secLocalIp1=10.42.0.3
LocalIp2=10.42.0.4
secLocalIp2=10.42.0.5
interface=eth0

echo "Address available with the interface-------------------"

ip addr show $interface

echo "Assigning Ip's to wlan interface eth0"

ip addr flush dev $interface

ip addr add $GlobalIp/24 dev $interface     
ip addr add $LocalIp1/24 dev $interface     
ip addr add $LocalIp2/24 dev $interface
ip addr add $secLocalIp1/24 dev $interface     
ip addr add $secLocalIp2/24 dev $interface     

                                                                                                        
echo "Address newly assigned to the interface-------------------"
                                                                                                        
                   
ip addr show $interface
