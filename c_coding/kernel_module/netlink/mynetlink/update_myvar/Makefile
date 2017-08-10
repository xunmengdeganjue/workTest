MODULE_NAME :=netlink_kmodule
obj-m   :=$(MODULE_NAME).o

EXTRA_CFLAGS := -I$(src)/user_module
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD       := $(shell pwd)
all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) $(EXTRA_CFLAGS)
	#gcc -o sender sender.c

install:
	sudo insmod $(MODULE_NAME).ko
uninstall:
	sudo rmmod $(MODULE_NAME).ko


clean:
	rm -fr *.ko *.o *.cmd  $(MODULE_NAME).mod.c modules.order  Module.symvers
