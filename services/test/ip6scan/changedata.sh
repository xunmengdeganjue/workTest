#! /bin/bash

while [ 1 ];
do
	MAC=`echo "$RANDOM"`
	IP6=`echo "$RANDOM"`
	MAC="aa:bb:cc:dd:ee:ff"
	
	mac1=${RANDOM:0:2}
	mac2=${RANDOM:0:2}
	mac3=${RANDOM:0:2}
	mac4=${RANDOM:0:2}
	mac5=${RANDOM:0:2}
	mac6=${RANDOM:0:2}	
	MAC="$mac1:$mac2:$mac3:$mac4:$mac5:$mac6"
	randstring=`date +%s%N | md5sum | head -c 2`
	
	ip1=${RANDOM:0:2}
	ip2=${RANDOM:0:2}
	ip3=${RANDOM:0:2}
	ip4=${RANDOM:0:2}
	ip5=${RANDOM:0:2}
	ip6=${RANDOM:0:2}
	ip7=${RANDOM:0:2}
	ip8=${RANDOM:0:2}
	ip9=${RANDOM:0:2}
	ip10=${RANDOM:0:2}
	ip11=${RANDOM:0:2}
	ip12=${RANDOM:0:2}
	ip13=${RANDOM:0:2}
	ip14=${RANDOM:0:2}
	ip15=${RANDOM:0:2}
	ip16=${RANDOM:0:2}

	IP6="$ip1:$ip2:$ip3:$ip4:$ip5:$ip6:$ip7:$ip8:$ip9:$ip10:$ip11:$ip12:$ip13:$ip14:$ip15:$ip16"
	
	echo "$MAC|$IP6" > /tmp/ip6addr


done
