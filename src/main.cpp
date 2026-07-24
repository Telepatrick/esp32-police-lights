#include <Arduino.h>

#define RED_LED_OUT 15
#define WHITE_LED_OUT 16
#define BLUE_LED_OUT 17

void setup() {
    pinMode(RED_LED_OUT, OUTPUT);
    pinMode(WHITE_LED_OUT, OUTPUT);
    pinMode(BLUE_LED_OUT, OUTPUT);
}

void loop() {
  for(int i = 0; i< 3; i++) {
    digitalWrite(BLUE_LED_OUT, HIGH);
    digitalWrite(RED_LED_OUT, LOW);
    delay(100);
    digitalWrite(BLUE_LED_OUT, LOW);
    digitalWrite(RED_LED_OUT, LOW);
    delay(50);
  }

  for(int i = 0; i< 3; i++) {
    digitalWrite(RED_LED_OUT, HIGH);
    digitalWrite(BLUE_LED_OUT, LOW);
    delay(100);
    digitalWrite(BLUE_LED_OUT, LOW);
    digitalWrite(RED_LED_OUT, LOW);
    delay(50);
  }

  for(int i = 0; i< 3; i++) {
    digitalWrite(WHITE_LED_OUT, HIGH);
    delay(100);
    digitalWrite(WHITE_LED_OUT, LOW);
    delay(200);
  }
}
