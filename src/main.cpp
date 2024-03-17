/**
 * routine to control simple robot that avoids obstables.
 */

#include <Arduino.h>
#include <ryderrobot.h>
#include <RrOled.h>

// OLED SDK.
U8GLIB_SH1106_128X64 u8g(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS);

// functions for OLED.
RR_OLED rr = RR_OLED();

void setup()
{
    OLED_SETUP(u8g)
    Serial.begin(BUAD_RATE);
    HCSR04.begin(RR_HCSR04_TRIG, RR_HCSR04_ECHO);
}

void loop()
{
  // clears print buffer.
  rr.clearBuf();

  rr.println(u8g, "Ryders Robot");


  String distance = "S: ";
  distance.concat(HCSR04.measureDistanceCm()[0]);
  distance.concat(" cm");
  rr.println(u8g, (char *) distance.c_str());

  // writes out the buffer to OLED
  u8g.firstPage();
  do
  {
    rr.writeBuf(u8g);
  } while (u8g.nextPage());
 
}