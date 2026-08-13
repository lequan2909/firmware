#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#define USB_VID 0x303a
#define USB_PID 0x1001

// ESP32-S3 custom hardware scaffold based on user-supplied peripherals.
// TODO: Replace CUSTOM_PIN_* placeholders with the exact GPIOs from the schematic.
#ifndef CUSTOM_PIN_UNASSIGNED
#define CUSTOM_PIN_UNASSIGNED -1
#endif

static const uint8_t TX = 43;
static const uint8_t RX = 44;

// 4G modem UART1 / auxiliary USB-C serial path.
static const int8_t TXD1 = CUSTOM_PIN_UNASSIGNED;
static const int8_t RXD1 = CUSTOM_PIN_UNASSIGNED;
static const int8_t MODEM_PWRKEY = CUSTOM_PIN_UNASSIGNED;
static const int8_t MODEM_RST = CUSTOM_PIN_UNASSIGNED;

// Shared I2C bus for CST816S touch, ES8311 DAC control, and ES7210 ADC control.
static const int8_t SDA = CUSTOM_PIN_UNASSIGNED;
static const int8_t SCL = CUSTOM_PIN_UNASSIGNED;
#define TOUCH_INT CUSTOM_PIN_UNASSIGNED
#define TOUCH_RST CUSTOM_PIN_UNASSIGNED
#define CST816S_ADDR 0x15
#define ES8311_ADDR 0x18
#define ES7210_ADDR 0x40

// Display SPI bus (SPI3_HOST/HSPI in Arduino core naming).
static const int8_t SS = CUSTOM_PIN_UNASSIGNED;
static const int8_t MOSI = CUSTOM_PIN_UNASSIGNED;
static const int8_t MISO = CUSTOM_PIN_UNASSIGNED;
static const int8_t SCK = CUSTOM_PIN_UNASSIGNED;

#define HAS_SCREEN 1
#define USER_SETUP_LOADED 1
#define USE_HSPI_PORT 1
#define NV3023_DRIVER 1
#define TFT_WIDTH 240
#define TFT_HEIGHT 320
#define ROTATION 0
#define TFT_RGB_ORDER 1
#define TFT_BACKLIGHT_ON 1
#define TFT_BL CUSTOM_PIN_UNASSIGNED
#define TFT_RST CUSTOM_PIN_UNASSIGNED
#define TFT_DC CUSTOM_PIN_UNASSIGNED
#define TFT_MOSI MOSI
#define TFT_SCLK SCK
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
#define I2S_MCLK_PIN CUSTOM_PIN_UNASSIGNED
#define I2S_BCLK_PIN CUSTOM_PIN_UNASSIGNED
#define I2S_WS_PIN CUSTOM_PIN_UNASSIGNED
#define I2S_DOUT_PIN CUSTOM_PIN_UNASSIGNED
#define I2S_DIN_PIN CUSTOM_PIN_UNASSIGNED
#define MCLK I2S_MCLK_PIN
#define BCLK I2S_BCLK_PIN
#define WCLK I2S_WS_PIN
#define DOUT I2S_DOUT_PIN
#define DIN I2S_DIN_PIN

// Battery and analog button inputs.
#define BAT_PIN 7
#define ADC_BUTTON_PIN CUSTOM_PIN_UNASSIGNED
#define HAS_BTN 0
#define BTN_ALIAS "\"Ok\""
#define BTN_PIN ADC_BUTTON_PIN
#define BTN_ACT LOW

#define TXLED -1
#define LED_ON HIGH
#define LED_OFF LOW

// Optional external buses are disabled until exact GPIOs are known.
#define SDCARD_CS -1
#define SPI_SCK_PIN SCK
#define SPI_MOSI_PIN MOSI
#define SPI_MISO_PIN MISO
#define SPI_SS_PIN SS
#define GROVE_SDA SDA
#define GROVE_SCL SCL
#define BAD_TX TXD1
#define BAD_RX RXD1

#endif /* Pins_Arduino_h */
