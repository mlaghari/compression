cmd_drivers/nvme/target/nvmet-rdma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nvme/target/nvmet-rdma.ko drivers/nvme/target/nvmet-rdma.o drivers/nvme/target/nvmet-rdma.mod.o