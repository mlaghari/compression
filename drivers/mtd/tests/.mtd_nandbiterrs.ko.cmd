cmd_drivers/mtd/tests/mtd_nandbiterrs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/mtd/tests/mtd_nandbiterrs.ko drivers/mtd/tests/mtd_nandbiterrs.o drivers/mtd/tests/mtd_nandbiterrs.mod.o