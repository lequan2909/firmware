#include "core/powerSave.h"
#include <Arduino.h>
#include <interface.h>

void _setup_gpio() {
#ifdef TFT_BL
    if (TFT_BL >= 0) pinMode(TFT_BL, OUTPUT);
    if (TFT_BL >= 0) digitalWrite(TFT_BL, TFT_BACKLIGHT_ON);
#endif
#ifdef TOUCH_RST
    if (TOUCH_RST >= 0) pinMode(TOUCH_RST, OUTPUT);
#endif
#ifdef HAS_3_BUTTONS
    pinMode(SEL_BTN, INPUT_PULLUP);
    pinMode(UP_BTN, INPUT_PULLUP);
    pinMode(DW_BTN, INPUT_PULLUP);
#endif
#ifdef MODEM_PWRKEY
    if (MODEM_PWRKEY >= 0) pinMode(MODEM_PWRKEY, OUTPUT);
#endif
#ifdef MODEM_RST
    if (MODEM_RST >= 0) pinMode(MODEM_RST, OUTPUT);
#endif
}

void _post_setup_gpio() {
#ifdef CHARGING_PIN
    pinMode(CHARGING_PIN, INPUT_PULLUP);
#endif
}

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

#ifdef HAS_3_BUTTONS
    if (digitalRead(SEL_BTN) == BTN_ACT || digitalRead(UP_BTN) == BTN_ACT || digitalRead(DW_BTN) == BTN_ACT) {
        if (!wakeUpScreen()) AnyKeyPress = true;
        else return;
    }
    if (digitalRead(UP_BTN) == BTN_ACT) PrevPress = true;
    if (digitalRead(DW_BTN) == BTN_ACT) NextPress = true;
    if (digitalRead(SEL_BTN) == BTN_ACT) SelPress = true;
#endif
}

String keyboard(String mytext, int maxSize, String msg) { return mytext; }

void powerOff() {}

void checkReboot() {}
