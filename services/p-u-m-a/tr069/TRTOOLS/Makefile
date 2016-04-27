
TOPDIR:=${CURDIR}
export TOPDIR


world:
	@echo "the TOPDIR is: ${TOPDIR}"

prepare:
	make -C $(TOPDIR)/lib; \
	make -C $(TOPDIR)/lib install
	mkdir -p $(TOPDIR)/tools
	cp $(TOPDIR)/scripts/* $(TOPDIR)/tools/
	
source: FORCE
	cd $(TOPDIR)/source;$(MAKE)

world:prepare source


PHONY +=FORCE
FORCE:
# Declare the contents of the .PHONY variable as phony.  We keep that
# information in a variable so we can use it in if_changed and friends.
.PHONY: $(PHONY)

lib_dir := ${TOPDIR}/lib
source_dir := ${basename ${patsubst %/source/, ,${shell find $(TOPDIR)/source/ -maxdepth 1 -type d}}}
#clean_dir +=${lib_dir}
#clean_dir +=${source_dir}
#same as bellow descripton
clean_dir = ${lib_dir} ${source_dir}

clean:clean_excute
	echo ${source_dir}
	echo ${clean_dir}
	for i in ${clean_dir};do\
		cd $$i;make clean;\
	done
clean_excute:	
	rm -rf ${TOPDIR}/tools/trfcmo
	rm -rf ${TOPDIR}/tools/truci

	
