#include <OneWire.h>
#include <DallasTemperature.h>

#include "pineapple.h"

const int sensor_bits = 9;
const int sensor_pin = A5;

OneWire oneWire(sensor_pin);
DallasTemperature ths(&oneWire);

void setup() {
  // put your setup code here, to run once:
  pinMode(GATE, OUTPUT);
  digitalWrite(GATE, HIGH);
  Serial.begin(9600);
  ths.setResolution(sensor_bits);
}

void show_temp() {
  ths.requestTemperatures();
  Serial.print("THS, ");
  Serial.print(ths.getTempCByIndex(0));
}

void show_press() {
  int p;
  p = analogRead(ANLG0);
  Serial.print("ANLG0, ");
  Serial.print(p);
}

void loop() {
  // put your main code here, to run repeatedly:
  show_temp();
  Serial.print(", ");
  show_press();
  Serial.println("");
  delay(1000);
}
