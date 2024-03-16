#ifndef RYDERTHEROBOT_H
#define RYDERTHEROBOT_H

#include <Arduino.h>
#include <U8glib.h>

const uint8_t OLED_CLK = 13;
const uint8_t OLED_MOSI = 11;
const uint8_t OLED_DC = 9;
const uint8_t OLED_CS = 10;


#define OLED_SETUP(M_U8G)  if ( M_U8G.getMode() == U8G_MODE_R3G3B2 ) { \
    M_U8G.setColorIndex(255);     \
  } \
  else if ( M_U8G.getMode() == U8G_MODE_GRAY2BIT ) { \
    M_U8G.setColorIndex(3);         \
  } \
  else if ( M_U8G.getMode() == U8G_MODE_BW ) { \
    M_U8G.setColorIndex(1);    \
  } \
  else if ( M_U8G.getMode() == U8G_MODE_HICOLOR ) { \
    M_U8G.setHiColorByRGB(255,255,255); \
  }

#endif