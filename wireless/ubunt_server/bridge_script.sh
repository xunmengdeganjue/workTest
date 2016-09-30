#! /bin/bash

#IP6=true
echo "IP6 val is $IP6"
if [ -z ${IP6+x} ];
then
        echo "IP6 not set"
	LOCAL_EP=11.0.0.60
	REMOTE_EP=11.0.0.1
	SEC_LOCAL_EP=11.0.0.11
#	BR_IP=14.0.0.2
else
        LOCAL_EP=2001:db9::4
        REMOTE_EP=2001:db9::1
        SEC_LOCAL_EP=2001:db9::5

#        BR_IP=2001:db9::2
fi

BRCOMNAME=br-clr_com
BRTAPNAME=br-clr_comtap
GRENAME=gretap3

echo "Removing Previous Configurations"
echo "Local Endpoint : $LOCAL_EP"
echo "Remote Endpoint : $REMOTE_EP"

echo "Bridge IP : $BRI_IP"
echo "Gre Tap name : $GRENAME"

brctl delif $BRTAPNAME $GRENAME
brctl delif $BRTAPNAME veth2

ip link del dev $GRENAME

brctl delif $BRCOMNAME veth3

#ip addr del $BR_IP/24 dev $BRCOMNAME
ip link del dev veth3

ifconfig $BRCOMNAME down
brctl delbr $BRCOMNAME

ifconfig $BRTAPNAME down
brctl delbr $BRTAPNAME
if [ -z ${IP6+x} ];
then
ip addr del $LOCAL_EP/24 dev enp7s0.5
else
ip addr del $LOCAL_EP/64 dev enp7s0.5
fi
echo ">>>>>>>>>Done>>>>>>>>"
echo "Now creating $BRTAPNAME"
vconfig add enp7s0 5
if [ -z ${IP6+x} ];
then
	ip addr add $LOCAL_EP/24 dev enp7s0.5
else
	ip -6 addr add $LOCAL_EP/64 dev enp7s0.5

fi

brctl addbr $BRTAPNAME

if [ -z ${IP6+x} ];
then
	ip link add $GRENAME type gretap local $LOCAL_EP remote $REMOTE_EP
	ip link set dev $GRENAME up 
else
	ip -6 link add $GRENAME type ip6gretap local $LOCAL_EP remote $REMOTE_EP
	ip -6 link set dev $GRENAME up 
fi

brctl addif $BRTAPNAME $GRENAME

ip link add veth2 type veth peer name veth3

brctl addif $BRTAPNAME veth2

ifconfig veth2 up
ifconfig veth3 up
ifconfig $BRTAPNAME up

echo "Now Cretaing $BRCOMNAME"

brctl addbr $BRCOMNAME

brctl addif $BRCOMNAME veth3

#ip addr add $BR_IP/24 dev $BRCOMNAME 

ifconfig $BRCOMNAME up

echo "******---------- Done ------****"

