#include <HCSR04.h>
#include <ryderrobot.h>
#include <unity.h>

void setup() 
{
    UNITY_BEGIN();
    Serial.begin(BUAD_RATE);
    HCSR04.begin(RR_HCSR04_TRIG, RR_HCSR04_ECHO);
}

void tearDown(void)
{
  // clean stuff up here
}

void getDistance() 
{
    double* distances = HCSR04.measureDistanceCm();
    Serial.print("1: ");
    Serial.print(distances[0]);
    Serial.println(" cm");
  
    Serial.println("---");
}

void loop()
{
    RUN_TEST(getDistance);
    UNITY_END(); // stop unit testing
  
}