cmd_drivers/power/axp20x_usb_power.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/power/axp20x_usb_power.ko drivers/power/axp20x_usb_power.o drivers/power/axp20x_usb_power.mod.o