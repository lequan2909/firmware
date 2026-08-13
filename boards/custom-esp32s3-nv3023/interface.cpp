#include "core/powerSave.h"
#include <Arduino.h>
#include <interface.h>

void _setup_gpio() {
#ifdef TFT_BL
    if (TFT_BL >= 0) pinMode(TFT_BL, OUTPUT);
#endif
#ifdef TOUCH_RST
    if (TOUCH_RST >= 0) pinMode(TOUCH_RST, OUTPUT);
#endif
#ifdef MODEM_PWRKEY
    if (MODEM_PWRKEY >= 0) pinMode(MODEM_PWRKEY, OUTPUT);
#endif
#ifdef MODEM_RST
    if (MODEM_RST >= 0) pinMode(MODEM_RST, OUTPUT);
#endif
}

void _post_setup_gpio() {}

int getBattery() {
#ifdef BAT_PIN
    if (BAT_PIN >= 0) return map(analogRead(BAT_PIN), 0, 4095, 0, 100);
#endif
    return 0;
}

void _setBrightness(uint8_t brightval) {
#ifdef TFT_BL
    if (TFT_BL >= 0) analogWrite(TFT_BL, brightval);
#endif
}

void InputHandler(void) {
    checkPowerSaveTime();
    PrevPress = false;
    NextPress = false;
    SelPress = false;
    AnyKeyPress = false;
    EscPress = false;
}

String keyboard(String mytext, int maxSize, String msg) { return mytext; }

void powerOff() {}

void checkReboot() {}
