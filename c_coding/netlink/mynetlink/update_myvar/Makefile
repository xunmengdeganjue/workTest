MODULE_NAME :=netlink_hello_kernel_module
obj-m   :=$(MODULE_NAME).o
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD       := $(shell pwd)
all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)
	#gcc -o sender sender.c
clean:
	rm -fr *.ko *.o *.cmd  $(MODULE_NAME).mod.c modules.order  Module.symvers
