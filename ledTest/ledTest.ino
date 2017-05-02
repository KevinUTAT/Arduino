
int ledPinB = 10;
int ledPinR = 9;
int ledPinG = 8;

void setup() {
  
  pinMode(ledPinB, OUTPUT);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
}

//function for light up the LED in a colour for a duration of time
//R = Red, Y = Yellow, G = Green, C = Cy, B = Blue, P = Pink, W = White.
void lightUpLED(char colour, int duration) {
  if (colour == 'R') {
    digitalWrite(ledPinR, HIGH);
    delay(duration);  //light up time
    digitalWrite(ledPinR, LOW);
  }
  else if (colour == 'Y') {
    digitalWrite(ledPinR, HIGH);
    digitalWrite(ledPinG, HIGH);
    delay(duration); 
    digitalWrite(ledPinR, LOW);
    digitalWrite(ledPinG, LOW);
  }
  else if (colour == 'G') {
    digitalWrite(ledPinG, HIGH);
    delay(duration);
    digitalWrite(ledPinG, LOW);
  }
  else if (colour == 'C') {
    digitalWrite(ledPinG, HIGH);
    digitalWrite(ledPinB, HIGH);
    delay(duration); 
    digitalWrite(ledPinG, LOW);
    digitalWrite(ledPinB, LOW);
  }
  else if (colour == 'B') {
    digitalWrite(ledPinB, HIGH);
    delay(1000);
    digitalWrite(ledPinB, LOW);
  }
  else if (colour == 'P') {
    digitalWrite(ledPinB, HIGH);
    digitalWrite(ledPinR, HIGH);
    delay(duration); 
    digitalWrite(ledPinB, LOW);
    digitalWrite(ledPinR, LOW);
  }
  else if (colour == 'W') {
    digitalWrite(ledPinB, HIGH);
    digitalWrite(ledPinR, HIGH);
    digitalWrite(ledPinG, HIGH);
    delay(duration); 
    digitalWrite(ledPinB, LOW);
    digitalWrite(ledPinR, LOW);
    digitalWrite(ledPinG, LOW);
  }
}

void loop() {
  int lightUpTime = 2000;
  
  for (int i = 0; i <= 20; i ++) {
    lightUpLED('C', lightUpTime);
    delay(lightUpTime);
    lightUpTime = lightUpTime / 1.2;
  }

}
