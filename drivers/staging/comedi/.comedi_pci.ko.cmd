cmd_drivers/staging/comedi/comedi_pci.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/staging/comedi/comedi_pci.ko drivers/staging/comedi/comedi_pci.o drivers/staging/comedi/comedi_pci.mod.o