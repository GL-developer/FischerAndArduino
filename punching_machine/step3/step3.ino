int motor = 10; //모터 10번핀으로 제어
int sensor = 5; //센서 5번핀으로 제어

void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(sensor, INPUT_PULLUP); //센서사용/인풋_풀업
}

void loop()  {
  if (digitalRead(sensor) == LOW) { //센서에 감지됐을때
    digitalWrite(motor , LOW);
  }
  else
    digitalWrite(motor , HIGH);
}
