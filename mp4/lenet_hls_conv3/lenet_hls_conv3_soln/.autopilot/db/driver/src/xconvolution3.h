// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XCONVOLUTION3_H
#define XCONVOLUTION3_H

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
#include "xconvolution3_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XConvolution3_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XConvolution3;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XConvolution3_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XConvolution3_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XConvolution3_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XConvolution3_ReadReg(BaseAddress, RegOffset) \
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
int XConvolution3_Initialize(XConvolution3 *InstancePtr, u16 DeviceId);
XConvolution3_Config* XConvolution3_LookupConfig(u16 DeviceId);
int XConvolution3_CfgInitialize(XConvolution3 *InstancePtr, XConvolution3_Config *ConfigPtr);
#else
int XConvolution3_Initialize(XConvolution3 *InstancePtr, const char* InstanceName);
int XConvolution3_Release(XConvolution3 *InstancePtr);
#endif

void XConvolution3_Start(XConvolution3 *InstancePtr);
u32 XConvolution3_IsDone(XConvolution3 *InstancePtr);
u32 XConvolution3_IsIdle(XConvolution3 *InstancePtr);
u32 XConvolution3_IsReady(XConvolution3 *InstancePtr);
void XConvolution3_EnableAutoRestart(XConvolution3 *InstancePtr);
void XConvolution3_DisableAutoRestart(XConvolution3 *InstancePtr);
u32 XConvolution3_Get_return(XConvolution3 *InstancePtr);

void XConvolution3_Set_input_r(XConvolution3 *InstancePtr, u32 Data);
u32 XConvolution3_Get_input_r(XConvolution3 *InstancePtr);
void XConvolution3_Set_weights(XConvolution3 *InstancePtr, u32 Data);
u32 XConvolution3_Get_weights(XConvolution3 *InstancePtr);
void XConvolution3_Set_bias(XConvolution3 *InstancePtr, u32 Data);
u32 XConvolution3_Get_bias(XConvolution3 *InstancePtr);
void XConvolution3_Set_output_r(XConvolution3 *InstancePtr, u32 Data);
u32 XConvolution3_Get_output_r(XConvolution3 *InstancePtr);

void XConvolution3_InterruptGlobalEnable(XConvolution3 *InstancePtr);
void XConvolution3_InterruptGlobalDisable(XConvolution3 *InstancePtr);
void XConvolution3_InterruptEnable(XConvolution3 *InstancePtr, u32 Mask);
void XConvolution3_InterruptDisable(XConvolution3 *InstancePtr, u32 Mask);
void XConvolution3_InterruptClear(XConvolution3 *InstancePtr, u32 Mask);
u32 XConvolution3_InterruptGetEnabled(XConvolution3 *InstancePtr);
u32 XConvolution3_InterruptGetStatus(XConvolution3 *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
