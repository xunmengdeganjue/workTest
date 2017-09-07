obj-m := kernel_space.o
KERNELBUILD :=/lib/modules/$(shell uname -r)/build
default:  
	make -C $(KERNELBUILD) M=$(shell pwd) modules  
	gcc -o sender user_space.c
install:
	sudo insmod kernel_space.ko
uninstall:
	sudo rmmod kernel_space.ko
clean:  
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions sender
