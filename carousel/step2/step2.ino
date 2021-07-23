int motor1 = 10; //모터 10번핀으로 제어
int sw = 5; //스위치 5번핀으로 제어

void setup()  {
  pinMode(motor1, OUTPUT);
  pinMode(sw, INPUT_PULLUP); //스위치사용/sw를 인풋_풀업
}

void loop()  {
  if (digitalRead(sw) == LOW) //스위치 눌렀을때
    digitalWrite(motor1 , HIGH); //모터 작동
  else
    digitalWrite(motor1 , LOW); //스위치 안누르면 모터 멈춤
}
