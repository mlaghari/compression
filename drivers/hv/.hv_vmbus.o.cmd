cmd_drivers/hv/hv_vmbus.o := ld -m elf_x86_64   -r -o drivers/hv/hv_vmbus.o drivers/hv/vmbus_drv.o drivers/hv/hv.o drivers/hv/connection.o drivers/hv/channel.o drivers/hv/channel_mgmt.o drivers/hv/ring_buffer.o 