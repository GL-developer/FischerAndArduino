int led1 = 10; //led1 10번핀으로 제어
int led2 = 11; //led2 11번핀으로 제어
int sw = 12; //스위치 12번핀으로 제어

void setup()  {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(sw, INPUT_PULLUP); //스위치사용/sw를 인풋_풀업
}

void loop()  {
  if (digitalRead(sw) == LOW) { //스위치 눌렀을때
    digitalWrite(led1 , LOW);
    digitalWrite(led2, LOW);//led1, led2 꺼짐
  }
  else
    digitalWrite(led1 , HIGH);
  digitalWrite(led2, HIGH);
  //스위치 안누르면 led1, led2 켜짐
}
