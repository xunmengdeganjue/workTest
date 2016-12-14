#! /bin/bash

echo "Starting chilli in debug mode"

read -p "Do You want to save the logs ( y/n )" res

if [ $res == 'y' ]
then
	echo "*******New Instance******" >> chilli.log
	chilli -fd -c /etc/chilli.conf >> chilli.log 2>&1
fi
