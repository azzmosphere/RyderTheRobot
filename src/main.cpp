/**
 * routine to control simple robot that avoids obstables.
 */

#include <ryderrobot.h>

// OLED SDK.
//U8GLIB_SH1106_128X64 u8g(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS);

// functions for OLED.
//RR_OLED rr = RR_OLED();
L298N l298n = L298N(RRM_IN1, RRM_IN2, RRM_IN3, RRM_IN4, RRM_ENA, RRM_ENB);

void setup()
{
    //OLED_SETUP(u8g)
    //Serial.begin(BUAD_RATE);
    HCSR04.begin(RR_HCSR04_TRIG, RR_HCSR04_ECHO);
    l298n.begin();
}

void loop()
{

  l298n.default_move();
  delay(1000);

  // clears print buffer.
  // rr.clearBuf();

  // rr.println(u8g, "Ryders Robot");


  // String distance = "S: ";
  // distance.concat(HCSR04.measureDistanceCm()[0]);
  // distance.concat(" cm");
  // rr.println(u8g, (char *) distance.c_str());

  // // writes out the buffer to OLED
  // u8g.firstPage();
  // do
  // {
  //   rr.writeBuf(u8g);
  // } while (u8g.nextPage());
 
}