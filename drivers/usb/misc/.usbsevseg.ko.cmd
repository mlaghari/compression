cmd_drivers/usb/misc/usbsevseg.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/usbsevseg.ko drivers/usb/misc/usbsevseg.o drivers/usb/misc/usbsevseg.mod.o
