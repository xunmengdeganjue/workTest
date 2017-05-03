#! /bin/bash 

sudo killall chilli
sudo killall freeradius
sudo killall apache2



##deal with the network interface

sudo ./for_vlan_clear.sh start


##start the apache2
sudo /etc/init.d/apache2 start

##start the chilli

sudo /etc/init.d/chilli start


##start the freeradius

sudo /etc/init.d/freeradius start





