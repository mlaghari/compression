cmd_drivers/iio/chemical/atlas-ph-sensor.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/iio/chemical/atlas-ph-sensor.ko drivers/iio/chemical/atlas-ph-sensor.o drivers/iio/chemical/atlas-ph-sensor.mod.o