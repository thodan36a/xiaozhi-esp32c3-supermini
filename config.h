#ifndef _BOARD_CONFIG_H_
#define _BOARD_CONFIG_H_

#include <driver/gpio.h>

// ============================================================
// ESP32-C3 SuperMini
// MAX98357A + INMP441 + ST7789
// ============================================================

#define AUDIO_INPUT_SAMPLE_RATE  16000
#define AUDIO_OUTPUT_SAMPLE_RATE 24000

// Simplex I2S mode (separate TX/RX channels)
#define AUDIO_I2S_METHOD_SIMPLEX

#pragma once

// -------------- Display -------------
#define DISPLAY_SPI_HOST      SPI2_HOST

// SPI pins for ST7735S
#define DISPLAY_SCLK_GPIO     GPIO_NUM_4
#define DISPLAY_MOSI_GPIO     GPIO_NUM_6
#define DISPLAY_CS_GPIO       GPIO_NUM_7
#define DISPLAY_DC_GPIO       GPIO_NUM_8
#define DISPLAY_RST_GPIO      GPIO_NUM_10
#define DISPLAY_BL_GPIO       GPIO_NUM_21

// ST7735S parameters
#define DISPLAY_WIDTH           128
#define DISPLAY_HEIGHT          160
#define DISPLAY_SWAP_XY         true
#define DISPLAY_MIRROR_X        false
#define DISPLAY_MIRROR_Y        true
#define DISPLAY_INVERT_COLOR    true
#define DISPLAY_RGB_ORDER       LCD_RGB_ELEMENT_ORDER_RGB
#define DISPLAY_OFFSET_X        0
#define DISPLAY_OFFSET_Y        0
#define DISPLAY_SPI_MODE        0

// -------------- Buttons -------------
#define BOOT_BUTTON_GPIO        GPIO_NUM_9   // Wake / PTT
#define BOOT_BUTTON_ACTIVE_LEVEL 0

#define VOLUME_UP_BUTTON_GPIO   GPIO_NUM_2
#define VOLUME_UP_ACTIVE_LEVEL  0

#define VOLUME_DOWN_BUTTON_GPIO GPIO_NUM_1
#define VOLUME_DOWN_ACTIVE_LEVEL 0

// ========== WS2812 RGB LED ==========
#define WS2812_DATA_GPIO        GPIO_NUM_5
#define WS2812_COUNT            1
#define WS2812_BRIGHTNESS       64   // 0-255

// -------------- Audio (if used) -----
// (Comment these if you are not using I2S)
// Replace or remove if no audio hardware
/*
#define AUDIO_IN_BCLK_GPIO      GPIO_NUM_x
#define AUDIO_IN_LRCK_GPIO      GPIO_NUM_x
#define AUDIO_IN_DATA_GPIO      GPIO_NUM_x

#define AUDIO_OUT_BCLK_GPIO     GPIO_NUM_x
#define AUDIO_OUT_LRCK_GPIO     GPIO_NUM_x
#define AUDIO_OUT_DATA_GPIO     GPIO_NUM_x
*/

// -------------- Misc ---------------
// Default UART config (do not override unless needed)
#define UART_CONSOLE            UART_NUM_0

// Boot button hold timeout (ms) for config mode
#define BOOT_BUTTON_HOLD_MS     1500

// ------------- End of config.h ------

#endif // _BOARD_CONFIG_H_
