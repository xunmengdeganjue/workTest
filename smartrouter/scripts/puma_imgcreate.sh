#! /bin/bash
#This script is for qualcomm_sdk to create the img
#

CURRDIR=$(pwd)
SDK=/home/nickli/puma_sdk/qualcomm_sdk/qsdk
SDKROOT=/home/nickli/puma_sdk/qualcomm_sdk
BIN=bin
BEELINERS=meta-scripts/ipq806x_standard_beeliner/*
BUILD_LOG=/home/nickli/puma_sdk/qualcomm_sdk/qsdk/build_log
echo $CURRDIR

if [ $CURRDIR != "$SDK" ];then
	cd $SDK
fi

CURRDIR=`pwd`
echo "current dir is :$CURRDIR"
if [ -d $SDK/$BIN ];then
	cp -rf  $SDK/bin/ipq806x/* $SDKROOT/common/build/ipq
	cp $SDKROOT/$BEELINERS $SDKROOT/common/build/ipq/
	cp $SDK/qca/src/u-boot/tools/pack.py $SDKROOT/apss_proc/out/
	cd $SDKROOT/common/build
	python update_common_info.py
else
	echo "There is no file that needed to build the img!"
	exit 1
fi
sudo cp  $SDKROOT/common/build/bin/nornand-ipq806x-single.img /tftpboot/nick_img
[ $? -eq 0 ] && echo "`date +"%F-%H:%M:%S"`-----The image file has been transformed to the tftpboot [SUCCEED]" |tee -a $BUILD_LOG \
|| echo "The image file transforemed failed [ERROR]" |tee -a $BUILD_LOG



