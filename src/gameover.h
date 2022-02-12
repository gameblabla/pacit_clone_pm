#include "pm.h"
#include <stdint.h>

// Tiles
#define GAMEOVER_OFFS                     0
#define GAMEOVER_FRAMES                   1
#define GAMEOVER_TILES                    96

const uint8_t _rom gameover_frame0[] _at(0x014000) = {
  // gameover.png
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xE0, 0x10, 0x08, 0x08, 0x08, 0x88,
  0x88, 0x90, 0x00, 0x00, 0x00, 0xC0, 0x30, 0x08,
  0x30, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0x18, 0x60,
  0x80, 0x00, 0x80, 0x60, 0x18, 0xF8, 0x00, 0x00,
  0xF8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x10, 0x08, 0x08,
  0x08, 0x08, 0x10, 0xE0, 0x00, 0x18, 0x60, 0x80,
  0x00, 0x00, 0x00, 0x80, 0x60, 0x18, 0x00, 0xF8,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x00, 0x00, 0xF8,
  0x88, 0x88, 0x88, 0x88, 0x70, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x04, 0x08, 0x08, 0x08, 0x08,
  0x08, 0x07, 0x00, 0x08, 0x07, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x07, 0x08, 0x00, 0x0F, 0x00, 0x00,
  0x01, 0x02, 0x01, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x08,
  0x08, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x01,
  0x06, 0x08, 0x06, 0x01, 0x00, 0x00, 0x00, 0x0F,
  0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x01, 0x06, 0x08, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x80, 0x80, 0x80, 0xF0, 0x00,
  0x00, 0xF0, 0x00, 0x00, 0x60, 0x90, 0x90, 0x90,
  0x20, 0x00, 0xE0, 0x30, 0x10, 0x10, 0x20, 0x00,
  0xE0, 0x30, 0x10, 0x30, 0xE0, 0x00, 0x00, 0xF0,
  0x90, 0x90, 0x70, 0x00, 0x00, 0xF0, 0x90, 0x90,
  0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00,
  0x00, 0x07, 0x00, 0x00, 0x82, 0x44, 0x44, 0x44,
  0x83, 0x00, 0x83, 0xC6, 0x44, 0x44, 0x84, 0x00,
  0x83, 0xC6, 0x44, 0xC6, 0x83, 0x00, 0x00, 0xC7,
  0x40, 0x41, 0xC2, 0x04, 0x00, 0xC7, 0x44, 0x44,
  0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x09, 0x12, 0x12, 0x12,
  0x0C, 0x00, 0x0F, 0x18, 0x10, 0x10, 0x10, 0x00,
  0x0F, 0x18, 0x10, 0x18, 0x0F, 0x00, 0x00, 0x1F,
  0x02, 0x06, 0x09, 0x10, 0x00, 0x1F, 0x12, 0x12,
  0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

};
