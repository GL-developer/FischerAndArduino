void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT); //1번LED
  pinMode(10, OUTPUT); //2번LED
}

void loop() { //아날로그 입력으로 LED밝기를 조절//서서히 밝아지도록 입력
  // PWM 제어 가능 핀 - 3,5,6,9,10,11PIN
  analogWrite(10, 10);
  analogWrite(11, 10);
  delay(1000);
  analogWrite(10, 100);
  analogWrite(11, 100);
  delay(1000);
  analogWrite(10, 250);
  analogWrite(11, 250);
  delay(1000);
}
