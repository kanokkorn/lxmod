obj-m += lxmod.o

KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD)

clean:
	$(RM) *.o *~ core .depend .*.cmd *.ko *.mod.c *.tmp_versions *.mod modules.order *.symvers built-in.a
