obj-m += proc_lib_call.o
obj-m += proc_kernel_lib.o

KERNELBUILD :=/lib/modules/$(shell uname -r)/build  
PWD=`pwd`
#for the proc_lib_call
KBUILD_EXTRA_SYMBOLS :=$(PWD)/Module.symvers

lib:  
	make -C $(KERNELBUILD) M=$(shell pwd) modules
	gcc -o message_hunter hunter.c hunter.h	
default:lib
	make -C $(KERNELBUILD) $(KBUILD_EXTRA_SYMBOLS) M=$(shell pwd) modules  
	
clean:  
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions message_hunter
