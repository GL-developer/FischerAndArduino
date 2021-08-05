void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); //1번LED
  pinMode(10, OUTPUT); //2번LED
}

void loop() { //2초 간격으로 밝고 어두운 단계가 되도록 제어
  digitalWrite(13, HIGH);
  digitalWrite(10, HIGH);
  delay(2000);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  delay(2000);
}
