/**
 * OLED functions for Ryder Robot
 */

#ifndef RR_OLED_H
#define RR_OLED_H

#include <U8glib.h>

#define LINE_MAX 30 
#define ROW_MAX 12

class RR_OLED
{
    public:
        void drawStr(U8GLIB _u8g, const char *s);

        u8g_uint_t _x = 0;
        u8g_uint_t _y = 22;

    private:
        uint8_t _screen[ROW_MAX][LINE_MAX];
};

#endif