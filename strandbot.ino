#include <Arduino.h>


#include <Servo.h>

Servo LeftServo; Servo RightServo;
int state = 0;
int flag = 0;

void setup()
{
  LeftServo.attach(9);
  LeftServo.write(90);  // set servo speed

  RightServo.attach(8);
  RightServo.write(90);

  pinMode(7, INPUT_PULLUP);// Enable internal pull-up resistor on pin 7 (xyjoy)
   Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
        state = Serial.read();
        flag=0;
      }
  // Turns the left Servo on Forwards, when 1 is inputted
  if (state == '1') {
      LeftServo.write(160);
      if(flag == 0){
        Serial.println("Left Forward");
        flag = 1;
      }
  }
  //Turns the left Servo on Backwards, when 2 is inputted
  else if (state == '2') {
      LeftServo.write(20);
      if(flag == 0){
        Serial.println("Left Backward");
        flag = 1;
      }

  }
  //Turns the right Servo on Backwards, when 0 is inputted
  else if (state == '0') {
      RightServo.write(20);
      if(flag == 0){
        Serial.println("Right Backward");
        flag = 1;
      }
  }
  //Turns the Right Servo on Forwards, when 9 is inputted
  else if (state == '9') {
      RightServo.write(160);
      if(flag == 0){
        Serial.println("Right Forward");
        flag = 1;
      }
  }
  //Stops both Servos, when 5 is inputted
  else if (state == '5') {
      LeftServo.write(90);
      RightServo.write(90);
      if(flag == 0){
        Serial.println("Stop");
        flag = 1;
      }
  }
}
