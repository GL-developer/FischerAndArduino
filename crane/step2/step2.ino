int sw1 = 12; //1번스위치 12번핀
int motor1 = 13; //모터1(정회전) 13번핀
int sw2 = 5; //2번스위치 5번핀
int motor2 = 3; //모터2(역회전) 3번핀

void setup()  {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  //sw를 인풋_풀업으로 하여, 스위치가 열려있다면 HIGH
  //스위치가 닫혀있다면 LOW값을 반환
}

void loop()  {
  if (digitalRead(sw1) == LOW)
    digitalWrite(motor1, HIGH); //1번 스위치누르면 Motor1작동
  else
    digitalWrite(motor1, LOW); //스위치 닫히면 Off

  if (digitalRead(sw2) == LOW)
    digitalWrite(motor2, HIGH); //2번 스위치누르면 Motor2작동
  else
    digitalWrite(motor2, LOW); //스위치 닫히면 off
}
