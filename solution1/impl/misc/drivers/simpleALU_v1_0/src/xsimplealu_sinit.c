// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xsimplealu.h"

extern XSimplealu_Config XSimplealu_ConfigTable[];

XSimplealu_Config *XSimplealu_LookupConfig(u16 DeviceId) {
	XSimplealu_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XSIMPLEALU_NUM_INSTANCES; Index++) {
		if (XSimplealu_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XSimplealu_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XSimplealu_Initialize(XSimplealu *InstancePtr, u16 DeviceId) {
	XSimplealu_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XSimplealu_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XSimplealu_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

