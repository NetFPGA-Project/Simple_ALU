// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xsimplealu.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XSimplealu_CfgInitialize(XSimplealu *InstancePtr, XSimplealu_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XSimplealu_Start(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL) & 0x80;
    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XSimplealu_IsDone(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XSimplealu_IsIdle(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XSimplealu_IsReady(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XSimplealu_EnableAutoRestart(XSimplealu *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XSimplealu_DisableAutoRestart(XSimplealu *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XSimplealu_Get_return(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_AP_RETURN);
    return Data;
}
void XSimplealu_Set_ina_V(XSimplealu *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_INA_V_DATA, Data);
}

u32 XSimplealu_Get_ina_V(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_INA_V_DATA);
    return Data;
}

void XSimplealu_Set_inb_V(XSimplealu *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_INB_V_DATA, Data);
}

u32 XSimplealu_Get_inb_V(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_INB_V_DATA);
    return Data;
}

void XSimplealu_Set_op_V(XSimplealu *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_OP_V_DATA, Data);
}

u32 XSimplealu_Get_op_V(XSimplealu *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_OP_V_DATA);
    return Data;
}

void XSimplealu_InterruptGlobalEnable(XSimplealu *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_GIE, 1);
}

void XSimplealu_InterruptGlobalDisable(XSimplealu *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_GIE, 0);
}

void XSimplealu_InterruptEnable(XSimplealu *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_IER);
    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_IER, Register | Mask);
}

void XSimplealu_InterruptDisable(XSimplealu *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_IER);
    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_IER, Register & (~Mask));
}

void XSimplealu_InterruptClear(XSimplealu *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XSimplealu_WriteReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_ISR, Mask);
}

u32 XSimplealu_InterruptGetEnabled(XSimplealu *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_IER);
}

u32 XSimplealu_InterruptGetStatus(XSimplealu *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XSimplealu_ReadReg(InstancePtr->Axilites_BaseAddress, XSIMPLEALU_AXILITES_ADDR_ISR);
}

