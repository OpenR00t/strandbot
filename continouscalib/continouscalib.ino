#include <Arduino.h>


#include <Servo.h>

Servo LeftServo; Servo RightServo;

{
  LeftServo.attach(9);
  LeftServo.write(90);  // set servo speed

  RightServo.attach(8);
  RightServo.write(90);

  pinMode(7, INPUT_PULLUP);// Enable internal pull-up resistor on pin 7 (xyjoy)
   Serial.begin(9600);
}

void loop() {

}
