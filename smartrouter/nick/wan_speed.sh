#! /bin/sh

delay=4
odd_upbyte=""
odd_dobyte=""
even_upbyte=""
even_downbyte=""

upspeed=""
downspeed=""
info=""

if [ ! -f "/tmp/speed.txt" ];then
	echo "create a new speed.txt"
	touch /tmp/speed.txt
	echo "{" > /tmp/speed.txt
	echo "\"Upload\":[]," >> /tmp/speed.txt
	echo "\"Download\":[]," >> /tmp/speed.txt
	echo "\"TimePoint\":[]" >> /tmp/speed.txt
	echo "}" >> /tmp/speed.txt
	   
fi

i=0
j=0
k=0
loop=1

first_upbyte=0
first_downbyte=0

while [ $loop -eq 1 ]
do
	if [ $j -gt 5 ];then
		j=0
		let k++
	fi
	if [ $k -gt 23 ];then
		k=0
	fi
	echo "hello"
	sleep $delay    ##here will change the 2 to 600.
	##get the data of the eth0
	if [ $i -ne 0 ];then
	
		ret=$(($i%2))
		if [ $ret -eq 0 ];then
			echo "meet the even time"  
			even_upbyte=`ubus call network.device status '{"name":"eth0"}' |grep tx_bytes|cut -d":" -f2 |cut -d"," -f1`
			even_downbyte=`ubus call network.device status '{"name":"eth0"}' |grep rx_bytes|cut -d":" -f2 |cut -d"," -f1`
			even_upbyte=`echo $even_upbyte`
			even_downbyte=`echo $even_downbyte`
			echo "The even time upload data:$even_upbyte[bytes]"
			echo "The even time download data:$even_downbyte[bytes]"
			
			even_updata=`expr $even_upbyte - $odd_upbyte`
			even_downdata=`expr $even_downbyte - $odd_downbyte`
			echo "the even updata is [$even_updata]"
			echo "the even downdata is [$even_downdata]"
			
			upspeed=`awk 'BEGIN{printf "%.2f",'$even_updata'/(1024*'$delay')}'`
			downspeed=`awk 'BEGIN{printf "%.2f",'$even_downdata'/(1024*'$delay')}'`
			if [ $k -gt 9 ];then
				timepoint=$k":"$j"0"
			else
				timepoint="0"$k":"$j"0"
			fi
			                                                                                                                                                 
			echo "the $i time even upspeed is [$upspeed]"
			echo "the $i time even downspeed is [$downspeed]"
			echo "the $i time even timepoint is [$timepoint]"
			
		else
			echo "meet the odd time"
			odd_upbyte=`ubus call network.device status '{"name":"eth0"}' |grep tx_bytes|cut -d":" -f2 |cut -d"," -f1`
			odd_downbyte=`ubus call network.device status '{"name":"eth0"}' |grep rx_bytes|cut -d":" -f2 |cut -d"," -f1`
			odd_upbyte=`echo $odd_upbyte`
			odd_downbyte=`echo $odd_downbyte`
			echo "The odd time upload data:$odd_upbyte[bytes]"
			echo "The odd time download data:$odd_downbyte[bytes]"
			if [ $i -eq 1 ];then
				echo "calculate the speed for first time"
				odd_updata=`expr $odd_upbyte - $first_upbyte`
				#odd_updata=`awk 'BEGIN{printf "%2d", '$odd_upbyte'-'$first_upbyte'}'`
				echo "odd_upbyte is [$odd_upbyte]"
				echo "first_upbyte is [$first_upbyte]"
				echo "odd_downbyte is [$odd_downbyte]"
				echo "the odd_updata is [$odd_updata]"
				
				odd_downdata=`expr $odd_downbyte - $first_downbyte`
				upspeed=`awk 'BEGIN{printf "%.2f",'$odd_updata'/(1024*'$delay')}'`
				downspeed=`awk 'BEGIN{printf "%.2f",'$odd_downdata'/(1024*'$delay')}'`
				timepoint="0"$k":"$j"0"
				echo "the timepoint is [$timepoint]"
				
			else
				echo
				odd_updata=`expr $odd_upbyte - $even_upbyte`
				odd_downdata=`expr $odd_downbyte - $even_downbyte`
				echo "the odd_update is [$odd_updata]"
				upspeed=`awk 'BEGIN{printf "%.2f",'$odd_updata'/(1024*'$delay')}'`
				echo "the odd_upspeed is [$odd_upspeed]"
				downspeed=`awk 'BEGIN{printf "%.2f",'$odd_downdata'/(1024*'$delay')}'`
				if [ $k -gt 9 ];then
					timepoint=$k":"$j"0"
				else
					timepoint="0"$k":"$j"0"
				fi
				  
			fi
			echo " the $i time upspeed [$odd_upspeed]"
			echo " the $i time downspeed [$odd_downspeed]"
			echo " the $i time timpoint [$timepoint]"
		fi
	else
		first_upbyte=`ubus call network.device status '{"name":"eth0"}' |grep tx_bytes|cut -d":" -f2 |cut -d"," -f1`
		first_downbyte=`ubus call network.device status '{"name":"eth0"}' |grep rx_bytes|cut -d":" -f2 |cut -d"," -f1`
		first_upbyte=`echo $first_upbyte`
		first_downbyte=`echo $first_downbyte`
		echo "the i is $i first_upbyte is [$first_upbyte]"
		echo "the i is $i first_downbyte is [$first_downbyte]"
			
	fi
	##write the data to the data hold file
	#upspeed
	#upload=`cat /tmp/speed.txt|grep "Upload"`
	#echo "the upload data is $upload"
	#echo "AAAAAAAAAAA ${upload:9:2}"
	if [ $i -le 143 ];then
		upload=`cat /tmp/speed.txt|grep "Upload"`
		#echo "the upload data is $upload"
		[ ${upload:9:2} == "[]" ] && upload=${upload%]*}${upspeed}"]," || upload=${upload%]*}","${upspeed}"],"
		echo "the dealed upload data is[---|$upload|---]"
		num=`grep -n "Upload" /tmp/speed.txt|cut -d":" -f1`
		echo "the Upload is the $num line"
		sed -i "${num}c${upload}" /tmp/speed.txt
		echo "write the data done"
	
		download=`cat /tmp/speed.txt|grep "Download"`
		[ ${download:11:2} == "[]" ] && download=${download%]*}${downspeed}"],"||download=${download%]*}","${downspeed}"],"
		num=`grep -n "Download" /tmp/speed.txt |cut -d":" -f1`
		sed -i "${num}c${download}" /tmp/speed.txt
		echo "write the download over"
	
		timedot=`cat /tmp/speed.txt|grep "TimePoint"`
		[ ${timedot:12:2} == "[]" ] && timedot=${timedot%]*}${timepoint}"]"||timedot=${timedot%]*}","${timepoint}"]"
		num=`grep -n "TimePoint" /tmp/speed.txt |cut -d":" -f1`
		sed -i "${num}c${timedot}" /tmp/speed.txt
		echo "write the timepoint over"
	else
		upload=`cat /tmp/speed.txt |grep "Upload"`	
		num=`grep -n "Upload" /tmp/speed.txt|cut -d":" -f1`
		upload=${upload%]*}","${upspeed}"],"
		head_upload=`echo $upload|cut -d"[" -f1`
		tmp_upload=`echo $upload|cut -d "[" -f2`
		##delete the first data
		tmp_upload=${tmp_upload#*,}
		echo "tmp_upload is $tmp_upload"
		upload=${head_upload}"["${tmp_upload}
		sed -i "${num}c${upload}" /tmp/speed.txt
		
		download=`cat /tmp/speed.txt |grep "Download"`	
		num=`grep -n "Download" /tmp/speed.txt|cut -d":" -f1`
		download=${download%]*}","${downspeed}"],"
		head_download=`echo $download|cut -d"[" -f1`
		tmp_download=`echo $download|cut -d "[" -f2`
		##delete the first data
		tmp_download=${tmp_download#*,}
		echo "tmp_download is $tmp_download"
		download=${head_download}"["${tmp_download}
		sed -i "${num}c${download}" /tmp/speed.txt
		
		timedot=`cat /tmp/speed.txt |grep "TimePoint"`	
		num=`grep -n "TimePoint" /tmp/speed.txt|cut -d":" -f1`
		timedot=${timedot%]*}","${timepoint}"]"
		head_timedot=`echo $timedot|cut -d "[" -f1`
		tmp_timedot=`echo $timedot|cut -d "[" -f2`
		##delete the first data
		tmp_timedot=${tmp_timedot#*,}
		echo "tmp_timedot is $tmp_timedot"
		timedot=${head_timedot}"["${tmp_timedot}
		sed -i "${num}c${timedot}" /tmp/speed.txt

		
	fi
	let i++
	let j++
	
	
done
