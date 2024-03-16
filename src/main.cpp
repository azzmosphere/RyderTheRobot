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

  rr.clearBuf();

  rr.println(u8g, "Ryders Robot");
  rr.println(u8g, "test1");
  rr.println(u8g, "test2");
  rr.println(u8g, "test3");

  rr.println(u8g, "test4");
  rr.println(u8g, "test5");

  u8g.firstPage();
  do
  {
    rr.writeBuf(u8g);
  } while (u8g.nextPage());
 
}