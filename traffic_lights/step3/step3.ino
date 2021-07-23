int digit[11][8] = {
  // A,B,C,D,E,F,G,DOT LED //캐소드방식. 애노드는 1과0을 반대로 입력
  {1, 1, 1, 1, 1, 1, 0, 1}, // 0.
  {0, 1, 1, 0, 0, 0, 0, 1}, // 1.
  {1, 1, 0, 1, 1, 0, 1, 1}, // 2.
  {1, 1, 1, 1, 0, 0, 1, 1}, // 3.
  {0, 1, 1, 0, 0, 1, 1, 1}, // 4.
  {1, 0, 1, 1, 0, 1, 1, 1}, // 5.
  {1, 0, 1, 1, 1, 1, 1, 1}, // 6.
  {1, 1, 1, 0, 0, 0, 0, 1}, // 7.
  {1, 1, 1, 1, 1, 1, 1, 1}, // 8.
  {1, 1, 1, 1, 0, 1, 1, 1}, // 9.
  {0, 0, 0, 0, 0, 0, 0, 0} //10(Off)
};

int seg_num[8] = {2, 3, 4, 5, 6, 7, 8, 9}; //A, B, C, D, E, F, G, DOT

void setup() {
  pinMode(13, OUTPUT); //초록불 출력
  pinMode(10, OUTPUT); //빨간불 출력
  // 7세그먼트에 연결된 디지털 핀을 출력모드로 설정
  for (int i = 0; i < 8; i++) {
    pinMode(seg_num[i], OUTPUT);
  }
}

void loop() { //초록불 5초 점등 후, 5번깜빡인 후, 빨간불5초 점등
  digitalWrite(13, HIGH);  //  초록불 점등
  delay(5000);  // 5초동안

  for (int i = 5; i > 0; i--)  { // 5~1까지 1초간격으로 표시
    displayDigit(i);
    digitalWrite(13, LOW);
    delay(1000);
    digitalWrite(13, HIGH);
    delay(1000);
  }
  displayDigit(10);
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);
}
void displayDigit(int n)
{
  for (int i = 0; i < 8; i++) {
    digitalWrite(seg_num[i], digit[n] [i]);
    //segment number(pin) 지정된 핀에 신호를 보냄
  }
}
