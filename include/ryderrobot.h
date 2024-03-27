/**
 * Provides configuration options for Ryder The Robot. 
 */

#ifndef RYDERTHEROBOT_H
#define RYDERTHEROBOT_H

#include <Arduino.h>
#include <U8glib.h>
#include <HCSR04.h>
#include <L298N.h>

// Custom type definitions
typedef unsigned long ulong_t;

/**
 * PIN layouts,  
 */

// Pins for L298N
const int RRM_IN1=5;
const int RRM_IN2=6;
const int RRM_IN3=7;
const int RRM_IN4=8;
const int RRM_ENA=9;
const int RRM_ENB=10;

// Pins for HCSR04
const uint8_t RR_HCSR04_ECHO = 11;  // echo pin
const uint8_t RR_HCSR04_TRIG = 12;  // trigger pin



// Pins for OLED - Note this is for debug purposes only, OLED is not hooked up for
// RR-00
const uint8_t OLED_CLK = 13;  // OLED CLK connected to Arduino pin 13
const uint8_t OLED_MOSI = 11; // OLED MOSI connected to Arduino pin 11
const uint8_t OLED_DC = 9;    // OLED DC connected Arduino pin 9
const uint8_t OLED_CS = 10;   // OLED CS connected Arduino pin 10 

const int OLED_PRINT_OFFSET = 15; // pixel offset, for each new line.


// baud - a unit of transmission speed equal to the number of times a signal changes state per second. 
// For signals with only two possible states one baud is equivalent to one bit per second.
const ulong_t BUAD_RATE = 9600;


/*
 * OLED setup routine
 */
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
