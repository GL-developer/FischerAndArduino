int waterPin = A5; //수위수분센서
int motor = 2; //모터

void setup() {
  Serial.begin(9600);
  pinMode(motor, OUTPUT); //모터 출력
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(waterPin);

  if (value < 100) {
    digitalWrite(motor, LOW); //수위가 100보다 낮으면 모터 정지
  }
  else if (value <= 500) {
    digitalWrite(motor, HIGH); //수위가 100~500사이면 모터 회전
  }
  else {
    digitalWrite(motor, HIGH);
  }
  delay(100);
  Serial.println(value); //시리얼모니터에 수위값 표시
}
