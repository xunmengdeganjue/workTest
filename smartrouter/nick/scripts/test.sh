#! /bin/bash

P1="23434:123:124324::"
P2=""
P2=${P1:0-1}
#echo $P1 |awk -F":" '{print $NF}'


echo $P2
