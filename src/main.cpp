#include <Arduino.h>

constexpr uint8_t RED_LED_OUT = 15;
constexpr uint8_t WHITE_LED_OUT = 16;
constexpr uint8_t BLUE_LED_OUT = 17;
constexpr uint8_t FAST_BLINK = 50;
constexpr uint8_t SLOW_BLINK = 200;

void setup() {
    pinMode(RED_LED_OUT, OUTPUT);
    pinMode(WHITE_LED_OUT, OUTPUT);
    pinMode(BLUE_LED_OUT, OUTPUT);
}

void handleBlinking(uint8_t ledOut, uint8_t endDelay) {
  for(uint8_t i = 0; i < 3; i++) {
    digitalWrite(ledOut, HIGH);
    delay(100);
    digitalWrite(ledOut, LOW);
    delay(endDelay);
  }
}

void loop() {
  handleBlinking(RED_LED_OUT, FAST_BLINK);
  handleBlinking(WHITE_LED_OUT, SLOW_BLINK);
  handleBlinking(BLUE_LED_OUT, FAST_BLINK);
}