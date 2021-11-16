// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XSIMPLEALU_H
#define XSIMPLEALU_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xsimplealu_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XSimplealu_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XSimplealu;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XSimplealu_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XSimplealu_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XSimplealu_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XSimplealu_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XSimplealu_Initialize(XSimplealu *InstancePtr, u16 DeviceId);
XSimplealu_Config* XSimplealu_LookupConfig(u16 DeviceId);
int XSimplealu_CfgInitialize(XSimplealu *InstancePtr, XSimplealu_Config *ConfigPtr);
#else
int XSimplealu_Initialize(XSimplealu *InstancePtr, const char* InstanceName);
int XSimplealu_Release(XSimplealu *InstancePtr);
#endif

void XSimplealu_Start(XSimplealu *InstancePtr);
u32 XSimplealu_IsDone(XSimplealu *InstancePtr);
u32 XSimplealu_IsIdle(XSimplealu *InstancePtr);
u32 XSimplealu_IsReady(XSimplealu *InstancePtr);
void XSimplealu_EnableAutoRestart(XSimplealu *InstancePtr);
void XSimplealu_DisableAutoRestart(XSimplealu *InstancePtr);
u32 XSimplealu_Get_return(XSimplealu *InstancePtr);

void XSimplealu_Set_ina_V(XSimplealu *InstancePtr, u32 Data);
u32 XSimplealu_Get_ina_V(XSimplealu *InstancePtr);
void XSimplealu_Set_inb_V(XSimplealu *InstancePtr, u32 Data);
u32 XSimplealu_Get_inb_V(XSimplealu *InstancePtr);
void XSimplealu_Set_op_V(XSimplealu *InstancePtr, u32 Data);
u32 XSimplealu_Get_op_V(XSimplealu *InstancePtr);

void XSimplealu_InterruptGlobalEnable(XSimplealu *InstancePtr);
void XSimplealu_InterruptGlobalDisable(XSimplealu *InstancePtr);
void XSimplealu_InterruptEnable(XSimplealu *InstancePtr, u32 Mask);
void XSimplealu_InterruptDisable(XSimplealu *InstancePtr, u32 Mask);
void XSimplealu_InterruptClear(XSimplealu *InstancePtr, u32 Mask);
u32 XSimplealu_InterruptGetEnabled(XSimplealu *InstancePtr);
u32 XSimplealu_InterruptGetStatus(XSimplealu *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
