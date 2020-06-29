/*
 * Generated with the FPGA Interface C API Generator 20.0
 * for NI-RIO 20.0 or later.
 */
#ifndef __NiFpga_Filter_and_mean_h__
#define __NiFpga_Filter_and_mean_h__

#ifndef NiFpga_Version
   #define NiFpga_Version 200
#endif

#include "NiFpga.h"

/**
 * The filename of the FPGA bitfile.
 *
 * This is a #define to allow for string literal concatenation. For example:
 *
 *    static const char* const Bitfile = "C:\\" NiFpga_Filter_and_mean_Bitfile;
 */
#define NiFpga_Filter_and_mean_Bitfile "NiFpga_Filter_and_mean.lvbitx"

/**
 * The signature of the FPGA bitfile.
 */
static const char* const NiFpga_Filter_and_mean_Signature = "C49B8C31CD940491A1A7B66963D1E387";

#if NiFpga_Cpp
extern "C"
{
#endif

typedef enum
{
   NiFpga_Filter_and_mean_IndicatorI16_Ch1Filt = 0x812E,
   NiFpga_Filter_and_mean_IndicatorI16_Ch1Mean = 0x8136,
   NiFpga_Filter_and_mean_IndicatorI16_Ch2Filt = 0x812A,
   NiFpga_Filter_and_mean_IndicatorI16_Ch2Mean = 0x8132
} NiFpga_Filter_and_mean_IndicatorI16;

typedef enum
{
   NiFpga_Filter_and_mean_IndicatorU16_CurrentNumAccumulated = 0x8112,
   NiFpga_Filter_and_mean_IndicatorU16_TotalNumAccumulated = 0x810E
} NiFpga_Filter_and_mean_IndicatorU16;

typedef enum
{
   NiFpga_Filter_and_mean_ControlBool_ClearFIFO = 0x813A,
   NiFpga_Filter_and_mean_ControlBool_ResetFilter = 0x8142,
   NiFpga_Filter_and_mean_ControlBool_ResetMovingAvg = 0x8116
} NiFpga_Filter_and_mean_ControlBool;

typedef enum
{
   NiFpga_Filter_and_mean_ControlI16_Ch1Input = 0x814A,
   NiFpga_Filter_and_mean_ControlI16_Ch2Input = 0x8146
} NiFpga_Filter_and_mean_ControlI16;

typedef enum
{
   NiFpga_Filter_and_mean_ControlU16_AvgWindowSize = 0x814E,
   NiFpga_Filter_and_mean_ControlU16_SampleDivider = 0x8126,
   NiFpga_Filter_and_mean_ControlU16_SampleDividerCounter = 0x8122
} NiFpga_Filter_and_mean_ControlU16;

typedef enum
{
   NiFpga_Filter_and_mean_ControlI32_Accumulator1 = 0x8150,
   NiFpga_Filter_and_mean_ControlI32_Accumulator2 = 0x8154,
   NiFpga_Filter_and_mean_ControlI32_DividerAccumulator1 = 0x811C,
   NiFpga_Filter_and_mean_ControlI32_DividerAccumulator2 = 0x8118
} NiFpga_Filter_and_mean_ControlI32;

typedef enum
{
   NiFpga_Filter_and_mean_ControlArrayI32_scaledcoefficients = 0x813C
} NiFpga_Filter_and_mean_ControlArrayI32;

typedef enum
{
   NiFpga_Filter_and_mean_ControlArrayI32Size_scaledcoefficients = 6
} NiFpga_Filter_and_mean_ControlArrayI32Size;


#if NiFpga_Cpp
}
#endif

#endif
