cmd_drivers/iio/temperature/tsys01.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/temperature/tsys01.ko drivers/iio/temperature/tsys01.o drivers/iio/temperature/tsys01.mod.o