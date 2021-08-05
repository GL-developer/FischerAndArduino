int motor = 10; //모터 10번핀으로 제어
int led = 11; //led 11번핀으로 제어
int sw = 5; //스위치 5번핀으로 제어

void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP); //스위치사용/sw를 인풋_풀업
}

void loop()  {
  if (digitalRead(sw) == LOW) //스위치 눌렀을때
  {
    digitalWrite(motor , HIGH);
    digitalWrite(led, LOW); //모터 작동, led 꺼짐
  }
  if (digitalRead(sw) == HIGH) //스위치 눌렀을때
  {
    digitalWrite(motor , LOW);
    digitalWrite(led, HIGH); //모터 작동, led 꺼짐

  }
}
