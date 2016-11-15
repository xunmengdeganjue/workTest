#! /bin/bash

##check if the radiusd is running
echo -e "\033[32mStop the Radiusd if it is running.\033[0m"
ps -aux |grep radiusd |grep -vE "grep|sudo"
[ $? -eq 0 ] && sudo killall -9 radiusd


sudo ./uci_wag.sh





