cmd_drivers/platform/x86/intel_oaktrail.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/platform/x86/intel_oaktrail.ko drivers/platform/x86/intel_oaktrail.o drivers/platform/x86/intel_oaktrail.mod.o