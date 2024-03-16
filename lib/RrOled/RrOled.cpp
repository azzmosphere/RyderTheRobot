#include <RrOled.h>


void RR_OLED::drawStr(U8GLIB u8g, const char *s) {    
    u8g.setFont(u8g_font_unifont);
    u8g.drawStr(_x, _y, s);

    RR_OLED::_y = _y + 15;
}


// void clear_screen(void) {
//   uint8_t i, j;
//   for( i = 0; i < ROW_MAX; i++ )
//     for( j = 0; j < LINE_MAX; j++ )
//       RR_OLED::_screen[i][j] = 0;  
// }