cmd_drivers/media/radio/radio-si476x.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/radio/radio-si476x.ko drivers/media/radio/radio-si476x.o drivers/media/radio/radio-si476x.mod.o