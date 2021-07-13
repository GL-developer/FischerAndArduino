int sw1 = 12;
int input1 = 13;
int sw2 =  5;
int input2 = 3;

void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  //sw를 인풋_풀업으로 하여 스위치가 열려있다면 HIGH
  //스위치가 닫혀있다면 LOW값을 반환
}

void loop() {
  if (digitalRead(sw1) == LOW) // 1번 스위치 누르면
    digitalWrite(input1, HIGH); //input1 작동
  else
    digitalWrite(input1, LOW); // 스위치가 닫히면 Off

  if (digitalRead(sw2) == LOW) // 2번 스위치 누르면
    digitalWrite(input2, HIGH); //input2 작동
  else
    digitalWrite(input2, LOW); // 스위치가 닫히면 Off
}
