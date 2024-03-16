#include <RrOled.h>

const int Y_PX_OFFSET = 15;

void RR_OLED::println(U8GLIB u8g, char *s)
{
        int x = RR_OLED::_x;

        if (x >= _row_max)
        {
            this->clearBuf();
            x = RR_OLED::_x;
        }

        _buffer[x] = s;
        RR_OLED::_x = x + 1;
}

void RR_OLED::writeBuf(U8GLIB u8g)
{
    uint8_t offset = Y_PX_OFFSET;
    u8g.setFont(u8g_font_unifont);

    for (int i = 1; i < (_x + 1); i++) {
        u8g.drawStr(0, Y_PX_OFFSET * i, _buffer[(i -1)]);
    }
}


void RR_OLED::clearBuf() 
{
        for (int x = 0; x < RR_OLED::_row_max; x++)
        {
            char c[COL_MAX];
            c[0] = '\0';
            _buffer[x] = c;
        }
        RR_OLED::_x = 0;
}
