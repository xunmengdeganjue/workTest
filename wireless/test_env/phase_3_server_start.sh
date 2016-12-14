#! /bin/bash

##check if the radiusd is running
echo -e "\033[32mStop the Radiusd if it is running.\033[0m"
ps -aux |grep radiusd |grep -vE "grep|sudo"
[ $? -eq 0 ] && sudo killall -9 radiusd

echo -e "\033[32mDeal with the related bridges.\033[0m"
sudo ./bridge_script.sh

#sudo /etc/init.d/apache2 restart


##check if the cooval chilli is running
echo -e "\033[32mStop the Coova Chilli if it is running.\033[0m"
ps -aux |grep chilli |grep -vE "grep|sudo|tail"
[ $? -eq 0 ] && sudo killall -9 chilli


echo -e "\033[32m Starting chilli\033[0m"
sudo /etc/init.d/chilli start

echo -e "\033[32m Starting Radiusd\033[0m"
sudo rm -rf /usr/local/var/log/radutmp
sudo mkdir -m 700 -p /usr/local/var/log/radutmp 
sudo chown -R radiusd:radiusd /usr/local/var/log/radutmp
##operation of the folder radutmp is just to avoid a error while the radiusd is running


sleep 1
#sudo radiusd -Xx &
sudo /etc/init.d/freeradius restart





