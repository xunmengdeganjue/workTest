###############################
#Makefile test procedure.
###############################


CURDIR=$(shell pwd)
BUILD_DIR=$(CURDIR)/build_dir
SOURCE_DIR=$(CURDIR)/source

ifndef chip
chip =xxx12345yyyy
endif
G=@

.PHONY: all
all:check_chip openwrt_prepare openwrt_config openwrt_build 
clean:openwrt_clean
delete:openwrt_delete

#	$(G)echo "chip=$(chip)"

.PHONY:check_chip
check_chip:
	$(G)echo "------------------------------------check_chip start-------------------------------------"
	$(G)if [ ! -d /home/xxx ];then\
		echo "hello"; \
		echo "the chip is $(chip)"; \
	fi;
	$(G)echo "------------------------------------check_chip end-------------------------------------"

.PHONY:openwrt_prepare
openwrt_prepare:
	@echo "------------------------------------openwrt prepare start--------------------------------";\
	if [ -d $(BUILD_DIR) ];then \
		cp -afr $(SOURCE_DIR)/* $(BUILD_DIR)/ ;\
	fi
	@echo "------------------------------------openwrt prepare end--------------------------------";

.PHONY:openwrt_config
openwrt_config:
	@echo "------------------------------------openwrt config start---------------------------------";\
	echo "cccconfig for the openwrt";
	@echo "------------------------------------openwrt config end---------------------------------";

.PHONY:openwrt_build
openwrt_build:
	@echo "------------------------------------openwrt build start-----------------------------------";
	if [ -d $(BUILD_DIR/helloworld) ];then \
		cd $(BUILD_DIR)/helloworld ;\
		make -j 1 V=99 ;\
	fi
	@echo "------------------------------------openwrt build end-----------------------------------";

openwrt_clean:
	@echo "----------------------------------------clean start-----------------------------------------"
	@###real clean operation
	@echo "----------------------------------------clean end-------------------------------------------"
