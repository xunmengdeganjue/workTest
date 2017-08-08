obj-m := netlink_kernel.o
KERNELBUILD :=/lib/modules/$(shell uname -r)/build
default:  
	make -C $(KERNELBUILD) M=$(shell pwd) modules  
	gcc -o sender netlink_sender.c
	gcc -o receiver netlink_receiver.c
install:
	sudo insmod netlink_kernel.ko
uninstall:
	sudo rmmod netlink_kernel.ko
clean:  
	rm -rf *.o *.ko *.mod.c .*.cmd *.markers *.order *.symvers .tmp_versions sender
