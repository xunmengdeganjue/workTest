#! /bin/sh

###
#usage: storageinfowrite disk dest_blkdev disk_totalsize disk_freesize
#eg:    storageinfowrite $dis $dest_blkdev $disk_totalsize $disk_freesize
storageinfowrite(){
	disk=$1
	dest_blkdev=$2
	disk_totalsize=$3
	disk_freesize=$4
	
	#get the free size end
	#############################################################
	#The usb1 present the first usb port(right side usb port) ##maybe the usb2 is the usb3.0 with the port 1
	#The usb3 present the second usb port(back side usb port) ##maybe the usb4 is the usb3.0 with the prot 2
	usb_num=`grep -rn "config usb-storage" /etc/config/devices -c`
	echo "FUNC:usb_addinfo:ther is $usb_num usb-storage" >> /tmp/mount.log
	if [ $usb_num -eq 1 ];then
		port_exit=`uci get devices.@usb-storage[0].port`
		port_disk=`uci get devices.@usb-storage[0].disk`
		
		echo "FUNC:usb_addinfo:the port_exit is [$port_exit] the disk is [$port_disk]" >>/tmp/mount.log
		
		if [ $port_exit -eq 2 -a "$port_disk" != "$disk" ];then 
			echo "FUNC:usb_addinfo:the port 2 is already been used" >> /tmp/mount.log                                                      
			if [ -d /sys/bus/usb/devices/usb1/1-1 -o -d /sys/bus/usb/devices/usb2/2-1 ];then
				#deal with 
				[ -d /sys/bus/usb/devices/usb1/1-1 ] && usb_led_deal 1 2.0 
				[ -d /sys/bus/usb/devices/usb2/2-1 ] && usb_led_deal 1 3.0

				echo "there is a usb1-1 or usb2-1" >>/tmp/mount.log
				usb1_name=`cat /sys/$dest_blkdev/device/vendor`
				usb1_name=`echo $usb1_name`
				usb1_num=`cat /sys/$dest_blkdev/device/model`
				usb1_num=`echo $usb1_num`
				disk1_name=$usb1_name"_"$usb1_num
				
				disk_name_deal "$disk1_name"

				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="1"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
			fi
		elif [ $port_exit -eq 2 -a "$port_disk" == "$disk" ];then
			echo "FUNC:usb_addinfo:the port 2 is already been used" >> /tmp/mount.log   
			 if [ -d /sys/bus/usb/devices/usb3/3-1 -o -d /sys/bus/usb/devices/usb4/4-1 ];then
				echo "there is a usb3-1 or usb4-1" >>/tmp/mount.log
				usb2_name=`cat /sys/$dest_blkdev/device/vendor`
				usb2_name=`echo $usb2_name`
				usb2_num=`cat /sys/$dest_blkdev/device/model`
				usb2_num=`echo $usb2_num`	
				disk2_name=$usb2_name"_"$usb2_num
				
				disk_name_deal "$disk2_name"

				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="2"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
				#deal with 
				[ -d /sys/bus/usb/devices/usb3/3-1 ] && usb_led_deal 2 2.0 
				[ -d /sys/bus/usb/devices/usb4/4-1 ] && usb_led_deal 2 3.0
			fi		
		elif [ $port_exit -eq 1 -a "$port_disk" != "$disk" ];then
			echo "FUNC:usb_addinfo:the port 1 is already been used the disk is [$disk] [$port_disk]" >> /tmp/mount.log   
			if [ -d /sys/bus/usb/devices/usb3/3-1 -o -d /sys/bus/usb/devices/usb4/4-1 ];then
				echo "there is a usb3-1" >>/tmp/mount.log
				usb2_name=`cat /sys/$dest_blkdev/device/vendor`
				usb2_name=`echo $usb2_name`
				usb2_num=`cat /sys/$dest_blkdev/device/model`
				usb2_num=`echo $usb2_num`
				disk2_name=$usb2_name"_"$usb2_num
				
				disk_name_deal "$disk2_name"
				
				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="2"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
				#deal with
				[ -d /sys/bus/usb/devices/usb3/3-1 ] && usb_led_deal 2 2.0
				[ -d /sys/bus/usb/devices/usb4/4-1 ] && usb_led_deal 2 3.0
			fi
		elif [ $port_exit -eq 1 -a "$port_disk" == "$disk" ];then
			echo "FUNC:usb_addinfo:the port 1 is already been used the disk is [$disk] [$port_disk]" >> /tmp/mount.log 
			if [ -d /sys/bus/usb/devices/usb1/1-1 -o -d /sys/bus/usb/devices/usb2/2-1];then
				echo "there is a usb1-1" >>/tmp/mount.log
				usb1_name=`cat /sys/$dest_blkdev/device/vendor`
				usb1_name=`echo $usb1_name`
				usb1_num=`cat /sys/$dest_blkdev/device/model`
				usb1_num=`echo $usb1_num`	
				disk1_name=$usb1_name"_"$usb1_num
				
				disk_name_deal "$disk1_name"
				
				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="1"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
				#deal with usb led
				[ -d /sys/bus/usb/devices/usb1/1-1 ] && usb_led_deal 1 2.0
				[ -d /sys/bus/usb/devices/usb2/2-1 ] && usb_led_deal 1 3.0
			fi
		fi
	elif [ $usb_num -eq 2 ];then
		echo "FUNC:usb_addinfo:#####there are 2 port exist. $dest_blkdev " >> /tmp/mount.log	
		tag_disk_name=`cat /sys/$dest_blkdev/device/vendor`
		tag_disk_name=`echo $tag_disk_name`
		tag_disk_num=`cat /sys/$dest_blkdev/device/model`
		tag_disk_num=`echo $tag_disk_num`

		tag_disk=$tag_disk_name"_"$tag_disk_num
		disk_name_deal "$tag_disk"
		
		echo "FUNC:usb_addinfo:change the dest disk $disk_name" >> /tmp/mount.log
		uci set devices.$disk_name.totalsize=$disk_totalsize
		uci set devices.$disk_name.freesize=$disk_freesize
		echo "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" >> /tmp/mount.log
		
	else 
		##there is no usb-storage exist already.
	
		##check if there is a printer
		printer_port=`uci get devices.@printer[0].port`
		if [ -n "$printer_port" ];then
			echo "FUNC:usb_addinfo:There is a printer mounted on port $printer_port" >> /tmp/mount.log
			###there is a printer mounted on the router.
			if [ $printer_port -eq 2 -a -d /sys/bus/usb/devices/usb1/1-1 -o -d /sys/bus/usb/devices/usb2/2-1 ];then
				echo "there is no any usb-storage before." >>/tmp/mount.log
				echo "there is a usb1-1" >>/tmp/mount.log
				usb1_name=`cat /sys/$dest_blkdev/device/vendor`
				usb1_name=`echo $usb1_name`	
				usb1_num=`cat /sys/$dest_blkdev/device/model`
				usb1_num=`echo $usb1_num`				
				disk1_name=$usb1_name"_"$usb1_num
				
				disk_name_deal "$disk1_name"
				
				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="1"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
				
				#deal with usb led
				[ -d /sys/bus/usb/devices/usb1/1-1 ] && usb_led_deal 1 2.0
				[ -d /sys/bus/usb/devices/usb2/2-1 ] && usb_led_deal 1 3.0
		
			elif [ $printer_port -eq 1 -a -d /sys/bus/usb/devices/usb3/3-1 -o -d /sys/bus/usb/devices/usb4/4-1 ];then
				echo "there is a usb3-1" >>/tmp/mount.log
				usb2_name=`cat /sys/$dest_blkdev/device/vendor`
				usb2_name=`echo $usb2_name`
				usb2_num=`cat /sys/$dest_blkdev/device/model`
				usb2_num=`echo $usb2_num`
				disk2_name=$usb2_name"_"$usb2_num
				
				disk_name_deal "$disk2_name"
				
				uci set devices.$disk_name="usb-storage"
				uci set devices.$disk_name.name=$disk_name
				uci set devices.$disk_name.port="2"
				uci set devices.$disk_name.disk=$disk
				uci set devices.$disk_name.totalsize=$disk_totalsize
				uci set devices.$disk_name.freesize=$disk_freesize
				
				#deal with usb led
				[ -d /sys/bus/usb/devices/usb3/3-1 ] && usb_led_deal 2 2.0
				[ -d /sys/bus/usb/devices/usb4/4-1 ] && usb_led_deal 2 3.0
			fi
		else
			echo "FUNC:usb_addinfo:There is no printer mounted on router" >> /tmp/mount.log
			if [ -d /sys/bus/usb/devices/usb1/1-1 -o -d /sys/bus/usb/devices/usb2/2-1 ];then
					echo "there is no any usb-storage before." >>/tmp/mount.log
					echo "there is a usb1-1" >>/tmp/mount.log
					usb1_name=`cat /sys/$dest_blkdev/device/vendor`
					usb1_name=`echo $usb1_name`	
					usb1_num=`cat /sys/$dest_blkdev/device/model`
					usb1_num=`echo $usb1_num`				
					disk1_name=$usb1_name"_"$usb1_num
					
					disk_name_deal "$disk1_name"
					
					uci set devices.$disk_name="usb-storage"
					uci set devices.$disk_name.name=$disk_name
					uci set devices.$disk_name.port="1"
					uci set devices.$disk_name.disk=$disk
					uci set devices.$disk_name.totalsize=$disk_totalsize
					uci set devices.$disk_name.freesize=$disk_freesize
					
					#deal with usb led
					[ -d /sys/bus/usb/devices/usb1/1-1 ] && usb_led_deal 1 2.0
					[ -d /sys/bus/usb/devices/usb2/2-1 ] && usb_led_deal 1 3.0
			
			elif [ -d /sys/bus/usb/devices/usb3/3-1 -o -d /sys/bus/usb/devices/usb4/4-1 ];then
					echo "there is a usb3-1" >>/tmp/mount.log
					usb2_name=`cat /sys/$dest_blkdev/device/vendor`
					usb2_name=`echo $usb2_name`
					usb2_num=`cat /sys/$dest_blkdev/device/model`
					usb2_num=`echo $usb2_num`
					disk2_name=$usb2_name"_"$usb2_num
					
					disk_name_deal "$disk2_name"
					
					uci set devices.$disk_name="usb-storage"
					uci set devices.$disk_name.name=$disk_name
					uci set devices.$disk_name.port="2"
					uci set devices.$disk_name.disk=$disk
					uci set devices.$disk_name.totalsize=$disk_totalsize
					uci set devices.$disk_name.freesize=$disk_freesize
					#deal with usb led
					[ -d /sys/bus/usb/devices/usb3/3-1 ] && usb_led_deal 2 2.0
					[ -d /sys/bus/usb/devices/usb4/4-1 ] && usb_led_deal 2 3.0
			fi
		fi
	fi
}
###
#usage: usb_led_deal usb_port usb_type 
#eg:    usb_led_deal 2 3.0
#
usb_led_deal(){
	if [ -d /sys/class/leds/ap148:blue:usb1 ]; then
		port_number=$1
		usb_version=$2
		local dev
		local name
		local sysfs
		if [ $port_number -eq 1 -a "$usb_version" = "2.0" ];then
			dev="1-1"
			name="USB1"
			sysfs="ap148:blue:usb1"	
		elif [ $port_number -eq 2 -a "$usb_version" = "2.0" ];then
			dev="3-1"
			name="USB2"
			sysfs="ap148:blue:usb2"	
		elif [ $port_number -eq 1 -a "$usb_version" = "3.0" ];then
			dev="2-1"
			name="USB1"
			sysfs="ap148:blue:usb1"	
		elif [ $port_number -eq 2 -a "$usb_version" = "3.0" ];then
			dev="4-1"
			name="USB2"
			sysfs="ap148:blue:usb2"	
		fi
	
		uci set system."led"_${port_number}="led"	
		uci set system."led"_${port_number}.name="$name"
		uci set system."led"_${port_number}.sysfs="$sysfs"
		uci set system."led"_${port_number}.trigger="usbdev"
		uci set system."led"_${port_number}.dev="$dev"
		uci set system."led"_${port_number}.interval="50"
		#uci commit system
	
		#/etc/init.d/led restart
	else
		echo > /dev/null;
	fi

}