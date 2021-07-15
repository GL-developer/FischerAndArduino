int input1 = 10; //10번핀으로 제어
int input2 = 13; //13번핀으로 제어

void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  Serial.begin(9600); //시리얼모니터사용
}

void loop() {
  digitalWrite(input1, HIGH) ;
  digitalWrite(input2, LOW) ;
  delay(5000); //5초간 작동
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ; //input1,2 멈춤
  delay(3000); //3초간 유지
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH); //input2 작동
  delay(5000) ; //5초간 작동
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ; //input1,2 멈춤
  delay (3000) ; //3초간 유지
}
