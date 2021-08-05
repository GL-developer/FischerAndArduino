int motor = 9; //모터 9번핀으로 제어
int sensor1 = 7; //포터센서1 7번핀으로 제어
int sensor2 = 5; //포터센서2 5번핀으로 제어
bool start = false;
void setup()  {
  pinMode(motor, OUTPUT);
  pinMode(sensor1, INPUT_PULLUP);
  pinMode(sensor2, INPUT_PULLUP);// 센서를 인풋_풀업
}

void loop()  {
  int sen1 = digitalRead(sensor1);
  int sen2 = digitalRead(sensor2);
  if ((sen1 == HIGH || sen2 == HIGH) && start == false) {
    //센서1or센서2가 HIGH이면서 start가 false값일때 모터 5초 작동
    digitalWrite(motor, HIGH);
    delay(5000);
    start = true;
  }
  if (sen1 == LOW && sen2 == LOW) { //센서1과 2가 LOW일때 멈춤
    start = false;
  }
  if (start == true) //start가 true일때 모터 멈춤
    digitalWrite(motor, LOW);

}
