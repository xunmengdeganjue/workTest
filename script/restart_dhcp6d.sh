#! /bin/bash
 
sudo killall /usr/local/sbin/dhcpd
if [ $? -eq 0 ];then
	echo "restart the dhcpd6 "
else
	echo "there is no dhcpd6 running"
fi

sleep 2

sudo /usr/local/sbin/dhcpd -6 -cf /etc/dhcp/dhcpd6.conf -lf /var/lib/dhcp/dhcpd6.leases eth1 -tf /tmp/dhcp6.log
[ $? -eq 0 ] &&  echo "\nThe dhcpd restart [\033[32mSUCCESSED\033[0m]\n"  || echo "\nThe dhcpd retart [\033[31mFAILED\033[0m]\n"

echo "\nTHE CONFIG:"
sudo cat /etc/dhcp/dhcpd6.conf 
