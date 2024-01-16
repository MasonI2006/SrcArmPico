#include <Arduino.h>
#include <Adafruit_ADS7830.h>
#include <SPI.h>

Adafruit_ADS7830 ad7830;

void setup() {

  Serial.begin(9600);
  ad7830.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

}

 /*uint8_t readFlex(int pin) {
uint8_t analogvalue = analogRead(pin);
  Serial.print(analogvalue);
  return analogvalue;
}*/ //DO NOT CALL FUNCTION IT WILL BREAK CODE, JUST FOLLOW THIS EXAMPLE WHEN IMPLEMENTING FLEX SENSOR