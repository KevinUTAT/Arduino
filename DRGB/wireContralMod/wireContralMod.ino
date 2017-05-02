#include <Servo.h>
#include <dht11.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20, 16, 2); //addres 0x20, 16 char, 2 lin

Servo servoY; //the servo on the base, to pin 10
Servo servoX; //the servo on the arm, to pin 11

int servoYPin = 10, servoXPin = 11;
int dieYPin = 0, dieXPin = 1;

void setup() {
  servoY.attach(servoYPin);
  servoX.attach(servoXPin);

  lcd.init();
  lcd.backlight();

  lcd.print("X:");
  lcd.setCursor(0,1);
  lcd.print("Y:");
}

void loop() {
  int Yvalue, Xvalue;

  Yvalue = analogRead(dieYPin);
  Xvalue = analogRead(dieXPin);

  Yvalue = map(Yvalue, 0, 1023, 1, 180);
  Xvalue = map(Xvalue, 0, 1023, 1, 180);

  servoY.write(Yvalue);
  servoX.write(Xvalue);

  lcd.setCursor(3, 0);
  lcd.print(Xvalue);
  lcd.setCursor(3, 1);
  lcd.print(Yvalue); 
  |


}
