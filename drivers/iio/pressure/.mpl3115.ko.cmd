cmd_drivers/iio/pressure/mpl3115.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/pressure/mpl3115.ko drivers/iio/pressure/mpl3115.o drivers/iio/pressure/mpl3115.mod.o