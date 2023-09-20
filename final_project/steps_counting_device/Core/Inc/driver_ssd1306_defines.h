/**
 * @file       driver_ssd1306_defines.h
 * @copyright
 * @license
 * @version    1.0.0
 * @date
 * @author     Huy Le
 * @brief
 * @note
 */

/* Define to prevent recursive inclusion ------------------------------ */
#ifndef __DRIVER_SSD1306_DEFINES_H_
#define __DRIVER_SSD1306_DEFINES_H_

/* Public defines ----------------------------------------------------- */
//#define USE_DMA					// uncomment if used I2C DMA mode
#define STM32_I2C_PORT		hi2c3 	// I2C port as defined in main generated by CubeMx
#define SSD1306_ADDRESS		0x3C	// I2C address display

#endif /* __DRIVER_SSD1306_DEFINES_H_ */

/* End of file -------------------------------------------------------- */