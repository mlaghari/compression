cmd_drivers/input/keyboard/sunkbd.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/keyboard/sunkbd.ko drivers/input/keyboard/sunkbd.o drivers/input/keyboard/sunkbd.mod.o