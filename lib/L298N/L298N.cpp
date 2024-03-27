

#include <L298N.h>

L298N::L298N(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb) {
            this->_IN1 = in1;
            this->_IN2 = in2;
            this->_IN3 = in3;
            this->_IN4 = in4;

            this->_ENA = ena;
            this->_ENB = enb;
}

void L298N::begin() {
    pinMode(_IN1, OUTPUT);
    pinMode(_IN2, OUTPUT);
    pinMode(_IN3, OUTPUT);
    pinMode(_IN4, OUTPUT);
    pinMode(_ENA, OUTPUT);
    pinMode(_ENB, OUTPUT);
}


void L298N::default_move() {
  digitalWrite(_IN1,LOW);
  digitalWrite(_IN2,HIGH);
  analogWrite(_ENA,200); 
  digitalWrite(_IN3,LOW);
  digitalWrite(_IN4,HIGH); 
  analogWrite(_ENB,200); 
}

