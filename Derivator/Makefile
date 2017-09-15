# Makefile

         SUBDIRS  =DerivatorApp DerivatorLib
override OUTPATH  =$(PWD)/_out/

.PHONY: subdirs $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@ OUTPATH=$(OUTPATH)

clean:
	rm -rf _out

DerivatorApp: DerivatorLib