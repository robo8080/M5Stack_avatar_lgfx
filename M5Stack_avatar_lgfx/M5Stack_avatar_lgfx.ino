#define LGFX_USE_V1
#include <M5Core2.h>
#define LGFX_AUTODETECT // 自動認識 (M5Stack, M5StickC/CPlus, ODROID-GO, TTGO T-Watch, TTGO T-Wristband, LoLin D32 Pro, ESP-WROVER-KIT)
#include <LovyanGFX.h>
#include "Avatar.h"

LGFX lcd;                 // LGFXのインスタンスを作成。

using namespace m5avatar;

Avatar avatar;

void setup()
{
//void begin(bool LCDEnable = true, bool SDEnable = true, bool SerialEnable = true, bool I2CEnable = false, mbus_mode_t mode = kMBusModeOutput);
  M5.begin(false);
  lcd.init();
  lcd.setBrightness(128); 
  avatar.init(); // start drawing
}

void loop()
{
  // avatar's face updates in another thread
  // so no need to loop-by-loop rendering
}
