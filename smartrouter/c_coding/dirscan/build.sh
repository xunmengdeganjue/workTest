gcc -g -o getdir dirget.c suci.c -luci

if [ $? -eq 0 ];then

	tree /mnt
	echo 
#	./getdir /home/nickli/dirtest

fi
