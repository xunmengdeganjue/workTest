#! /bin/bash

LOG=$HOME/kernel_building.log

#:<<eof
make package/kernel/clean |tee -a $LOG

make package/kernel/prepare |tee -a $LOG

#make package/kernel/compile V=s |tee 
echo "" >> $LOG 
echo "`date +"%F-%H:%M:%S"` module compiling of the kernel & button_hotplug" |tee -a $LOG
make V=s |tee -a $LOG


sh createimg.sh |tee -a $LOG

