cmd_drivers/block/aoe/aoe.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/aoe/aoe.ko drivers/block/aoe/aoe.o drivers/block/aoe/aoe.mod.o
