#include <Arduino.h>

#define LED_OUT 15

void setup() {
    pinMode(LED_OUT, OUTPUT);
}

void loop() {
    digitalWrite(LED_OUT, LOW);
    delay(200);

    digitalWrite(LED_OUT, HIGH);
    delay(200);
}
