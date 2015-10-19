#! /bin/bash
if [ "$1" = "unix" ];then
	cd /home/nickli/test/unix-env-coding
else 
	cd /home/nickli/test/workTest
fi
ADDFILES=`git status -s |grep "??" |awk '{print $2}'`
MODFILES=`git status -s |grep "modified" |awk '{print $2}'`

echo "the added file is $ADDFILES"
echo "the mod file is $MODFILES"

addfiles(){

	local i 
	local filelist=$1
	local filename

	for i in $filelist
	do 
		filename_len=`expr ${#i} - 1`
		if [ ${i:$filename_len:1} = "/" ];then
			filename=$i
			git add $i
		else
			filename=`basename $i`
			echo "$filename" |grep -q "\."
                	if [ $? -eq 0 ];then
                        	echo "the file is the dest file:$i"
                        	git add $i
                	else
                        	echo "the file is not the dest file:$i"
                	fi
		fi

	done

}


[ -n "$ADDFILES" ] && addfiles "$ADDFILES"

[ -n "$MODFILES" ] && addfiles "$MODFILES"

git commit -m "commit the code automatically!"

[ $? -eq 0 ] && update
[ $? -eq 0 ] && echo "commit the code successfully!"


