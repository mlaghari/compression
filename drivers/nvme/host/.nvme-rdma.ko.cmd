cmd_drivers/nvme/host/nvme-rdma.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nvme/host/nvme-rdma.ko drivers/nvme/host/nvme-rdma.o drivers/nvme/host/nvme-rdma.mod.o
