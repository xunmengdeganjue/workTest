#! /bin/bash

LocalIp1=11.0.0.6
secLocalIp1=11.0.0.110
LocalIp2=11.0.0.60
secLocalIp2=11.0.0.11
interface=eth0.5

echo "Address available with the port-------------------"

ip addr show $interface

echo "Assigning Ip's to vlan interface eth0.5"

ip addr flush dev $interface

ip addr add $LocalIp1/24 dev $interface     
ip addr add $LocalIp2/24 dev $interface
ip addr add $secLocalIp1/24 dev $interface     
ip addr add $secLocalIp2/24 dev $interface     

                                                                                                        
echo "Address newly assigned to the port-------------------"
                                                                                                        
                   
ip addr show $interface
