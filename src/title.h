#include "pm.h"
#include <stdint.h>

// Tiles
#define TITLE_OFFS                        0
#define TITLE_FRAMES                      1
#define TITLE_TILES                       96

const uint8_t _rom title_frame0[] _at(0x012000) = {
  // title.png
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFE, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x42, 0x02, 0x82, 0x02,
  0x04, 0x08, 0xF0, 0xC0, 0xB0, 0x4C, 0x12, 0x05,
  0x01, 0x06, 0x0E, 0x3C, 0xF8, 0xE0, 0x80, 0x00,
  0x00, 0xC0, 0x30, 0x08, 0x04, 0x02, 0x03, 0x01,
  0x01, 0x01, 0x41, 0x81, 0xA2, 0xD2, 0xD4, 0xE4,
  0x68, 0x10, 0x00, 0x00, 0xE0, 0x20, 0x20, 0x20,
  0x20, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00,
  0xE0, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20,
  0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0xF8, 0x00, 0x00, 0x00, 0x80, 0xF0, 0xF0, 0x80,
  0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x80,
  0x80, 0x80, 0xFC, 0x04, 0xF6, 0xF5, 0x34, 0xFA,
  0xB9, 0x3E, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x00,
  0x06, 0x14, 0x08, 0x80, 0x80, 0x93, 0xCF, 0x3F,
  0xF8, 0xFF, 0xF0, 0x40, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x03, 0x8B, 0x97, 0x97, 0x50, 0x68, 0x88,
  0xD0, 0xF0, 0x00, 0x00, 0x03, 0x03, 0x04, 0x0C,
  0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0F, 0x0F, 0x00,
  0x03, 0x03, 0x04, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
  0x0C, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01,
  0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x00, 0x00,
  0x03, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
  0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
  0x06, 0x07, 0x07, 0x07, 0x05, 0x03, 0x03, 0x02,
  0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x03, 0x03,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03,
  0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF0, 0x90, 0x90, 0x60, 0x00,
  0xF0, 0x90, 0x90, 0x70, 0x00, 0x00, 0xF0, 0x90,
  0x90, 0x90, 0x00, 0x00, 0x60, 0x90, 0x90, 0x90,
  0x20, 0x00, 0x60, 0x90, 0x90, 0x90, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
  0x30, 0x30, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x01, 0x02, 0x04, 0x00, 0x07, 0x04,
  0x04, 0x04, 0x00, 0x00, 0x02, 0x04, 0x04, 0x04,
  0x03, 0x00, 0x02, 0x04, 0x04, 0x04, 0x03, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x01,
  0x01, 0x01, 0x01, 0x06, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x50, 0x50, 0x70, 0x00, 0x80,
  0x40, 0x40, 0x80, 0x00, 0xC0, 0x40, 0x40, 0xE0,
  0x40, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x40, 0x40,
  0x80, 0x00, 0x40, 0x80, 0x80, 0x40, 0x00, 0x00,
  0x00, 0x00, 0x80, 0x40, 0x40, 0xC0, 0x00, 0x80,
  0xC0, 0xC0, 0xC0, 0x00, 0xC0, 0x40, 0x40, 0xC0,
  0x40, 0x40, 0xC0, 0x00, 0x80, 0xC0, 0xC0, 0xC0,
  0x00, 0xF8, 0x40, 0x40, 0x80, 0x00, 0xF8, 0x00,
  0x80, 0xC0, 0xC0, 0xC0, 0x00, 0xF8, 0x40, 0x40,
  0x80, 0x00, 0xF8, 0x00, 0x80, 0xC0, 0xC0, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x02, 0x02, 0x01, 0x00, 0x03, 0x00, 0x00, 0x03,
  0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02,
  0x01, 0x00, 0x08, 0x0F, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x01, 0x0A, 0x0A, 0x07, 0x00, 0x03,
  0x02, 0x02, 0x03, 0x00, 0x03, 0x00, 0x00, 0x03,
  0x00, 0x00, 0x03, 0x00, 0x01, 0x02, 0x02, 0x02,
  0x00, 0x03, 0x02, 0x02, 0x01, 0x00, 0x03, 0x00,
  0x03, 0x02, 0x02, 0x03, 0x00, 0x03, 0x02, 0x02,
  0x01, 0x00, 0x03, 0x00, 0x03, 0x02, 0x02, 0x03,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

};
