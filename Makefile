obj-m +=mymod.o
path= /lib/modules/$(shell uname -r)/build
PWD= $(shell pwd)

all:
	make -C $(path) M=$(PWD) modules

clean:
	make -C $(path) M=$(PWD) clean
	
