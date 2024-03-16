#include <RrOled.h>


void RR_OLED::drawStr(U8GLIB u8g, const char *s) {
    u8g.setFont(u8g_font_unifont);
    u8g.drawStr(_x, _y, s);
}