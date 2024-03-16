#include <Arduino.h>
#include <U8glib.h>

const uint8_t OLED_CLK = 13;
const uint8_t OLED_MOSI = 11;
const uint8_t OLED_DC = 9;
const uint8_t OLED_CS = 10;

U8GLIB_SH1106_128X64 u8g(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS); // SW SPI Com: SCK = 13, MOSI = 11, CS = 10, A0 = 9

// put function declarations here:
void draw(void)
{
  // graphic commands to redraw the complete screen should be placed here
  u8g.setFont(u8g_font_unifont);
  // u8g.setFont(u8g_font_osb21);
  u8g.drawStr(0, 22, "Hello World!");
}

void setup()
{
  // put your setup code here, to run once:
  if (u8g.getMode() == U8G_MODE_R3G3B2)
  {
    u8g.setColorIndex(255); // white
  }
  else if (u8g.getMode() == U8G_MODE_GRAY2BIT)
  {
    u8g.setColorIndex(3); // max intensity
  }
  else if (u8g.getMode() == U8G_MODE_BW)
  {
    u8g.setColorIndex(1); // pixel on
  }
  else if (u8g.getMode() == U8G_MODE_HICOLOR)
  {
    u8g.setHiColorByRGB(255, 255, 255);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  // picture loop
  u8g.firstPage();
  do
  {
    draw();
  } while (u8g.nextPage());
  // rebuild the picture after some delay
  delay(50);
}