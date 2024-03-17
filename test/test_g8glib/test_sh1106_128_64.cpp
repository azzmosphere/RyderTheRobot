/**
 * test SH1106 OLED display. 
 */

#include <Arduino.h>
#include <ryderrobot.h>
#include <RrOled.h>
#include <unity.h>


U8GLIB_SH1106_128X64 u8g(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS);
RR_OLED rr = RR_OLED();

void setup(void)
{
    UNITY_BEGIN(); // IMPORTANT LINE!
    // set stuff up here
    OLED_SETUP(u8g) 
    rr.clearBuf(); 
}

void test_clearBuf() 
{
    rr.clearBuf();
    TEST_ASSERT_TRUE(true);
}

void test_println() 
{
    rr.clearBuf();
    rr.println(u8g, "test 1");
    rr.println(u8g, "test 2");
    rr.println(u8g, "test 3");

    do
    {
        rr.writeBuf(u8g);
    } while (u8g.nextPage());

    TEST_ASSERT_TRUE(true);
}


void tearDown(void)
{
  // clean stuff up here
}

void loop()
{
    RUN_TEST(test_clearBuf);
    UNITY_END(); // stop unit testing
  
}