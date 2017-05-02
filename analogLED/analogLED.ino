
int ledPinB = 10;
int ledPinR = 9;
int ledPinG = 8;
int switchUpPin = 12;
int switchDownPin = 11;
int value = 127;
 
void setup() {
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(switchUpPin, INPUT);
  pinMode(switchDownPin, INPUT);

 
}



void loop() {

  int switchUpState = digitalRead(switchUpPin);
  int switchDownState = digitalRead(switchDownPin);

  if (switchUpState == HIGH) {
    value++;
  }

  if (switchDownState == HIGH) {
    value--;
  }

  analogWrite(ledPinB, value);

}
