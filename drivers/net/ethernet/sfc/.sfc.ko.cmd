cmd_drivers/net/ethernet/sfc/sfc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/sfc/sfc.ko drivers/net/ethernet/sfc/sfc.o drivers/net/ethernet/sfc/sfc.mod.o