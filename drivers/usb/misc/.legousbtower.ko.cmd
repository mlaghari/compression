cmd_drivers/usb/misc/legousbtower.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/misc/legousbtower.ko drivers/usb/misc/legousbtower.o drivers/usb/misc/legousbtower.mod.o