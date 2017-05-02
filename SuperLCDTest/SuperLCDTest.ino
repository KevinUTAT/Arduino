#include <dht11.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 16, 2); //addres 0x20, 16 char, 2 line

void setup() {
  lcd.init();
  lcd.backlight();

  lcd.print("Hellow would ! ");
}

void loop() {
  int value;


}

