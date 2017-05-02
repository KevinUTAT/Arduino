#include <Servo.h>

Servo servoY; //the servo on the base, to pin 10
Servo servoX; //the servo on the arm, to pin 11

//-------------------------------------------------------------------input
int posY = 135, posX = 80;
//-------------------------------------------------------------------input

int servoYPin = 10, servoXPin = 11;



void setup() {
  servoY.attach(servoYPin);
  servoX.attach(servoXPin);

}

void manuPointing(int Y, int X) {

  servoY.write(Y + 90);
  servoX.write(X + 90);
  
}

void loop() {
  
  manuPointing(1,1);
  delay(2000);
  manuPointing(45,45);
  delay(2000);
  manuPointing(-45,-45);
  delay(2000);
  
}
