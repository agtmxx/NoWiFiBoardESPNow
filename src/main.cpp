#include <Arduino.h>
#include <ESP8266WiFi.h>

//Serial
const unsigned long serial_portSpeed = 115200;

void setup() {
  // put your setup code here, to run once:
  // connecting serial
  Serial.begin(serial_portSpeed);
  Serial.flush();
  Serial.swap();
}

void loop() {
  // put your main code here, to run repeatedly:
  String TextToSend = String("Hi from " + String(WiFi.macAddress()) + " " + String(random(1000)) +";");
  int DataS = Serial.print(TextToSend);
  delay(1000);
}