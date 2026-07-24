#include <Arduino.h>

#define RED_LED_OUT 15
#define WHITE_LED_OUT 16
#define BLUE_LED_OUT 17

void setup() {
    pinMode(RED_LED_OUT, OUTPUT);
    pinMode(WHITE_LED_OUT, OUTPUT);
    pinMode(BLUE_LED_OUT, OUTPUT);
}

void handleBlinking(int ledOut, int endDelay) {
  for(int i = 0; i < 3; i++) {
    digitalWrite(ledOut, HIGH);
    delay(100);
    digitalWrite(ledOut, LOW);
    delay(endDelay);
  }
}

void loop() {
  handleBlinking(RED_LED_OUT, 50);
  handleBlinking(WHITE_LED_OUT, 200);
  handleBlinking(BLUE_LED_OUT, 50);
}