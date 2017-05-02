#include <Servo.h>

Servo servo0;

int pos;
int servo0Pin = 9;
int sensorPin = 0;
unsigned long timer = 0;

void setup() {

  servo0.attach(servo0Pin);
  Serial.begin(9600);
}

void loop() {
  
  int value = analogRead(sensorPin);
  double temp;

  temp = (double) value * (5/10.24);

  pos = (int) (temp - 20) * 18;
  
  servo0.write(pos);






  //output temp data
  if (millis() - timer > 500) {
    timer = millis();
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.print(" C \n");
  }

}
