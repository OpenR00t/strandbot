#include <Arduino.h>


#include <Servo.h>

Servo LeftServo; Servo RightServo;
void setup()
{
  LeftServo.attach(9);
  LeftServo.writeMicroseconds(1500);  // set servo speed

  RightServo.attach(8);
  RightServo.writeMicroseconds(1500);

  pinMode(7, INPUT_PULLUP);// Enable internal pull-up resistor on pin 7 (xyjoy)
   Serial.begin(9600);
}

void loop() {

}
