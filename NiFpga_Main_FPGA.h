/*
 * Generated with the FPGA Interface C API Generator 20.0
 * for NI-RIO 20.0 or later.
 */
#ifndef __NiFpga_Main_FPGA_h__
#define __NiFpga_Main_FPGA_h__

#ifndef NiFpga_Version
   #define NiFpga_Version 200
#endif

#include "NiFpga.h"

/**
 * The filename of the FPGA bitfile.
 *
 * This is a #define to allow for string literal concatenation. For example:
 *
 *    static const char* const Bitfile = "C:\\" NiFpga_Main_FPGA_Bitfile;
 */
#define NiFpga_Main_FPGA_Bitfile "NiFpga_Main_FPGA.lvbitx"

/**
 * The signature of the FPGA bitfile.
 */
static const char* const NiFpga_Main_FPGA_Signature = "CD921BCCF68DE84FDAE82EFDC1D41F2C";

#if NiFpga_Cpp
extern "C"
{
#endif

typedef enum
{
   NiFpga_Main_FPGA_IndicatorBool_Flossing = 0x8122,
   NiFpga_Main_FPGA_IndicatorBool_LoopPeriodOOR = 0x82C6,
   NiFpga_Main_FPGA_IndicatorBool_TestPulseLoopPeriodOOR = 0x826A,
   NiFpga_Main_FPGA_IndicatorBool_Zoom = 0x8192
} NiFpga_Main_FPGA_IndicatorBool;

typedef enum
{
   NiFpga_Main_FPGA_IndicatorU8_Exitpore = 0x811E,
   NiFpga_Main_FPGA_IndicatorU8_Movingdir = 0x8112
} NiFpga_Main_FPGA_IndicatorU8;

typedef enum
{
   NiFpga_Main_FPGA_IndicatorI16_Ch1Filt = 0x82A6,
   NiFpga_Main_FPGA_IndicatorI16_Ch1Mean = 0x82AE,
   NiFpga_Main_FPGA_IndicatorI16_Ch2Filt = 0x82A2,
   NiFpga_Main_FPGA_IndicatorI16_Ch2Mean = 0x82AA,
   NiFpga_Main_FPGA_IndicatorI16_LtoRP2Mean = 0x8176,
   NiFpga_Main_FPGA_IndicatorI16_PrecaptureP1Mean = 0x820A,
   NiFpga_Main_FPGA_IndicatorI16_PreviousP2mean = 0x8116,
   NiFpga_Main_FPGA_IndicatorI16_PreviousV1 = 0x811A,
   NiFpga_Main_FPGA_IndicatorI16_PullI2mean = 0x813E,
   NiFpga_Main_FPGA_IndicatorI16_RtoLP2Mean = 0x8182,
   NiFpga_Main_FPGA_IndicatorI16_SpikefreeP2mean = 0x81BE,
   NiFpga_Main_FPGA_IndicatorI16_State4StartP1Mean = 0x8262,
   NiFpga_Main_FPGA_IndicatorI16_State7StartP2Mean = 0x825E
} NiFpga_Main_FPGA_IndicatorI16;

typedef enum
{
   NiFpga_Main_FPGA_IndicatorI32_Confirmedtagmax = 0x812C,
   NiFpga_Main_FPGA_IndicatorI32_Currenttagcountstop = 0x8130,
   NiFpga_Main_FPGA_IndicatorI32_Currenttagmax = 0x8188,
   NiFpga_Main_FPGA_IndicatorI32_Tagcount = 0x81C4
} NiFpga_Main_FPGA_IndicatorI32;

typedef enum
{
   NiFpga_Main_FPGA_IndicatorU32_LtoRCaliEndus = 0x8170,
   NiFpga_Main_FPGA_IndicatorU32_P1TestPulseStart = 0x8270,
   NiFpga_Main_FPGA_IndicatorU32_PreCaptureStartus = 0x8204,
   NiFpga_Main_FPGA_IndicatorU32_PreCaptureend = 0x81F0,
   NiFpga_Main_FPGA_IndicatorU32_PrepauseEndus = 0x81E4,
   NiFpga_Main_FPGA_IndicatorU32_PullStart = 0x8150,
   NiFpga_Main_FPGA_IndicatorU32_Pullindelaystart = 0x8138,
   NiFpga_Main_FPGA_IndicatorU32_Pullinporestart = 0x8144,
   NiFpga_Main_FPGA_IndicatorU32_PushStart = 0x8160,
   NiFpga_Main_FPGA_IndicatorU32_Recapturestart = 0x8128,
   NiFpga_Main_FPGA_IndicatorU32_Scancount = 0x8194,
   NiFpga_Main_FPGA_IndicatorU32_State10Start = 0x821C,
   NiFpga_Main_FPGA_IndicatorU32_State16Start = 0x81B8,
   NiFpga_Main_FPGA_IndicatorU32_State17Starttime = 0x81A8,
   NiFpga_Main_FPGA_IndicatorU32_State18starttime = 0x81A0,
   NiFpga_Main_FPGA_IndicatorU32_State3Start = 0x81E0,
   NiFpga_Main_FPGA_IndicatorU32_State4Start = 0x8294,
   NiFpga_Main_FPGA_IndicatorU32_State5Start = 0x823C,
   NiFpga_Main_FPGA_IndicatorU32_State6Start = 0x8238,
   NiFpga_Main_FPGA_IndicatorU32_State7Start = 0x8234,
   NiFpga_Main_FPGA_IndicatorU32_State8Start = 0x822C,
   NiFpga_Main_FPGA_IndicatorU32_State9Start = 0x8210
} NiFpga_Main_FPGA_IndicatorU32;

typedef enum
{
   NiFpga_Main_FPGA_ControlBool_Ch1MeanFiltSelect = 0x8256,
   NiFpga_Main_FPGA_ControlBool_Ch2MeanFiltSelect = 0x8252,
   NiFpga_Main_FPGA_ControlBool_ClearFIFO = 0x8246,
   NiFpga_Main_FPGA_ControlBool_EnableP2Exit = 0x820E,
   NiFpga_Main_FPGA_ControlBool_EnableRescan = 0x817A,
   NiFpga_Main_FPGA_ControlBool_Enhancements = 0x825A,
   NiFpga_Main_FPGA_ControlBool_Hold = 0x81CE,
   NiFpga_Main_FPGA_ControlBool_P1TestPulseState = 0x8276,
   NiFpga_Main_FPGA_ControlBool_ResetFilter = 0x82BA,
   NiFpga_Main_FPGA_ControlBool_ResetLoopOOR = 0x810E,
   NiFpga_Main_FPGA_ControlBool_ResetMovAvg = 0x82B2,
   NiFpga_Main_FPGA_ControlBool_ResetTestPulseLoop = 0x826E,
   NiFpga_Main_FPGA_ControlBool_Run = 0x829A,
   NiFpga_Main_FPGA_ControlBool_StartP1TestPulse = 0x827A
} NiFpga_Main_FPGA_ControlBool;

typedef enum
{
   NiFpga_Main_FPGA_ControlU8_CurrentState = 0x829E,
   NiFpga_Main_FPGA_ControlU8_PreviousState = 0x8222
} NiFpga_Main_FPGA_ControlU8;

typedef enum
{
   NiFpga_Main_FPGA_ControlI16_CaptureV1 = 0x81DA,
   NiFpga_Main_FPGA_ControlI16_CaptureV2 = 0x81D6,
   NiFpga_Main_FPGA_ControlI16_LtoRV1 = 0x822A,
   NiFpga_Main_FPGA_ControlI16_P1CaptureThreshold = 0x82C2,
   NiFpga_Main_FPGA_ControlI16_P1PreCaptureThreshold = 0x8202,
   NiFpga_Main_FPGA_ControlI16_P1TestPulseAmp = 0x8286,
   NiFpga_Main_FPGA_ControlI16_P1TestPulseBackground = 0x8282,
   NiFpga_Main_FPGA_ControlI16_P2CaptureThreshold = 0x828E,
   NiFpga_Main_FPGA_ControlI16_P2ExitThresholdpA = 0x8216,
   NiFpga_Main_FPGA_ControlI16_P2FoldThresholdpA = 0x819A,
   NiFpga_Main_FPGA_ControlI16_P2TagThresholdpA = 0x81CA,
   NiFpga_Main_FPGA_ControlI16_PauseV1 = 0x824E,
   NiFpga_Main_FPGA_ControlI16_PrecaptureV1 = 0x81FE,
   NiFpga_Main_FPGA_ControlI16_PrepauseV1 = 0x81EA,
   NiFpga_Main_FPGA_ControlI16_PullCaptureThreshold = 0x8142,
   NiFpga_Main_FPGA_ControlI16_PullV12 = 0x8156,
   NiFpga_Main_FPGA_ControlI16_PushV12 = 0x815E,
   NiFpga_Main_FPGA_ControlI16_ReverseV2 = 0x81D2,
   NiFpga_Main_FPGA_ControlI16_RtoLV1 = 0x81B6
} NiFpga_Main_FPGA_ControlI16;

typedef enum
{
   NiFpga_Main_FPGA_ControlU16_AvgWindowSize = 0x82B6
} NiFpga_Main_FPGA_ControlU16;

typedef enum
{
   NiFpga_Main_FPGA_ControlI32_Initialtagmax = 0x81C0,
   NiFpga_Main_FPGA_ControlI32_Recapturetagcount = 0x814C,
   NiFpga_Main_FPGA_ControlI32_Tagcountstop = 0x8184
} NiFpga_Main_FPGA_ControlI32;

typedef enum
{
   NiFpga_Main_FPGA_ControlU32_Baselinesettleus = 0x8164,
   NiFpga_Main_FPGA_ControlU32_DesiredLoopPeriodticks = 0x82C8,
   NiFpga_Main_FPGA_ControlU32_DesiredTestLoopPeriodticks = 0x8264,
   NiFpga_Main_FPGA_ControlU32_LtoRCaliWaitus = 0x816C,
   NiFpga_Main_FPGA_ControlU32_P1CaptureTimeoutus = 0x81DC,
   NiFpga_Main_FPGA_ControlU32_P1CaptureWaitus = 0x8290,
   NiFpga_Main_FPGA_ControlU32_P1TestPulseDuration = 0x827C,
   NiFpga_Main_FPGA_ControlU32_P2CaptureTimeoutus = 0x8230,
   NiFpga_Main_FPGA_ControlU32_P2CaptureWaitus = 0x8248,
   NiFpga_Main_FPGA_ControlU32_P2ExitWaitus = 0x8218,
   NiFpga_Main_FPGA_ControlU32_P2ReverseTimeoutus = 0x8288,
   NiFpga_Main_FPGA_ControlU32_PauseFilterResetus = 0x8240,
   NiFpga_Main_FPGA_ControlU32_Precapturehighlimitus = 0x81F4,
   NiFpga_Main_FPGA_ControlU32_Precapturelowlimitus = 0x81F8,
   NiFpga_Main_FPGA_ControlU32_PrepauseWaitus = 0x81EC,
   NiFpga_Main_FPGA_ControlU32_PullTimeoutus = 0x8148,
   NiFpga_Main_FPGA_ControlU32_Pullindelayus = 0x8134,
   NiFpga_Main_FPGA_ControlU32_Pushtimeus = 0x8158,
   NiFpga_Main_FPGA_ControlU32_Recapturetimeoutus = 0x8124,
   NiFpga_Main_FPGA_ControlU32_RtoLCaliWaitus = 0x8168,
   NiFpga_Main_FPGA_ControlU32_Scancountmax = 0x818C,
   NiFpga_Main_FPGA_ControlU32_TOFHoldus = 0x817C,
   NiFpga_Main_FPGA_ControlU32_Tagdurationmaxus = 0x81B0,
   NiFpga_Main_FPGA_ControlU32_Tagdurationminus = 0x81AC,
   NiFpga_Main_FPGA_ControlU32_Tagholdus = 0x819C,
   NiFpga_Main_FPGA_ControlU32_Tagwaitus = 0x81A4,
   NiFpga_Main_FPGA_ControlU32_TransientSettleTimeus = 0x8224
} NiFpga_Main_FPGA_ControlU32;

typedef enum
{
   NiFpga_Main_FPGA_ControlArrayI32_scaledcoefficients = 0x82BC
} NiFpga_Main_FPGA_ControlArrayI32;

typedef enum
{
   NiFpga_Main_FPGA_ControlArrayI32Size_scaledcoefficients = 6
} NiFpga_Main_FPGA_ControlArrayI32Size;


#if NiFpga_Cpp
}
#endif

#endif
