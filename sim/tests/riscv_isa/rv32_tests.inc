
ARCH_lowercase = $(shell echo $(ARCH) | tr A-Z a-z)

rv32_isa_tests += isa/rv32ui/addipc.S    \
#rv32_isa_tests += isa/rv32ui/add.S      \
#rv32_isa_tests += isa/rv32um/divu.S     \
#rv32_isa_tests += isa/rv32ui/jalr.S     \
              