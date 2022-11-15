#ifndef __PAL_SWB_SENSORS_H__
#define __PAL_SWB_SENSORS_H__

#include "pal_sensors.h"
#include <libpldm/base.h>
#include <libpldm/platform.h>

#define SWB_CPLD_ADDR (0x26)

struct pldm_snr_reading_t {
  struct pldm_msg_hdr hdr;
  struct pldm_get_sensor_reading_resp data;
};

// SWB sensor table
enum {
  SWB_SENSOR_TEMP_NIC_0 = 0x01,
  SWB_SENSOR_VOLT_NIC_0 = 0x02,
  SWB_SENSOR_IOUT_NIC_0 = 0x03,
  SWB_SENSOR_POUT_NIC_0 = 0x04,
  SWB_SENSOR_TEMP_NIC_1 = 0x05,
  SWB_SENSOR_VOLT_NIC_1 = 0x06,
  SWB_SENSOR_IOUT_NIC_1 = 0x07,
  SWB_SENSOR_POUT_NIC_1 = 0x08,
  SWB_SENSOR_TEMP_NIC_2 = 0x0A,
  SWB_SENSOR_VOLT_NIC_2 = 0x0B,
  SWB_SENSOR_IOUT_NIC_2 = 0x0C,
  SWB_SENSOR_POUT_NIC_2 = 0x0D,
  SWB_SENSOR_TEMP_NIC_3 = 0x11,
  SWB_SENSOR_VOLT_NIC_3 = 0x12,
  SWB_SENSOR_IOUT_NIC_3 = 0x13,
  SWB_SENSOR_POUT_NIC_3 = 0x14,
  SWB_SENSOR_TEMP_NIC_4 = 0x15,
  SWB_SENSOR_VOLT_NIC_4 = 0x16,
  SWB_SENSOR_IOUT_NIC_4 = 0x17,
  SWB_SENSOR_POUT_NIC_4 = 0x18,
  SWB_SENSOR_TEMP_NIC_5 = 0x1A,
  SWB_SENSOR_VOLT_NIC_5 = 0x1B,
  SWB_SENSOR_IOUT_NIC_5 = 0x1C,
  SWB_SENSOR_POUT_NIC_5 = 0x1D,
  SWB_SENSOR_TEMP_NIC_6 = 0x21,
  SWB_SENSOR_VOLT_NIC_6 = 0x22,
  SWB_SENSOR_IOUT_NIC_6 = 0x23,
  SWB_SENSOR_POUT_NIC_6 = 0x24,
  SWB_SENSOR_TEMP_NIC_7 = 0x25,
  SWB_SENSOR_VOLT_NIC_7 = 0x26,
  SWB_SENSOR_IOUT_NIC_7 = 0x27,
  SWB_SENSOR_POUT_NIC_7 = 0x28,
  SWB_SENSOR_TEMP_PDB_HSC = 0x2A,
  SWB_SENSOR_VOUT_PDB_HSC = 0x2B,
  SWB_SENSOR_IOUT_PDB_HSC = 0x2C,
  SWB_SENSOR_POUT_PDB_HSC = 0x2D,
  SWB_SENSOR_BB_P12V_AUX = 0x30,
  SWB_SENSOR_BB_P5V_AUX = 0x31,
  SWB_SENSOR_BB_P3V3_AUX = 0x32,
  SWB_SENSOR_BB_P1V2_AUX = 0x33,
  SWB_SENSOR_BB_P3V3 = 0x34,
  SWB_SENSOR_BB_P1V8_PEX0 = 0x35,
  SWB_SENSOR_BB_P1V8_PEX1 = 0x36,
  SWB_SENSOR_BB_P1V8_PEX2 = 0x37,
  SWB_SENSOR_BB_P1V8_PEX3 = 0x38,
  SWB_SENSOR_VR_TEMP_PEX_0 = 0x40,
  SWB_SENSOR_P0V8_VOLT_PEX_0 = 0x41,
  SWB_SENSOR_P0V8_IOUT_PEX_0 = 0x42,
  SWB_SENSOR_P0V8_POUT_PEX_0 = 0x43,
  SWB_SENSOR_P1V25_VOLT_PEX_0 = 0x44,
  SWB_SENSOR_P1V25_IOUT_PEX_0 = 0x45,
  SWB_SENSOR_P1V25_POUT_PEX_0 = 0x46,
  SWB_SENSOR_VR_TEMP_PEX_1 = 0x47,
  SWB_SENSOR_P0V8_VOLT_PEX_1 = 0x48,
  SWB_SENSOR_P0V8_IOUT_PEX_1 = 0x49,
  SWB_SENSOR_P0V8_POUT_PEX_1 = 0x4A,
  SWB_SENSOR_P1V25_VOLT_PEX_1 = 0x4B,
  SWB_SENSOR_P1V25_IOUT_PEX_1 = 0x4C,
  SWB_SENSOR_P1V25_POUT_PEX_1 = 0x4D,
  SWB_SENSOR_VR_TEMP_PEX_2 = 0x50,
  SWB_SENSOR_P0V8_VOLT_PEX_2 = 0x51,
  SWB_SENSOR_P0V8_IOUT_PEX_2 = 0x52,
  SWB_SENSOR_P0V8_POUT_PEX_2 = 0x53,
  SWB_SENSOR_P1V25_VOLT_PEX_2 = 0x54,
  SWB_SENSOR_P1V25_IOUT_PEX_2 = 0x55,
  SWB_SENSOR_P1V25_POUT_PEX_2 = 0x56,
  SWB_SENSOR_VR_TEMP_PEX_3 = 0x57,
  SWB_SENSOR_P0V8_VOLT_PEX_3 = 0x58,
  SWB_SENSOR_P0V8_IOUT_PEX_3 = 0x59,
  SWB_SENSOR_P0V8_POUT_PEX_3 = 0x5A,
  SWB_SENSOR_P1V25_VOLT_PEX_3 = 0x5B,
  SWB_SENSOR_P1V25_IOUT_PEX_3 = 0x5C,
  SWB_SENSOR_P1V25_POUT_PEX_3 = 0x5D,
  SWB_SENSOR_P1V8_VOLT_PEX = 0x60,
  SWB_SENSOR_P1V8_IOUT_PEX = 0x61,
  SWB_SENSOR_P1V8_POUT_PEX = 0x62,
  SWB_SENSOR_TEMP_PEX_0 = 0x6A,
  SWB_SENSOR_TEMP_PEX_1 = 0x6B,
  SWB_SENSOR_TEMP_PEX_2 = 0x6C,
  SWB_SENSOR_TEMP_PEX_3 = 0x6D,
  SWB_SENSOR_SYSTEM_INLET_TEMP = 0x70,
  SWB_SENSOR_OUTLET_TEMP_L1 = 0x71,
  SWB_SENSOR_OUTLET_TEMP_L2 = 0x72,
  SWB_SENSOR_OUTLET_TEMP_R1 = 0x73,
  SWB_SENSOR_OUTLET_TEMP_R2 = 0x74,
  SWB_SENSOR_TEMP_E1S_0 = 0x80,
  SWB_SENSOR_VOLT_E1S_0 = 0x81,
  SWB_SENSOR_CURR_E1S_0 = 0x82,
  SWB_SENSOR_POUT_E1S_0 = 0x83,
  SWB_SENSOR_TEMP_E1S_1 = 0x84,
  SWB_SENSOR_VOLT_E1S_1 = 0x85,
  SWB_SENSOR_CURR_E1S_1 = 0x86,
  SWB_SENSOR_POUT_E1S_1 = 0x87,
  SWB_SENSOR_TEMP_E1S_2 = 0x88,
  SWB_SENSOR_VOLT_E1S_2 = 0x89,
  SWB_SENSOR_CURR_E1S_2 = 0x8A,
  SWB_SENSOR_POUT_E1S_2 = 0x8B,
  SWB_SENSOR_TEMP_E1S_3 = 0x8C,
  SWB_SENSOR_VOLT_E1S_3 = 0x8D,
  SWB_SENSOR_CURR_E1S_3 = 0x8E,
  SWB_SENSOR_POUT_E1S_3 = 0x8F,
  SWB_SENSOR_TEMP_E1S_4 = 0x90,
  SWB_SENSOR_VOLT_E1S_4 = 0x91,
  SWB_SENSOR_CURR_E1S_4 = 0x92,
  SWB_SENSOR_POUT_E1S_4 = 0x93,
  SWB_SENSOR_TEMP_E1S_5 = 0x94,
  SWB_SENSOR_VOLT_E1S_5 = 0x95,
  SWB_SENSOR_CURR_E1S_5 = 0x96,
  SWB_SENSOR_POUT_E1S_5 = 0x97,
  SWB_SENSOR_TEMP_E1S_6 = 0x98,
  SWB_SENSOR_VOLT_E1S_6 = 0x99,
  SWB_SENSOR_CURR_E1S_6 = 0x9A,
  SWB_SENSOR_POUT_E1S_6 = 0x9B,
  SWB_SENSOR_TEMP_E1S_7 = 0x9C,
  SWB_SENSOR_VOLT_E1S_7 = 0x9D,
  SWB_SENSOR_CURR_E1S_7 = 0x9E,
  SWB_SENSOR_POUT_E1S_7 = 0x9F,
  SWB_SENSOR_TEMP_E1S_8 = 0xA0,
  SWB_SENSOR_VOLT_E1S_8 = 0xA1,
  SWB_SENSOR_CURR_E1S_8 = 0xA2,
  SWB_SENSOR_POUT_E1S_8 = 0xA3,
  SWB_SENSOR_TEMP_E1S_9 = 0xA4,
  SWB_SENSOR_VOLT_E1S_9 = 0xA5,
  SWB_SENSOR_CURR_E1S_9 = 0xA6,
  SWB_SENSOR_POUT_E1S_9 = 0xA7,
  SWB_SENSOR_TEMP_E1S_10 = 0xA8,
  SWB_SENSOR_VOLT_E1S_10 = 0xA9,
  SWB_SENSOR_CURR_E1S_10 = 0xAA,
  SWB_SENSOR_POUT_E1S_10 = 0xAB,
  SWB_SENSOR_TEMP_E1S_11 = 0xAC,
  SWB_SENSOR_VOLT_E1S_11 = 0xAD,
  SWB_SENSOR_CURR_E1S_11 = 0xAE,
  SWB_SENSOR_POUT_E1S_11 = 0xAF,
  SWB_SENSOR_TEMP_E1S_12 = 0xB0,
  SWB_SENSOR_VOLT_E1S_12 = 0xB1,
  SWB_SENSOR_CURR_E1S_12 = 0xB2,
  SWB_SENSOR_POUT_E1S_12 = 0xB3,
  SWB_SENSOR_TEMP_E1S_13 = 0xB4,
  SWB_SENSOR_VOLT_E1S_13 = 0xB5,
  SWB_SENSOR_CURR_E1S_13 = 0xB6,
  SWB_SENSOR_POUT_E1S_13 = 0xB7,
  SWB_SENSOR_TEMP_E1S_14 = 0xB8,
  SWB_SENSOR_VOLT_E1S_14 = 0xB9,
  SWB_SENSOR_CURR_E1S_14 = 0xBA,
  SWB_SENSOR_POUT_E1S_14 = 0xBB,
  SWB_SENSOR_TEMP_E1S_15 = 0xBC,
  SWB_SENSOR_VOLT_E1S_15 = 0xBD,
  SWB_SENSOR_CURR_E1S_15 = 0xBE,
  SWB_SENSOR_POUT_E1S_15 = 0xBF,

  SWB_SENSOR_CPLD_HEALTH = 0xD0,
};

#endif
