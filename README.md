# Robot Ryder (version 1)

Arduino robot designed to use a ML to avoid walls.

# Hardware

| Board          | Purpose         | Pin Reference |
| -------------- | --------------  | ------------- |
| Arduino Uno R3 | Micro Processor | Arduino       |
| Ks0056         | OLED Display    | OLED          |
| HC-SR04 (5v)   | Ultrasonict     | Sonar         |


# Pin Layout

| Board out      | Pin             | Board In      |  Pin      | Wire Color |
| -------------- | --------------  | ------------- | --------  | ---------- |
| Arduino        | 5v              | 5v Bus        | 5v+       | red        |
| Arduino        | GND             | 5v Bus        | 5v-       | black      |
| Arduino        | ~9              | OLED          | DC        | white      |
| Arduino        | ~10             | OLED          | CS        | blue       |
| Arduino        | ~11             | OLED          | MOSI      | yellow     |
| Arduino        | 13              | OLED          | CLK       | purple     |
| OLED           | RESET           | Arduino       | RESET     | red        | 
| OLED           | VCC             | 5v Bus        | 5v+       | red        |
| OLED           | GND             | 5v Bus        | 5v-       | black      |
| Sonar          | GND             | 5v Bus        | 5v-       | black      |
| Sonar          | VCC             | 5v Bus        | 5v+       | red        |
| Sonar          | ECHO            | Arduino       | 2         | yellow     |
| Arduino        | Trig            | Sonar         | 4         | green      |


# REFERENCES

* https://www.arduino.cc/reference/en/libraries/hcsr04-ultrasonic-sensor/
* https://web.eece.maine.edu/~zhu/book/lab/HC-SR04%20User%20Manual.pdf
* https://www.arduino.cc/reference/en/