cmd_drivers/usb/gadget/function/usb_f_hid.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/gadget/function/usb_f_hid.ko drivers/usb/gadget/function/usb_f_hid.o drivers/usb/gadget/function/usb_f_hid.mod.o