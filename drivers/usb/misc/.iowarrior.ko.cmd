cmd_drivers/usb/misc/iowarrior.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/iowarrior.ko drivers/usb/misc/iowarrior.o drivers/usb/misc/iowarrior.mod.o
