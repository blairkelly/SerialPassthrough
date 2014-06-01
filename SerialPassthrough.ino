#include <SoftwareSerial.h>

SoftwareSerial ss(2, 3);

void setup() {
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);

  Serial.begin(9600);
  ss.begin(9600);
}

void loop() {
  if (ss.available()) {
    Serial.write(ss.read());
  }
  if (Serial.available()) {
    ss.write(Serial.read());
  }
}