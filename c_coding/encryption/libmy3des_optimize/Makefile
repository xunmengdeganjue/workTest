
#GCC="/home/nickli/spf502_Trunk_SDK/qualcomm_sdk/qsdk/staging_dir/toolchain-arm_cortex-a7_gcc-5.2.0_uClibc-1.0.14_eabi/bin/arm-openwrt-linux-uclibcgnueabi-gcc"
GCC = gcc
LDFLAGS+=-lcrypto 
CFLAGS+= -Wall -g -fno-stack-protector

testmian:testmain.o lib3des.o
	${GCC} ${CFLAGS} -o testmain testmain.o lib3des.o ${LDFLAGS}
testmain.o:testmain.c lib3des.h
	${GCC} ${CFLAGS} -c testmain.c
lib3des.o:lib3des.c lib3des.h
	${GCC} ${CFLAGS} -c lib3des.c

clean:
	rm -rf *.o testmain
