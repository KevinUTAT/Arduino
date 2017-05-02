//pin connction is 13 - 6

void setup() {

  for (int i = 6; i <= 13; i ++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }

}

void LEDNumPad(int number, unsigned long duration, int decmal) {
  //function for display sigal number
  //1 for decmal

  int num0[8] = {1, 0, 0, 0, 0, 0, 0, 1};  //0
  int num1[8] = {1, 0, 1, 1, 0, 1, 1, 1};  //1
  int num2[8] = {1, 1, 0, 0, 0, 0, 1, 0};  //2
  int num3[8] = {1, 0, 0, 1, 0, 0, 1, 0};  //3
  int num4[8] = {1, 0, 1, 1, 0, 1, 0, 0};  //4
  int num5[8] = {1, 0, 0, 1, 1, 0, 0, 0};  //5
  int num6[8] = {1, 0, 0, 0, 1, 0, 0, 0};  //6
  int num7[8] = {1, 0, 1, 1, 0, 0, 1, 1};  //7
  int num8[8] = {1, 0, 0, 0, 0, 0, 0, 0};  //8
  int num9[8] = {1, 0, 0, 1, 0, 0, 0, 0};  //9

  int num[8] = {0, 0, 0, 0, 0, 0, 0, 0};

  if (number == 0) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num0[i - 6]);
    }
  }
  else if (number == 1) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num1[i - 6]);
    }
  }
  else if (number == 2) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num2[i - 6]);
    }
  }
  else if (number == 3) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num3[i - 6]);
    }
  }
  else if (number == 4) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num4[i - 6]);
    }
  }
  else if (number == 5) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num5[i - 6]);
    }
  }
  else if (number == 6) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num6[i - 6]);
    }
  }
  else if (number == 7) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num7[i - 6]);
    }
  }
  else if (number == 8) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num8[i - 6]);
    }
  }
  else if (number == 9) {
    for (int i = 6; i <= 13; i ++) {
      digitalWrite(i, num9[i - 6]);
    }
  }

  if (decmal) {
    digitalWrite(6, LOW);
  }

  delay(duration);
}

void loop() {
   
  for (int i = 0; i <= 9; i ++) {
    LEDNumPad(i, 1000, 0);
  }

}
