cmd_drivers/regulator/qcom_spmi-regulator.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/regulator/qcom_spmi-regulator.ko drivers/regulator/qcom_spmi-regulator.o drivers/regulator/qcom_spmi-regulator.mod.o