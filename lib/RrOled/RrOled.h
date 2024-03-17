/**
 * OLED functions for Ryder Robot
 */

#ifndef RR_OLED_H
#define RR_OLED_H

#include <U8glib.h>

#define COL_MAX 16
#define ROW_MAX 4

class RR_OLED
{
public:
    // writes a string to the buffer.
    void println(U8GLIB u8g, char *s);

    // write the buffer to the OLED screen
    void writeBuf(U8GLIB u8g);

    // clear buffer
    void clearBuf();

    char *_buffer[ROW_MAX];  // OLED printing buffer 
    int _x = 0;              // current buffer row position

private:    
    const int _col_max = COL_MAX; // max columns
    const int _row_max = ROW_MAX; // max rows
};

#endif
