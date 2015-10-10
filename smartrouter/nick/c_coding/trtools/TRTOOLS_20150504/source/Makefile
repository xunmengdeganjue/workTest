
TOPDIR ?=/home/nickli/trtools/TRTOOLS/
SOURCEDIR=$(TOPDIR)/source
SUBDIRS=$(SOURCEDIR)/trfcmo $(SOURCEDIR)/truci


all:
	echo $(SUBDIRS)
	for i in $(SUBDIRS);\
	do\
		echo $${i};\
		sleep 2;\
		make -C $${i};\
		make -C $${i} install;\
	done
#$(MAKE) -n -C $i;$(MAKE) -n -C $i install; \

