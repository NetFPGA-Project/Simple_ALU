// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "simpleALU.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic simpleALU::ap_const_logic_1 = sc_dt::Log_1;
const int simpleALU::C_S_AXI_DATA_WIDTH = "100000";
const sc_logic simpleALU::ap_const_logic_0 = sc_dt::Log_0;
const bool simpleALU::ap_const_boolean_1 = true;

simpleALU::simpleALU(sc_module_name name) : sc_module(name), mVcdFile(0) {
    simpleALU_AXILiteS_s_axi_U = new simpleALU_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>("simpleALU_AXILiteS_s_axi_U");
    simpleALU_AXILiteS_s_axi_U->AWVALID(s_axi_AXILiteS_AWVALID);
    simpleALU_AXILiteS_s_axi_U->AWREADY(s_axi_AXILiteS_AWREADY);
    simpleALU_AXILiteS_s_axi_U->AWADDR(s_axi_AXILiteS_AWADDR);
    simpleALU_AXILiteS_s_axi_U->WVALID(s_axi_AXILiteS_WVALID);
    simpleALU_AXILiteS_s_axi_U->WREADY(s_axi_AXILiteS_WREADY);
    simpleALU_AXILiteS_s_axi_U->WDATA(s_axi_AXILiteS_WDATA);
    simpleALU_AXILiteS_s_axi_U->WSTRB(s_axi_AXILiteS_WSTRB);
    simpleALU_AXILiteS_s_axi_U->ARVALID(s_axi_AXILiteS_ARVALID);
    simpleALU_AXILiteS_s_axi_U->ARREADY(s_axi_AXILiteS_ARREADY);
    simpleALU_AXILiteS_s_axi_U->ARADDR(s_axi_AXILiteS_ARADDR);
    simpleALU_AXILiteS_s_axi_U->RVALID(s_axi_AXILiteS_RVALID);
    simpleALU_AXILiteS_s_axi_U->RREADY(s_axi_AXILiteS_RREADY);
    simpleALU_AXILiteS_s_axi_U->RDATA(s_axi_AXILiteS_RDATA);
    simpleALU_AXILiteS_s_axi_U->RRESP(s_axi_AXILiteS_RRESP);
    simpleALU_AXILiteS_s_axi_U->BVALID(s_axi_AXILiteS_BVALID);
    simpleALU_AXILiteS_s_axi_U->BREADY(s_axi_AXILiteS_BREADY);
    simpleALU_AXILiteS_s_axi_U->BRESP(s_axi_AXILiteS_BRESP);
    simpleALU_AXILiteS_s_axi_U->ACLK(ap_clk);
    simpleALU_AXILiteS_s_axi_U->ARESET(ap_rst_n_inv);
    simpleALU_AXILiteS_s_axi_U->ACLK_EN(ap_var_for_const0);
    simpleALU_AXILiteS_s_axi_U->ap_start(ap_start);
    simpleALU_AXILiteS_s_axi_U->interrupt(interrupt);
    simpleALU_AXILiteS_s_axi_U->ap_ready(ap_ready);
    simpleALU_AXILiteS_s_axi_U->ap_done(ap_done);
    simpleALU_AXILiteS_s_axi_U->ap_idle(ap_idle);
    simpleALU_AXILiteS_s_axi_U->ap_return(ap_return);
    simpleALU_AXILiteS_s_axi_U->ina_V(ina_V);
    simpleALU_AXILiteS_s_axi_U->inb_V(inb_V);
    simpleALU_AXILiteS_s_axi_U->op_V(op_V);

    SC_METHOD(thread_agg_result_V_assign_fu_50_p2);
    sensitive << ( ina_V );
    sensitive << ( inb_V );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_idle);

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_start );
    sensitive << ( op_V );
    sensitive << ( agg_result_V_assign_fu_50_p2 );
    sensitive << ( tmp_1_fu_44_p2 );

    SC_METHOD(thread_ap_rst_n_inv);
    sensitive << ( ap_rst_n );

    SC_METHOD(thread_tmp_1_fu_44_p2);
    sensitive << ( ina_V );
    sensitive << ( inb_V );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_virtual_clock.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "simpleALU_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, s_axi_AXILiteS_AWVALID, "(port)s_axi_AXILiteS_AWVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_AWREADY, "(port)s_axi_AXILiteS_AWREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_AWADDR, "(port)s_axi_AXILiteS_AWADDR");
    sc_trace(mVcdFile, s_axi_AXILiteS_WVALID, "(port)s_axi_AXILiteS_WVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_WREADY, "(port)s_axi_AXILiteS_WREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_WDATA, "(port)s_axi_AXILiteS_WDATA");
    sc_trace(mVcdFile, s_axi_AXILiteS_WSTRB, "(port)s_axi_AXILiteS_WSTRB");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARVALID, "(port)s_axi_AXILiteS_ARVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARREADY, "(port)s_axi_AXILiteS_ARREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_ARADDR, "(port)s_axi_AXILiteS_ARADDR");
    sc_trace(mVcdFile, s_axi_AXILiteS_RVALID, "(port)s_axi_AXILiteS_RVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_RREADY, "(port)s_axi_AXILiteS_RREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_RDATA, "(port)s_axi_AXILiteS_RDATA");
    sc_trace(mVcdFile, s_axi_AXILiteS_RRESP, "(port)s_axi_AXILiteS_RRESP");
    sc_trace(mVcdFile, s_axi_AXILiteS_BVALID, "(port)s_axi_AXILiteS_BVALID");
    sc_trace(mVcdFile, s_axi_AXILiteS_BREADY, "(port)s_axi_AXILiteS_BREADY");
    sc_trace(mVcdFile, s_axi_AXILiteS_BRESP, "(port)s_axi_AXILiteS_BRESP");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst_n, "(port)ap_rst_n");
    sc_trace(mVcdFile, interrupt, "(port)interrupt");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_start, "ap_start");
    sc_trace(mVcdFile, ap_done, "ap_done");
    sc_trace(mVcdFile, ap_idle, "ap_idle");
    sc_trace(mVcdFile, ap_ready, "ap_ready");
    sc_trace(mVcdFile, ina_V, "ina_V");
    sc_trace(mVcdFile, inb_V, "inb_V");
    sc_trace(mVcdFile, op_V, "op_V");
    sc_trace(mVcdFile, ap_return, "ap_return");
    sc_trace(mVcdFile, ap_rst_n_inv, "ap_rst_n_inv");
    sc_trace(mVcdFile, agg_result_V_assign_fu_50_p2, "agg_result_V_assign_fu_50_p2");
    sc_trace(mVcdFile, tmp_1_fu_44_p2, "tmp_1_fu_44_p2");
