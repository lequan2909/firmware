#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// ESP32-S3 custom hardware using the provided legacy JSON pin map.
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// I2C control bus for CST816S touch, ES8311 DAC, and ES7210 ADC.
static const uint8_t SDA = 12;
static const uint8_t SCL = 11;
#define GROVE_SDA SDA
#define GROVE_SCL SCL
#define CST816S_I2C_CONFIG_SDA_IO_NUM SDA
#define CST816S_I2C_CONFIG_SCL_IO_NUM SCL
#define CST816S_TOUCH_CONFIG_INT_GPIO_NUM -1
#define CST816S_TOUCH_CONFIG_RST_GPIO_NUM -1
#define TOUCH_CST816S_I2C 1
#define TOUCH_INT CST816S_TOUCH_CONFIG_INT_GPIO_NUM
#define TOUCH_RST CST816S_TOUCH_CONFIG_RST_GPIO_NUM
#define CST816S_ADDR 0x15
#define ES8311_ADDR 0x18
#define ES7210_ADDR 0x40

// Display SPI bus: NV3023, 296x240, SPI mode 3, X offset 24.
static const uint8_t SS = 14;
static const uint8_t MOSI = 10;
static const int8_t MISO = -1;
static const uint8_t SCK = 9;

#define HAS_SCREEN 1
#define HAS_TOUCH 1
#define USER_SETUP_LOADED 1
#define USE_ARDUINO_GFX 1
#define TFT_DATABUS_N 0
#define TFT_DISPLAY_DRIVER_N 18
#define TFT_WIDTH 296
#define TFT_HEIGHT 240
#define TFT_ROTATION 3
#define ROTATION 3
#define TFT_IPS true
#define TFT_RGB_ORDER 1
#define TFT_COL_OFS1 24
#define TFT_ROW_OFS1 0
#define TFT_COL_OFS2 24
#define TFT_ROW_OFS2 0
#define TFT_SPI_MODE SPI_MODE3
#define TFT_BACKLIGHT_ON 1
#define TFT_BL 13
#define TFT_RST 18
#define TFT_DC 8
#define TFT_MOSI MOSI
#define TFT_SCLK SCK
#define TFT_MISO MISO
#define TFT_CS SS
#define TOUCH_CS -1
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 16000000
#define SPI_TOUCH_FREQUENCY 2500000
#define MINBRIGHT 10

// Audio: ES8311 playback in standard I2S and ES7210 multi-mic capture in TDM.
#define HAS_ES8311
#define ES8311_CODEC 1
#define HAS_ES7210
#define ES7210_CODEC 1
#define I2S_MCLK_PIN 5
#define I2S_BCLK_PIN 15
#define I2S_WS_PIN 16
#define I2S_DOUT_PIN 6
#define I2S_DIN_PIN 7
#define MCLK I2S_MCLK_PIN
#define BCLK I2S_BCLK_PIN
#define WCLK I2S_WS_PIN
#define DOUT I2S_DOUT_PIN
#define DIN I2S_DIN_PIN
#define CODEC_PA_PIN 4

// Buttons and LEDs from the legacy config.
#define BTN_ALIAS "\"OK\""
#define HAS_3_BUTTONS
#define SEL_BTN 0
#define UP_BTN 40
#define DW_BTN 39
#define BTN_ACT LOW
#define HAS_RGB_LED 1
#define LED_COUNT 1
#define LED_TYPE WS2812
#define LED_ORDER GRB
#define RGB_LED 48
#define TXLED -1
#define LED_ON HIGH
#define LED_OFF LOW

// Battery and charging detection.
#define BAT_PIN 17
#define ANALOG_BAT_PIN 17
#define CHARGING_PIN 47
#define CHARGING_ACTIVE_LEVEL LOW

// 4G modem UART pins are not present in the legacy config.
static const int8_t TXD1 = -1;
static const int8_t RXD1 = -1;
static const int8_t MODEM_PWRKEY = -1;
static const int8_t MODEM_RST = -1;
#define BAD_TX TXD1
#define BAD_RX RXD1

#define SDCARD_CS -1
#define SPI_SCK_PIN SCK
#define SPI_MOSI_PIN MOSI
#define SPI_MISO_PIN MISO
#define SPI_SS_PIN SS

#endif /* Pins_Arduino_h */
