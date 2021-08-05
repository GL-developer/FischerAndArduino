int sw = 12 ; //스위치 12번핀으로 제어
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); //1번LED
  pinMode(10, OUTPUT); //2번LED
  pinMode(sw, INPUT_PULLUP); //스위치 사용
}

void loop() { // 0.1초 간격으로 불빛 교차로 깜빡이기
  if (digitalRead(sw) == LOW)
  {
    digitalWrite(13, HIGH);
    digitalWrite(10, LOW);
    delay(100);
    digitalWrite(10, HIGH);
    digitalWrite(13, LOW);
    delay(100);
  }
}
