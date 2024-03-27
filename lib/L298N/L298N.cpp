/**
 * Controls movements for L298N driver. 
 */

#include <L298N.h>

L298N::L298N(uint8_t in1, uint8_t in2, uint8_t in3, uint8_t in4, uint8_t ena, uint8_t enb) {
            this->_IN1 = in1;
            this->_IN2 = in2;
            this->_IN3 = in3;
            this->_IN4 = in4;

            this->_ENA = ena;
            this->_ENB = enb;
}

/**
 * Run in setup() routine, initialises the PINs it uses. 
 */
void L298N::begin() {
    pinMode(_IN1, OUTPUT);
    pinMode(_IN2, OUTPUT);
    pinMode(_IN3, OUTPUT);
    pinMode(_IN4, OUTPUT);
    pinMode(_ENA, OUTPUT);
    pinMode(_ENB, OUTPUT);
}


void L298N::default_move() {
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, HIGH);
  analogWrite(_ENA, 50); 
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, HIGH); 
  analogWrite(_ENB, 0); 
  delay(500);
}

void L298N::move_forward(const int speed) {
  int s = speed;

  if (speed <= MIN_SPEED) 
  {
    s = MIN_SPEED;
  }
  else if (speed > MAX_SPEED) 
  {
    s = MAX_SPEED;
  }

  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, HIGH);
 
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, HIGH); 

  analogWrite(_ENA, s); 
  analogWrite(_ENB, s); 
}

void L298N::complete_stop()
{
  analogWrite(_ENA,0); 
  analogWrite(_ENB,0); 
}