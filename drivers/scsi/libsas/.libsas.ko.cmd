cmd_drivers/scsi/libsas/libsas.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/libsas/libsas.ko drivers/scsi/libsas/libsas.o drivers/scsi/libsas/libsas.mod.o
