int input1 = 10; // input1 10번 포트로 제어
int input2 = 13; // input2 13번 포트로 제어

void setup(){
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT); // input1, input2로 출력
  Serial.begin(9600); // 시리얼모니터 사용
}

void loop(){
  if(Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if(in_data == '1')
    {
      digitalWrite(input1,HIGH);
      digitalWrite(input2,LOW);
    }
    else if(in_data == '2')
    {
      digitalWrite(input1,LOW);
      digitalWrite(input2,HIGH);
    }
    else
    {
      digitalWrite(input1,LOW);
      digitalWrite(input2,LOW);
    }
  }
}
