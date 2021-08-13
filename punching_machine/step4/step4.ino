int motor = 13; //모터 13번핀으로 제어

void setup() {
  pinMode(motor, OUTPUT);
  Serial.begin(9600); //시리얼통신
}

void loop() { //0.5초간격으로 작동/멈춤 반복
  digitalWrite(motor, HIGH) ;
  delay(500); //0.5초간 작동
  digitalWrite(motor, LOW) ;
  delay(500); //0.5초간 유지
}