#endif

    }
    mHdltvinHandle.open("simpleALU.hdltvin.dat");
    mHdltvoutHandle.open("simpleALU.hdltvout.dat");
}

simpleALU::~simpleALU() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete simpleALU_AXILiteS_s_axi_U;
}

void simpleALU::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void simpleALU::thread_agg_result_V_assign_fu_50_p2() {
    agg_result_V_assign_fu_50_p2 = (!inb_V.read().is_01() || !ina_V.read().is_01())? sc_lv<20>(): (sc_biguint<20>(inb_V.read()) + sc_biguint<20>(ina_V.read()));
}

void simpleALU::thread_ap_done() {
    ap_done = ap_start.read();
}

void simpleALU::thread_ap_idle() {
    ap_idle = ap_const_logic_1;
}

void simpleALU::thread_ap_ready() {
    ap_ready = ap_start.read();
}

void simpleALU::thread_ap_return() {
    ap_return = (!op_V.read()[0].is_01())? sc_lv<20>(): ((op_V.read()[0].to_bool())? agg_result_V_assign_fu_50_p2.read(): tmp_1_fu_44_p2.read());
}

void simpleALU::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void simpleALU::thread_tmp_1_fu_44_p2() {
    tmp_1_fu_44_p2 = (!ina_V.read().is_01() || !inb_V.read().is_01())? sc_lv<20>(): (sc_biguint<20>(ina_V.read()) - sc_biguint<20>(inb_V.read()));
}

void simpleALU::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"s_axi_AXILiteS_AWVALID\" :  \"" << s_axi_AXILiteS_AWVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"s_axi_AXILiteS_AWREADY\" :  \"" << s_axi_AXILiteS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_AWADDR\" :  \"" << s_axi_AXILiteS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WVALID\" :  \"" << s_axi_AXILiteS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_WREADY\" :  \"" << s_axi_AXILiteS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WDATA\" :  \"" << s_axi_AXILiteS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_WSTRB\" :  \"" << s_axi_AXILiteS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARVALID\" :  \"" << s_axi_AXILiteS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_ARREADY\" :  \"" << s_axi_AXILiteS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_ARADDR\" :  \"" << s_axi_AXILiteS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RVALID\" :  \"" << s_axi_AXILiteS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_RREADY\" :  \"" << s_axi_AXILiteS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RDATA\" :  \"" << s_axi_AXILiteS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_RRESP\" :  \"" << s_axi_AXILiteS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BVALID\" :  \"" << s_axi_AXILiteS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_AXILiteS_BREADY\" :  \"" << s_axi_AXILiteS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_AXILiteS_BRESP\" :  \"" << s_axi_AXILiteS_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

