
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set cinoutgroup [add_wave_group "C InOuts" -into $designtopgroup]
set ina__inb__op__agg__return_group [add_wave_group ina__inb__op__agg__return(axi_slave) -into $cinoutgroup]
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/interrupt -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_BRESP -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_BREADY -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_BVALID -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_RRESP -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_RDATA -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_RREADY -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_RVALID -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_ARREADY -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_ARVALID -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_ARADDR -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_WSTRB -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_WDATA -into $ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_WREADY -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_WVALID -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_AWREADY -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_AWVALID -into $ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/s_axi_AXILiteS_AWADDR -into $ina__inb__op__agg__return_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake(internal)" -into $designtopgroup]
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_done -into $blocksiggroup
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_idle -into $blocksiggroup
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_ready -into $blocksiggroup
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_start -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_rst_n -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_simpleALU_top/AESL_inst_simpleALU/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_simpleALU_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_simpleALU_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_simpleALU_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_simpleALU_top/LENGTH_ina_V -into $tb_portdepth_group -radix hex
add_wave /apatb_simpleALU_top/LENGTH_inb_V -into $tb_portdepth_group -radix hex
add_wave /apatb_simpleALU_top/LENGTH_op_V -into $tb_portdepth_group -radix hex
add_wave /apatb_simpleALU_top/LENGTH_ap_return -into $tb_portdepth_group -radix hex
set tbcinoutgroup [add_wave_group "C InOuts" -into $testbenchgroup]
set tb_ina__inb__op__agg__return_group [add_wave_group ina__inb__op__agg__return(axi_slave) -into $tbcinoutgroup]
add_wave /apatb_simpleALU_top/AXILiteS_INTERRUPT -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_BRESP -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_BREADY -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_BVALID -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_RRESP -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_RDATA -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_RREADY -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_RVALID -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_ARREADY -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_ARVALID -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_ARADDR -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_WSTRB -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_WDATA -into $tb_ina__inb__op__agg__return_group -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_WREADY -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_WVALID -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_AWREADY -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_AWVALID -into $tb_ina__inb__op__agg__return_group -color #ffff00 -radix hex
add_wave /apatb_simpleALU_top/AXILiteS_AWADDR -into $tb_ina__inb__op__agg__return_group -radix hex
save_wave_config simpleALU.wcfg
run all
quit

