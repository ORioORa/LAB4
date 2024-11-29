#include <Arduino.h>
const int red = 8;
const int yellow = 9;
const int green = 10;



void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(green, brightness);
    delay(10);
}
for (int brightness = 255; brightness >= 0; brightness--) {
  analogWrite(green, brightness);
    delay(10);
}
}

