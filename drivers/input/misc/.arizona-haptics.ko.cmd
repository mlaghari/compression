cmd_drivers/input/misc/arizona-haptics.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/misc/arizona-haptics.ko drivers/input/misc/arizona-haptics.o drivers/input/misc/arizona-haptics.mod.o