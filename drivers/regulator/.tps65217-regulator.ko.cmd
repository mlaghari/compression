cmd_drivers/regulator/tps65217-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/tps65217-regulator.ko drivers/regulator/tps65217-regulator.o drivers/regulator/tps65217-regulator.mod.o