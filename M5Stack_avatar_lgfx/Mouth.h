// Copyright (c) Shinya Ishikawa. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef MOUTH_H_
#define MOUTH_H_

#define LGFX_USE_V1
# if defined(ARDUINO_M5STACK_Core2) || defined(M5AVATAR_CORE2) || defined(_M5Core2_H_)
  #include <M5Core2.h>
# else
  #include <M5Stack.h>
# endif
#define LGFX_AUTODETECT // 自動認識 (M5Stack, M5StickC/CPlus, ODROID-GO, TTGO T-Watch, TTGO T-Wristband, LoLin D32 Pro, ESP-WROVER-KIT)
#include <LovyanGFX.h>
#include "BoundingRect.h"
#include "DrawContext.h"
#include "Drawable.h"

namespace m5avatar {
class Mouth final : public Drawable {
 private:
  uint16_t minWidth;
  uint16_t maxWidth;
  uint16_t minHeight;
  uint16_t maxHeight;

 public:
  // constructor
  Mouth() = delete;
  ~Mouth() = default;
  Mouth(const Mouth &other) = default;
  Mouth &operator=(const Mouth &other) = default;
  Mouth(uint16_t minWidth, uint16_t maxWidth, uint16_t minHeight,
        uint16_t maxHeight);
  void draw(LGFX_Sprite *spi, BoundingRect rect,
            DrawContext *drawContext) override;
};

}  // namespace m5avatar

#endif  // MOUTH_H_
