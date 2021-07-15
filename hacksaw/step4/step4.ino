int activeB = 5; //부저 5번핀으로 제어
int trigPin = 11; //TRIG핀 11번핀
int echoPin = 12; //ECHO핀 12번핀
int motorPin = 10; //모터 10번핀으로 제어

void setup() {
  Serial.begin(9600) ; //시리얼모니터
  pinMode(activeB, OUTPUT) ;
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, HIGH) ;
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW) ;

  int duration = pulseIn(echoPin, HIGH); //물체에 반사되어돌아온 초음파의 시간을 변수에 저장
  int dis = duration / 29 / 2;

  Serial.print(dis);
  Serial.println("cm") ; //pc모니터로 초음파 거리값을 확인

  digitalWrite(motorPin, HIGH);
  if (dis < 4) {
    digitalWrite(activeB, HIGH), digitalWrite(motorPin, LOW); //4cm이하면 부저울리고 모터 멈춤
    delay(500);
    digitalWrite(activeB, LOW);
  }
  else {
    digitalWrite(motorPin, HIGH); // 4cm이하가 아닐경우 모터 작동
  }
  delay(500); //0.5초마다 측정값을 보여준다
}
