cmd_net/bluetooth/rfcomm/rfcomm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/bluetooth/rfcomm/rfcomm.ko net/bluetooth/rfcomm/rfcomm.o net/bluetooth/rfcomm/rfcomm.mod.o
