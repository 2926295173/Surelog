-DSIMULATION=1 -DVERILATOR=1  -Ihardware/core  -y hardware/core -y hardware/fpga/common +libext+.sv -o build/hardware/generated hardware/testbench/soc_tb.sv hardware/testbench/axi_protocol_checker.sv  hardware/testbench/sim_jtag.sv  hardware/testbench/sim_sdmmc.sv  hardware/testbench/soc_tb.sv  hardware/testbench/trace_logger.sv hardware/testbench/sim_ps2.sv hardware/testbench/sim_sdram.sv -verbose -parse -elabuhdm -d coveruhdm -timescale=10ps/10ps

