//조이스틱으로 LED 제어하기
int kpin = 7, xpin = A0, ypin = A1; //k(스위치) 7번핀, x는 A0핀, y는 A1핀
int LED1_A1 = 13, LED2_B1 = 10; //LED1 13번핀, LED2 10번핀

void setup() {
  Serial.begin(9600);
  pinMode(kpin, INPUT); //k(스위치) 입력
  digitalWrite(kpin, HIGH); //k(스위치) 눌렀을 때
  pinMode(LED1_A1, OUTPUT);
  pinMode(LED2_B1, OUTPUT); //LED1,2 출력

}
void loop() {
  int swValue = digitalRead(kpin); //스위치 입력신호
  int xValue = analogRead(xpin); // x좌표값 입력신호
  int yValue = analogRead(ypin); //y좌표값 입력신호
  int f_spd, b_spd;
  Serial.println(yValue);
  if (yValue > 500 && yValue < 524) {
    f_spd = 0;
    b_spd = 0;
  } else if (yValue <= 500) { // 조이스틱을 오른쪽으로 움직였을 때
    f_spd = map(yValue, 500, 0, 0, 255); //y좌표의 범위(500~0)를 변환(0~255)
    b_spd = 0;
  } else { // 조이스틱을 왼쪽으로 움직였을 때
    f_spd = 0;
    b_spd = map(yValue, 524, 1023, 0, 255); ////y좌표의 범위(524~1023)를 변환(0~255)
  }
  analogWrite(LED1_A1, f_spd); //LED1 점등
  analogWrite(LED2_B1, b_spd); //LED2 점등
}
