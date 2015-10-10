#! /bin/bash

DISKS=""
PATITIONS=""
SUB_DIRS=""

DISKS=""

PARTITIONS=""
#echo "$DISKS"
#echo "$PATITIONS"
get_disks(){

	DISKS=`ls /dev/sd[a-z]`
	echo "$DISKS"

}
get_partitions(){
	local dest_disk
	dest_disk=$1
	PARTITIONS=`fdisk -l $dest_disk |grep "/dev/sd[a-z][0-9]"|cut -d " " -f 1`
	echo $PARTITIONS
}
get_subfolders(){
	local dest_partition
	local dest_rootfolder
	dest_partition=$1
	dest_rootfolder=${dest_partition/dev/mnt}
	SUBFOLDERS=`ls $dest_rootfolder`
	echo $SUBFOLDERS
}



case $1 in

"getdisk")
	get_disks	
;;

"getpart")
	if [ -n "$2" ];then
#		echo "dest disk is $2"
		get_partitions $2
	fi
;;

"getfolder")
	if [  -n "$2" ];then
		get_subfolders $2
	fi
;;
*)
echo "USAGE"
echo -e "\t$0 <disks|partition|getfolder> [disk-name|partition-name]"
echo -e ""
echo -e "\t$0 getdisk                ---Get all of the disks fund in the system"
echo -e "\t$0 getpart disk-name      ---Get all the partition name of the dest disk"
echo -e "\t$0 getfolder part-name    ---Get all the subfolders of the given partition"

;;
esac
