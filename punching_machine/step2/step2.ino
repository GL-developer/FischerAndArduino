int motor = 9; //모터 9번핀으로 제어
int sw1 = 5; //스위치1 5번핀으로 제어
int sw2 = 3; //스위치2 3번핀으로 제어

void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);// 센서를 인풋_풀업
}

void loop()  { ////1번,2번스위치 모두 누르면 motor작동
  if (digitalRead(sw1) == LOW && digitalRead(sw2) == LOW) {
    digitalWrite(motor, HIGH);
  }
  else
    digitalWrite(motor, LOW); //센서 닫히면 Off
}
