/**
 * CLASS: RrOled - Ryder the Robot OLED helper functions.
 * 
 * TODO: check to see if a delay after writing to buffer would allow for more accurate output
 * by stopping loss due to buffer overflow. 
 */

#include <RrOled.h>

// pixel offset,  each line is around 15 pixels.
const int Y_PX_OFFSET = 15;

/**
 * adds a row to the buffer.
 */
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

/*
 * write contents of buffer to OLED,  note: DO NOT CLEAR the buffer as it stop writing to the 
 * screen, It's possible that we could set a delay(50), to allow the OLED to be updated before 
 * clearing the buffer, this may allow more output.
 */
void RR_OLED::writeBuf(U8GLIB u8g)
{
    u8g.setFont(u8g_font_unifont);

    for (int i = 1; i < (_x + 1); i++) {
        u8g.drawStr(0, Y_PX_OFFSET * i, _buffer[(i -1)]);
    }
}


/*
* clear buffer and set each row (string) to null '\0'
 */
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
