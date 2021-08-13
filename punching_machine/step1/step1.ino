int motor = 10;

void setup() {
  pinMode(motor, OUTPUT); //motor 출력
  Serial.begin(9600); //시리얼통신
}

void loop() {
  if (Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if (in_data == '1') //데이터값 '1'을 입력했을 때
    {
      digitalWrite(motor, HIGH); //모터  작동
    }
    else //그 이외의 값 입력시
    {
      digitalWrite(motor, LOW); //모터 멈춤
    }
  }
}
