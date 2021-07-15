int Motor = 13; //모터 13번핀으로 제어
int start_switch = 12; //스위치 12번핀으로 제어
int stop_switch = 5; //스위치 5번핀으로 제어

void setup()  {
  pinMode(Motor, OUTPUT); //모터출력
  pinMode(start_switch, INPUT_PULLUP);
  pinMode(stop_switch, INPUT_PULLUP);
  //sw를 인풋_풀업
}

void loop()  {
  if (digitalRead(start_switch) == LOW) //시작스위치 눌렀을때
  {
    digitalWrite(Motor , HIGH); //모터작동
  }
  if (digitalRead(stop_switch) == LOW); //멈춤스위치 눌렀을때
  {
    digitalWrite(Motor, LOW); //모터멈춤
  }
}
