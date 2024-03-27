#ifndef L298N_H
#define L298N_H

#include <Arduino.h>

class L298N {
private:
    int _IN1=5;
    int _IN2=6;
    int _IN3=7;
    int _IN4=8;
    int _ENA=9;
    int _ENB=10;

    const int MAX_SPEED = 200, MIN_SPEED = 1;

public: 
    void begin();

    L298N(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb);

    void default_move();

    void move_forward(const int speed);

    void complete_stop();
};

#endif