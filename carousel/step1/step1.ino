int motor1 = 10; //모터1(정회전) 10번핀으로 제어
int motor2 = 13; //모터2(역회전) 13번핀으로 제어

void setup() {
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  digitalWrite(motor1, HIGH) ;
  digitalWrite(motor2, LOW) ; //motor1 작동
  delay(10000); //10초간 작동
  digitalWrite(motor1, LOW) ;
  digitalWrite(motor2, LOW) ; //motor1,2 멈춤
  delay(1000); //1초간 유지
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, HIGH); //motor2 작동
  delay(10000) ; //10초간 작동
  digitalWrite(motor1, LOW) ;
  digitalWrite(motor2, LOW) ; //motor1,2 멈춤
  delay (1000) ; //1초간 유지

}
