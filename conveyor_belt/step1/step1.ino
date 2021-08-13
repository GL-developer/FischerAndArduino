int motor = 9; //모터 9번핀으로 제어
int sensor1 = 7; //포터센서1 7번핀으로 제어
int sensor2 = 5; //포터센서2 5번핀으로 제어

void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(sensor1, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP); //센서사용/인풋_풀업
}

void loop()  {

  bool sensorValue1 = digitalRead(sensor1);
  bool sensorValue2 = digitalRead(sensor2);

  if ((sensorValue1 == HIGH || sensorValue2 == HIGH)) { //센서에 감지됐을때 모터작동
    digitalWrite(motor , HIGH);
  }
  else //그외에는 모터멈춤
    digitalWrite(motor , LOW);
}
