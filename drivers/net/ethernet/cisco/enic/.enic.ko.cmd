cmd_drivers/net/ethernet/cisco/enic/enic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/cisco/enic/enic.ko drivers/net/ethernet/cisco/enic/enic.o drivers/net/ethernet/cisco/enic/enic.mod.o