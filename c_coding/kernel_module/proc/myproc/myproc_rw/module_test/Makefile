obj-m += proc_call_test.o

KERNELBUILD :=/lib/modules/$(shell uname -r)/build  
KBUILD_EXTRA_SYMBOLS :=/home/nickli/test/workTest/wireless/csa-module/my_lib-csa/Module.symvers
default:  
	make -C $(KERNELBUILD) $(KBUILD_EXTRA_SYMBOLS) M=$(shell pwd) modules  
clean:  
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions 