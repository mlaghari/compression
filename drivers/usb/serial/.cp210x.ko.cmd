cmd_drivers/usb/serial/cp210x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/cp210x.ko drivers/usb/serial/cp210x.o drivers/usb/serial/cp210x.mod.o
