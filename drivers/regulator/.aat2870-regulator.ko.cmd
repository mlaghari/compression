cmd_drivers/regulator/aat2870-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/aat2870-regulator.ko drivers/regulator/aat2870-regulator.o drivers/regulator/aat2870-regulator.mod.o