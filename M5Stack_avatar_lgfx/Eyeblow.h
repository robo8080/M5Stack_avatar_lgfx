// Copyright (c) Shinya Ishikawa. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#ifndef EYEBLOW_H_
#define EYEBLOW_H_

#define LGFX_USE_V1
#include <M5Core2.h>
#define LGFX_AUTODETECT // 自動認識 (M5Stack, M5StickC/CPlus, ODROID-GO, TTGO T-Watch, TTGO T-Wristband, LoLin D32 Pro, ESP-WROVER-KIT)
#include <LovyanGFX.h>
#include "BoundingRect.h"
#include "DrawContext.h"
#include "Drawable.h"

namespace m5avatar {
class Eyeblow final : public Drawable {
 private:
  uint16_t width;
  uint16_t height;
  bool isLeft;

 public:
  // constructor
  Eyeblow() = delete;
  Eyeblow(uint16_t w, uint16_t h, bool isLeft);
  ~Eyeblow() = default;
  Eyeblow(const Eyeblow &other) = default;
  Eyeblow &operator=(const Eyeblow &other) = default;
  void draw(LGFX_Sprite *spi, BoundingRect rect,
            DrawContext *drawContext) override;
};

}  // namespace m5avatar

#endif  // EYEBLOW_H_
