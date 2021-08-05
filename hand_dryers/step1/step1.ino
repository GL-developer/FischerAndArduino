int motor = 9; //모터 9번핀으로 제어
int sensor1 = 7; //포터센서1 7번핀으로 제어
int sensor2 = 5; //포터센서2 5번핀으로 제어

void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(sensor1, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP);// 센서를 인풋_풀업
}

void loop()  {
  if (digitalRead(sensor1) == LOW) {
    digitalWrite(motor, LOW); //1번센서에 감지되면 motor작동
  }
  else
    digitalWrite(motor, HIGH); //센서 닫히면 Off

  if (digitalRead(sensor2) == LOW) {
    digitalWrite(motor, LOW); //2번센서에 감지되 motor작동
  }
  else
    digitalWrite(motor, HIGH); //센서 닫히면 off
}
