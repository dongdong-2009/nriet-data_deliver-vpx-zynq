#ifndef _XADC_CORE_H
#define _XADC_CORE_H

#define MAX_PATH_SIZE	200
#define MAX_NAME_SIZE	50
#define MAX_VALUE_SIZE  100

#define MAX_CMD_NAME_SIZE 100
#define MAX_UNIT_NAME_SIZE 50

#define SYS_PATH_IIO	"/sys/bus/iio/devices/iio:device0"

#define VCC_INT_CMD		"xadc_get_value_vccint"
#define VCC_AUX_CMD		"xadc_get_value_vccaux"
#define VCC_BRAM_CMD		"xadc_get_value_vccbram"
#define VCC_TEMP_CMD		"xadc_get_value_temp"
#define VCC_EXT_CH_CMD		"xadc_get_value_ext_ch"


#define FPGA_TEMP "/sys/bus/iio/devices/iio:device0/in_temp0_raw"
#define TEMP_1 "/sys/bus/iio/devices/iio:device0/in_voltage8_raw"
#define TEMP_2 "/sys/bus/iio/devices/iio:device0/in_voltage13_raw"
#define TEMP_3 "/sys/bus/iio/devices/iio:device0/in_voltage16_raw"
#define TEMP_4 "/sys/bus/iio/devices/iio:device0/in_voltage18_raw"
#define TEMP_5 "/sys/bus/iio/devices/iio:device0/in_voltage23_raw"

#define VCC_0 "/sys/bus/iio/devices/iio:device0/in_voltage9_raw"
#define VCC_1 "/sys/bus/iio/devices/iio:device0/in_voltage10_raw"
#define VCC_2 "/sys/bus/iio/devices/iio:device0/in_voltage11_raw"
#define VCC_3 "/sys/bus/iio/devices/iio:device0/in_voltage12_raw"
#define VCC_4 "/sys/bus/iio/devices/iio:device0/in_voltage14_raw"
#define VCC_5 "/sys/bus/iio/devices/iio:device0/in_voltage15_raw"
#define VCC_6 "/sys/bus/iio/devices/iio:device0/in_voltage17_raw"
#define VCC_7 "/sys/bus/iio/devices/iio:device0/in_voltage19_raw"
#define VCC_8 "/sys/bus/iio/devices/iio:device0/in_voltage20_raw"
#define VCC_9 "/sys/bus/iio/devices/iio:device0/in_voltage21_raw"
#define VCC_10 "/sys/bus/iio/devices/iio:device0/in_voltage22_raw"



static const int mV_mul = 1000;

static const int multiplier = 1 << 12;

enum EConvType
{
	EConvType_None,
	EConvType_Raw_to_Scale,
	EConvType_Scale_to_Raw,
	EConvType_Max
};

enum XADC_Param
{
	EParamVccInt,
  	EParamVccAux,
	EParamVccBRam,
	EParamTemp,
	EParamVAux0,
	EParamMax
};

struct command
{
	const enum XADC_Param parameter_id;
	const char cmd_name[MAX_CMD_NAME_SIZE];
	const char unit[MAX_UNIT_NAME_SIZE];
};

struct command command_list[EParamMax] = {
				{EParamVccInt, 	VCC_INT_CMD, "mV"},
				{EParamVccAux, 	VCC_AUX_CMD, "mV"},
				{EParamVccBRam, VCC_BRAM_CMD, "mV"},
				{EParamTemp, 	VCC_TEMP_CMD, "Degree Celsius"},
				{EParamVAux0, 	VCC_EXT_CH_CMD, "mV"}
};

struct XadcParameter
{
	const char name[MAX_NAME_SIZE];
	float value;
	float (* const conv_fn)(float,enum EConvType);
};

#endif

