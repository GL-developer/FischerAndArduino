int motor1 = 10; //모터1(정회전) 10번핀으로 제어
int motor2 = 13; //모터2(역회전) 13번핀으로 제어

void setup() {
  pinMode(motor1, OUTPUT); //motor1 출력
  pinMode(motor2, OUTPUT); //motor2 출력
  Serial.begin(9600); //시리얼통신
}

void loop() {

  if (Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if (in_data == '1') //데이터값 '1'을 입력했을 때
    {
      digitalWrite(motor1, HIGH); //모터1(정회전)  작동
      digitalWrite(motor2, LOW); //모터2(역회전)  멈춤
    }
    else if (in_data == '2') //데이터값 '2'를 입력했을 때
    {
      digitalWrite(motor1, LOW); //모터1(정회전)  멈춤
      digitalWrite(motor2, HIGH); //모터2(역회전)  작동
    }
    else //그 이외의 값 입력시
    {
      digitalWrite(motor1, LOW); //모터1(정회전)  멈춤
      digitalWrite(motor2, LOW); //모터2(역회전)  멈춤
    }
  }
}
