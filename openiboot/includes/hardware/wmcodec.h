#ifndef HW_WM8958_H
#define HW_WM8958_H

#include "hardware/s5l8900.h"

#ifdef CONFIG_IPOD
#define WMCODEC_I2C 1
#define WMCODEC_I2C_SLAVE_ADDR 0x36
#endif

#ifdef CONFIG_IPHONE
#define WMCODEC_I2C 0
#define WMCODEC_I2C_SLAVE_ADDR 0x34
#endif

#ifdef CONFIG_3G
#define WMCODEC_I2C 0
#define WMCODEC_I2C_SLAVE_ADDR 0x36
#endif

#endif
