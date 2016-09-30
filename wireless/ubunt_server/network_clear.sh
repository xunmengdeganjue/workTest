#! /bin/bash
BRCOMNAME=br-clr_com
BRTAPNAME=br-clr_comtap
GRENAME=gretap3

#IP6=true
echo "IP6 val is $IP6"
if [ -z ${IP6+x} ]; then
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


if [ -z ${IP6+x} ]; then
	ip addr del $LOCAL_EP/24 dev enp7s0.5
else
	ip addr del $LOCAL_EP/64 dev enp7s0.5
fi


ifconfig $BRCOMNAME down
ifconfig $BRTAPNAME down
ifconfig veth0 down
ifconfig veth1 down
ifconfig veth2 down 
ifconfig veth3 down
