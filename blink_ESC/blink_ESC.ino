
#include <Arduino.h>
#include <Servo.h>

Servo servo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.write("start\n");
  servo.attach(2);
}

void loop() {
  // put your main code here, to run repeatedly:
  servo.writeMicroseconds(1600);
  Serial.write("low\n");
  delay(1000);

  servo.writeMicroseconds(1400);
  Serial.write("high\n");
  delay(1000);
}
