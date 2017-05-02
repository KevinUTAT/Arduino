
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

  lcd.setCursor(6, 0);
  lcd.print("%");
  lcd.setCursor(15, 0);
  lcd.print("C");
  lcd.setCursor(10,1);
  lcd.print("dB");
  
}

void loop() {
  int chk;
  int sondVal;

  sondVal = analogRead(0); // sond sensor plug into analog pin 0
  
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

  lcd.setCursor(2,0);
  lcd.print(DHT.humidity, 1);
  lcd.setCursor(11, 0);
  lcd.print(DHT.temperature, 1);
  lcd.setCursor(6,1);
  lcd.print(sondVal, 1);

  digitalWrite(2, HIGH);
  delay(1000);
  digitalWrite(2, LOW);

  delay(500);

}
