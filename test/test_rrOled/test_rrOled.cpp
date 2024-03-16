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

void test_setUp(void)
{
   // TEST_ASSERT_EQUAL(U8G_MODE_BW, oled.u8g().getMode());
}

void test_drawStr(void) {
    //RR_OLED oled = RR_OLED();
    // TEST_ASSERT_EQUAL(1, oled.drawStr("testing"));

   // oled.drawStr("test");
    TEST_ASSERT_EQUAL(23, oled._y);
    
}


void setup()
{
  UNITY_BEGIN(); // IMPORTANT LINE!
}

void loop()
{
    RUN_TEST(test_setUp);
    RUN_TEST(test_drawStr);
    UNITY_END(); // stop unit testing
  
}