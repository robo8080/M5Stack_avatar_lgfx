// Copyright (c) Shinya Ishikawa. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef DRAWABLE_H_
#define DRAWABLE_H_

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

namespace m5avatar {
class Drawable {
 public:
  virtual ~Drawable() = default;
  virtual void draw(LGFX_Sprite *spi, BoundingRect rect,
                    DrawContext *drawContext) = 0;
};

}  // namespace m5avatar

#endif  // DRAWABLE_H_
