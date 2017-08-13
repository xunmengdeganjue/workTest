
obj-m += proc_kernel_lib.o
obj-m += proc_call_test.o

KERNELBUILD :=/lib/modules/$(shell uname -r)/build  
all:  
	make -C $(KERNELBUILD) M=$(shell pwd) modules  
clean:  
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions 
