#include <Arduino.h>
#include <ryderrobot.h>
#include <RrOled.h>
#include <unity.h>


RR_OLED oled = RR_OLED();

void setUp(void)
{
  // set stuff up here
  //oled.setUp(OLED_CLK, OLED_MOSI, OLED_DC, OLED_CS);
}

void tearDown(void)
{
  // clean stuff up here
}

void test_clearBuf(void) {
    RR_OLED oled = RR_OLED();
    char buf[COL_MAX][ROW_MAX];

    // TEST_ASSERT_EQUAL_CHAR_ARRAY(buf, oled._buffer);
    
}


void setup()
{
  UNITY_BEGIN(); // IMPORTANT LINE!
}

void loop()
{
    RUN_TEST(test_clearBuf);
    UNITY_END(); // stop unit testing
  
}