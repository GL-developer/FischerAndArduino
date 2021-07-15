int in1 = 10; //모터 10번핀으로 제어

void setup() {
  pinMode(in1, OUTPUT); //in1 출력
  Serial.begin(9600); //시리얼모니터사용
}

void loop() {
  if (Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if (in_data == '1') //데이터값 '1'을 입력했을 때
    {
      digitalWrite(in1, HIGH); //in1(모터) 작동
    }
    else if (in_data == '2') //데이터값 '2'를 입력했을 때
    {
      digitalWrite(in1, LOW); //in1(모터) 멈춤
    }
    else //그 이외의 값 입력시
    {
      digitalWrite(in1, LOW); //in1(모터) 멈춤

    }
  }
}
