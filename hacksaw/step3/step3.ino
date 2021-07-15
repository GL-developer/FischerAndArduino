int activeB = 5; //능동부저 5번핀으로 제어
void setup() {
  pinMode(5, OUTPUT); //5번핀으로 출력
}

void loop() {
  digitalWrite(5, HIGH); //5번핀 출력
  delay(500); //0.5초 유지
  digitalWrite(5, LOW); //5번핀 출력멈춤
  delay(500); //0.5초간 유지
}
