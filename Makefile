obj-m += hello.o

KDIR = /usr/src/linux-headers-6.1.11-060111-generic
all:
	make -C $(KDIR) M=$(shell pwd) modules
clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order

