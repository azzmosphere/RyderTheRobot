/**
 * routine to control simple robot that avoids obstables.
 */

#include <ryderrobot.h>

L298N l298n = L298N(RRM_IN1, RRM_IN2, RRM_IN3, RRM_IN4, RRM_ENA, RRM_ENB);

void setup()
{
    //OLED_SETUP(u8g)
    //Serial.begin(BUAD_RATE);
    HCSR04.begin(RR_HCSR04_TRIG, RR_HCSR04_ECHO);
    l298n.begin();
}

void loop()
{


  // HCSR04.measureDistanceCm()[0];
  l298n.default_move();
  delay(1000); 
}