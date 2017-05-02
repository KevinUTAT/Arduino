
#include <dht11.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x20, 16, 2); //addres 0x20, 16 char, 2 line

dht11 DHT;

#define DHT11_PIN 4

void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

  Serial.println("Type, status, Humidity(%), Temperature(C)");

  lcd.print("Humidity(%):");
  lcd.setCursor(0, 1);
  lcd.print("Temp(C):");
  
}

void loop() {
  int chk;
  Serial.print("DHT11, \t");
  chk = DHT.read(DHT11_PIN);

  switch(chk) {
    case DHTLIB_OK:
                Serial.print("OK,\t");
                break;
    case DHTLIB_ERROR_CHECKSUM:
                Serial.print("Checksum error, \t");
                break;
    case DHTLIB_ERROR_TIMEOUT:
                Serial.print("Time out error, \t");
                break;
    default:
                Serial.print("Unknown error, \t");
                break;
  }

  Serial.print(DHT.humidity, 1);
  Serial.print(",\t");
  Serial.print(DHT.temperature, 1);

  lcd.setCursor(12,0);
  lcd.print(DHT.humidity, 1);
  lcd.setCursor(8, 1);
  lcd.print(DHT.temperature, 1);

  delay(1000);

}
