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

#sudo /etc/init.d/chilli start

echo -e "\033[31m Starting chilli\033[0m"

sudo /etc/init.d/chilli start

echo -e "\033[31m Starting Radiusd\033[0m"
sudo radiusd -Xx &





