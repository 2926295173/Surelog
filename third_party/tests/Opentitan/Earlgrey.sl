-nopython -parse -d inst -d coveruhdm +define+SYNTHESIS -I../../UVM/1800.2-2017-1.0/src/ -Ihw/ip/prim/rtl -Ihw/ip/alert_handler/rtl -Ihw/ip/pinmux/rtl -Ihw/dv/sv/common_ifs -Ihw/vendor/lowrisc_ibex/rtl -Ihw/ip/prim_generic/rtl -Ihw/ip/tlul/rtl -Ihw/ip/flash_ctrl/rtl -Ihw/top_earlgrey/ip/alert_handler/rtl/autogen -Ihw/top_earlgrey/ip/rv_plic/rtl/autogen -Ihw/top_earlgrey/ip/pinmux/rtl/autogen -Ihw/top_earlgrey/ip/xbar_peri/rtl/autogen -Ihw/top_earlgrey/ip/xbar_main/rtl/autogen -Ihw/top_earlgrey/rtl/autogen -Ihw/top_earlgrey/rtl -Ihw/ip/rv_timer/rtl -Ihw/ip/nmi_gen/rtl -Ihw/ip/prim/abstract -Ihw/ip/rv_dm/rtl -Ihw/ip/prim_xilinx/rtl -Ihw/vendor/pulp_riscv_dbg/src -Ihw/vendor/pulp_riscv_dbg/debug_rom -Ihw/ip/usbdev/rtl -Ihw/ip/usb_fs_nb_pe/rtl -Ihw/ip/uart/rtl -Ihw/ip/rv_plic/rtl -Ihw/ip/rv_core_ibex/rtl -Ihw/ip/aes/rtl -Ihw/ip/hmac/rtl -Ihw/ip/gpio/rtl -Ihw/ip/spi_device/rtl hw/ip/prim/rtl/prim_assert.sv hw/ip/alert_handler/rtl/alert_handler_esc_timer.sv hw/ip/alert_handler/rtl/alert_handler_accu.sv hw/ip/alert_handler/rtl/alert_pkg.sv hw/ip/alert_handler/rtl/alert_handler_reg_wrap.sv hw/ip/alert_handler/rtl/alert_handler_ping_timer.sv hw/ip/alert_handler/rtl/alert_handler_class.sv hw/ip/alert_handler/rtl/alert_handler.sv hw/ip/pinmux/rtl/pinmux.sv hw/dv/sv/common_ifs/pins_if.sv hw/vendor/lowrisc_ibex/rtl/ibex_ex_block.sv hw/vendor/lowrisc_ibex/rtl/ibex_compressed_decoder.sv hw/vendor/lowrisc_ibex/rtl/ibex_multdiv_fast.sv hw/vendor/lowrisc_ibex/rtl/ibex_decoder.sv hw/vendor/lowrisc_ibex/rtl/ibex_register_file_ff.sv hw/vendor/lowrisc_ibex/rtl/ibex_core.sv hw/vendor/lowrisc_ibex/rtl/ibex_load_store_unit.sv hw/vendor/lowrisc_ibex/rtl/ibex_pmp.sv hw/vendor/lowrisc_ibex/rtl/ibex_fetch_fifo.sv hw/vendor/lowrisc_ibex/rtl/ibex_pkg.sv hw/vendor/lowrisc_ibex/rtl/ibex_cs_registers.sv hw/vendor/lowrisc_ibex/rtl/ibex_if_stage.sv hw/vendor/lowrisc_ibex/rtl/ibex_alu.sv hw/vendor/lowrisc_ibex/rtl/ibex_prefetch_buffer.sv hw/vendor/lowrisc_ibex/rtl/ibex_id_stage.sv hw/vendor/lowrisc_ibex/rtl/ibex_multdiv_slow.sv hw/vendor/lowrisc_ibex/rtl/ibex_controller.sv hw/ip/prim_generic/rtl/prim_generic_clock_mux2.sv hw/ip/tlul/rtl/tlul_adapter_reg.sv hw/ip/tlul/rtl/tlul_socket_1n.sv hw/ip/tlul/rtl/tlul_err_resp.sv hw/ip/tlul/rtl/tlul_assert.sv hw/ip/tlul/rtl/tlul_fifo_async.sv hw/ip/tlul/rtl/tlul_assert_multiple.sv hw/ip/tlul/rtl/tlul_err.sv hw/ip/tlul/rtl/tlul_fifo_sync.sv hw/ip/tlul/rtl/tlul_adapter_sram.sv hw/ip/flash_ctrl/rtl/flash_ctrl_pkg.sv hw/ip/prim_generic/rtl/prim_generic_pad_wrapper.sv hw/top_earlgrey/ip/alert_handler/rtl/autogen/alert_handler_reg_pkg.sv hw/top_earlgrey/ip/alert_handler/rtl/autogen/alert_handler_reg_top.sv hw/top_earlgrey/ip/rv_plic/rtl/autogen/rv_plic.sv hw/top_earlgrey/ip/rv_plic/rtl/autogen/rv_plic_reg_pkg.sv hw/top_earlgrey/ip/rv_plic/rtl/autogen/rv_plic_reg_top.sv hw/top_earlgrey/ip/pinmux/rtl/autogen/pinmux_reg_pkg.sv hw/top_earlgrey/ip/pinmux/rtl/autogen/pinmux_reg_top.sv hw/top_earlgrey/ip/xbar_peri/rtl/autogen/xbar_peri.sv hw/top_earlgrey/ip/xbar_peri/rtl/autogen/tl_peri_pkg.sv hw/top_earlgrey/ip/xbar_main/rtl/autogen/xbar_main.sv hw/top_earlgrey/ip/xbar_main/rtl/autogen/tl_main_pkg.sv hw/top_earlgrey/rtl/autogen/top_earlgrey.sv hw/top_earlgrey/rtl/padctl.sv hw/ip/rv_timer/rtl/timer_core.sv hw/ip/rv_timer/rtl/rv_timer_reg_top.sv hw/ip/rv_timer/rtl/rv_timer_reg_pkg.sv hw/ip/rv_timer/rtl/rv_timer.sv hw/ip/nmi_gen/rtl/nmi_gen_reg_top.sv hw/ip/nmi_gen/rtl/nmi_gen_reg_pkg.sv hw/ip/nmi_gen/rtl/nmi_gen.sv hw/ip/prim/abstract/prim_clock_mux2.sv hw/ip/rv_dm/rtl/tlul_adapter_host.sv hw/ip/rv_dm/rtl/rv_dm.sv hw/top_earlgrey/rtl/top_pkg.sv hw/ip/flash_ctrl/rtl/flash_mp.sv hw/ip/flash_ctrl/rtl/flash_phy.sv hw/ip/flash_ctrl/rtl/flash_ctrl.sv hw/ip/flash_ctrl/rtl/flash_ctrl_reg_top.sv hw/ip/flash_ctrl/rtl/flash_prog_ctrl.sv hw/ip/flash_ctrl/rtl/flash_erase_ctrl.sv hw/ip/flash_ctrl/rtl/flash_ctrl_reg_pkg.sv hw/ip/flash_ctrl/rtl/flash_rd_ctrl.sv hw/ip/prim/abstract/prim_rom.sv hw/ip/prim_xilinx/rtl/prim_xilinx_ram_2p.sv hw/vendor/pulp_riscv_dbg/src/dm_mem.sv hw/vendor/pulp_riscv_dbg/src/dm_pkg.sv hw/vendor/pulp_riscv_dbg/src/dmi_jtag.sv hw/vendor/pulp_riscv_dbg/src/dmi_cdc.sv hw/vendor/pulp_riscv_dbg/src/dmi_jtag_tap.sv hw/vendor/pulp_riscv_dbg/src/dm_csrs.sv hw/vendor/pulp_riscv_dbg/src/dm_sba.sv hw/vendor/pulp_riscv_dbg/debug_rom/debug_rom.sv hw/ip/usbdev/rtl/usbdev_flop_2syncpulse.sv hw/ip/usbdev/rtl/usbdev_reg_pkg.sv hw/ip/usbdev/rtl/usbdev_reg_top.sv hw/ip/usbdev/rtl/usbdev_linkstate.sv hw/ip/usbdev/rtl/usbdev.sv hw/ip/usbdev/rtl/usbdev_iomux.sv hw/ip/usbdev/rtl/usbdev_usbif.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_tx_mux.sv hw/ip/usb_fs_nb_pe/rtl/usb_consts_pkg.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_nb_pe.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_rx.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_nb_in_pe.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_nb_out_pe.sv hw/ip/usb_fs_nb_pe/rtl/usb_fs_tx.sv hw/ip/prim_generic/rtl/prim_generic_rom.sv hw/ip/prim/rtl/prim_arbiter_ppc.sv hw/ip/prim/rtl/prim_esc_sender.sv hw/ip/prim/rtl/prim_packer.sv hw/ip/prim/rtl/prim_flop_2sync.sv hw/ip/prim/rtl/prim_filter.sv hw/ip/prim/rtl/prim_lfsr.sv hw/ip/prim/rtl/prim_fifo_async.sv hw/ip/prim/rtl/prim_ram_2p_async_adv.sv hw/ip/prim/rtl/prim_secded_39_32_enc.sv hw/ip/prim/rtl/prim_arbiter_tree.sv hw/ip/prim/rtl/prim_secded_39_32_dec.sv hw/ip/prim/rtl/prim_ram_2p_adv.sv hw/ip/prim/rtl/prim_intr_hw.sv hw/ip/prim/rtl/prim_subreg_ext.sv hw/ip/prim/rtl/prim_clock_inverter.sv hw/ip/prim/rtl/prim_esc_receiver.sv hw/ip/prim/rtl/prim_alert_sender.sv hw/ip/prim/rtl/prim_fifo_sync.sv hw/ip/prim/rtl/prim_pulse_sync.sv hw/ip/prim/rtl/prim_subreg.sv hw/ip/prim/rtl/prim_filter_ctr.sv hw/ip/prim/rtl/prim_sram_arbiter.sv hw/ip/prim/rtl/prim_alert_receiver.sv hw/ip/prim/abstract/prim_ram_2p.sv hw/ip/uart/rtl/uart_rx.sv hw/ip/uart/rtl/uart_core.sv hw/ip/uart/rtl/uart.sv hw/ip/uart/rtl/uart_tx.sv hw/ip/uart/rtl/uart_reg_pkg.sv hw/ip/uart/rtl/uart_reg_top.sv hw/ip/prim_xilinx/rtl/prim_xilinx_clock_gating.sv hw/ip/prim/abstract/prim_flash.sv hw/ip/prim_xilinx/rtl/prim_xilinx_clock_mux2.sv hw/ip/tlul/rtl/sram2tlul.sv hw/top_earlgrey/rtl/clkgen_xil7series.sv hw/top_earlgrey/rtl/top_earlgrey_nexysvideo.sv hw/ip/prim_generic/rtl/prim_generic_flash.sv hw/ip/rv_plic/rtl/rv_plic_target.sv hw/ip/rv_plic/rtl/rv_plic_gateway.sv hw/ip/prim/rtl/prim_pkg.sv hw/ip/prim/abstract/prim_ram_1p.sv hw/ip/rv_core_ibex/rtl/rv_core_ibex.sv hw/ip/aes/rtl/aes.sv hw/ip/aes/rtl/aes_reg_top.sv hw/ip/aes/rtl/aes_sbox_canright.sv hw/ip/aes/rtl/aes_mix_single_column.sv hw/ip/aes/rtl/aes_sbox.sv hw/ip/aes/rtl/aes_sub_bytes.sv hw/ip/aes/rtl/aes_core.sv hw/ip/aes/rtl/aes_shift_rows.sv hw/ip/aes/rtl/aes_mix_columns.sv hw/ip/aes/rtl/aes_sbox_lut.sv hw/ip/aes/rtl/aes_reg_pkg.sv hw/ip/aes/rtl/aes_key_expand.sv hw/ip/aes/rtl/aes_control.sv hw/ip/aes/rtl/aes_pkg.sv hw/ip/prim_generic/rtl/prim_generic_ram_1p.sv hw/ip/hmac/rtl/hmac.sv hw/ip/hmac/rtl/hmac_reg_pkg.sv hw/ip/hmac/rtl/hmac_reg_top.sv hw/ip/hmac/rtl/sha2_pad.sv hw/ip/hmac/rtl/sha2.sv hw/ip/hmac/rtl/hmac_pkg.sv hw/ip/hmac/rtl/hmac_core.sv hw/ip/prim_generic/rtl/prim_generic_clock_gating.sv hw/ip/prim_generic/rtl/prim_generic_ram_2p.sv hw/ip/prim_xilinx/rtl/prim_xilinx_rom.sv hw/ip/prim/rtl/prim_diff_decode.sv hw/ip/gpio/rtl/gpio.sv hw/ip/gpio/rtl/gpio_reg_top.sv hw/ip/gpio/rtl/gpio_reg_pkg.sv hw/ip/tlul/rtl/tlul_pkg.sv hw/ip/tlul/rtl/tlul_socket_m1.sv hw/ip/prim_xilinx/rtl/prim_xilinx_pad_wrapper.sv hw/ip/prim/abstract/prim_clock_gating.sv hw/ip/spi_device/rtl/spi_device_reg_top.sv hw/ip/spi_device/rtl/spi_device_reg_pkg.sv hw/ip/spi_device/rtl/spi_device_pkg.sv hw/ip/spi_device/rtl/spi_fwmode.sv hw/ip/spi_device/rtl/spi_device.sv hw/ip/spi_device/rtl/spi_fwm_txf_ctrl.sv hw/ip/spi_device/rtl/spi_fwm_rxf_ctrl.sv hw/ip/prim/abstract/prim_pad_wrapper.sv
