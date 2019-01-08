#! /bin/bash


LOG="/tmp/trap.log"





singe_info(){

	echo -e "\033[33m$*\033[0m" >> $LOG

}


debug_info(){

	echo -e "\033[32m$*\033[0m" >> $LOG

}

trap " singe_info \"get the signal 10\" ;exit 1" 10


while true;
do
	debug_info "demon looping!"
	sleep 1

done


