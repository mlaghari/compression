cmd_drivers/net/hamradio/mkiss.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/hamradio/mkiss.ko drivers/net/hamradio/mkiss.o drivers/net/hamradio/mkiss.mod.o