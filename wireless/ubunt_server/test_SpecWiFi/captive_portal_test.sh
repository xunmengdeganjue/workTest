#! /bin/bash 

##deal with the network interface

sudo ./for_vlan_clear.sh

##start the chilli

sudo /etc/init.d/chilli start


##start the freeradius

sudo /etc/init.d/freeradius start





