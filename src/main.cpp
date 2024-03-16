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
  do
  {
    rr.drawStr(u8g, "1234567890123456");
    rr.drawStr(u8g, "2234567890123456");
    rr.drawStr(u8g, "3234567890123456");
    rr._y = 22;
  } while (u8g.nextPage());

  
}