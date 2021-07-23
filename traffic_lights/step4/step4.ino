int sw = 12; //스위치 12번핀으로 제어
void setup()  {
  pinMode(13, OUTPUT); //초록불
  pinMode(10, OUTPUT); //빨간불
  pinMode(sw, INPUT_PULLUP);
  //sw를 인풋_풀업
}

void loop()  {
  if (digitalRead(sw) == LOW) //스위치 눌렀을때 초록불10초점등gn 빨간불 10초점등
  {
    digitalWrite(13, HIGH);
    delay(10000);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(13, LOW);
    digitalWrite(10, HIGH);
    delay(10000);
    digitalWrite(10, LOW);
  }
}
