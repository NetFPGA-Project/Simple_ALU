// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _simpleALU_HH_
#define _simpleALU_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "simpleALU_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 6,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct simpleALU : public sc_module {
    // Port declarations 20
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_out< sc_logic > interrupt;
    sc_signal< sc_logic > ap_var_for_const0;
    // Port declarations for the virtual clock. 
    sc_in_clk ap_virtual_clock;


    // Module declarations
    simpleALU(sc_module_name name);
    SC_HAS_PROCESS(simpleALU);

    ~simpleALU();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    simpleALU_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* simpleALU_AXILiteS_s_axi_U;
    sc_signal< sc_logic > ap_start;
    sc_signal< sc_logic > ap_done;
    sc_signal< sc_logic > ap_idle;
    sc_signal< sc_logic > ap_ready;
    sc_signal< sc_lv<20> > ina_V;
    sc_signal< sc_lv<20> > inb_V;
    sc_signal< sc_lv<1> > op_V;
    sc_signal< sc_lv<20> > ap_return;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<20> > agg_result_V_assign_fu_50_p2;
    sc_signal< sc_lv<20> > tmp_1_fu_44_p2;
    static const sc_logic ap_const_logic_1;
    static const int C_S_AXI_DATA_WIDTH;
    static const sc_logic ap_const_logic_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_agg_result_V_assign_fu_50_p2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ap_rst_n_inv();
    void thread_tmp_1_fu_44_p2();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
