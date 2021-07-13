int input1 = 10; //10번핀으로 제어
int input2 = 13; //13번핀으로 제어

void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(input1, HIGH) ;
  digitalWrite(input2, LOW) ;
  Serial.println("3"); //input1작동시 시리얼프린트에 "3"이라고표시됨
  //모터가 어느방향으로 돌아가는지 알수 있음
  delay(3500); //3.5초간 작동
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ; //input1,2 멈춤
  delay(1000); //1초간 작동
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH); //input2 작동
  Serial.println("2"); //input2작동시 시리얼프린트에 "2"라고표시됨
  delay(2800) ; //2.8초간 작동
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ; //input1,2 멈춤
  delay (1000) ; //1초간 작동
}
