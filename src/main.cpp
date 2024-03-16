#include <Arduino.h>
#include <ryderrobot.h>
#include <RrOled.h>


U8GLIB_SH1106_128X64 u8g(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS);
RR_OLED rr = RR_OLED();

void setup()
{
  OLED_SETUP(u8g)
}

void loop()
{
  u8g.firstPage();
  do {
    rr.drawStr(u8g, "Testing Again!");
  } while( u8g.nextPage() );

  delay(100); 
}