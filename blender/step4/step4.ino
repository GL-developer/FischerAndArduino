int input1 = 10; //10번핀으로 모터 제어
int input2 = 11; //11번핀으로 모터 제어
int trig = 12; //TRIG 핀 설정 (초음파보내는핀)
int echo = 13; // ECHO 핀 설정 (초음파받는핀)

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

  Serial.begin(9600); //시리얼모니터 사용
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  int duration = pulseIn(echo, HIGH); //물체에 반사되어돌아온 초음파의 시간을 변수에 저장
  int dis = duration / 29 / 2;
  Serial.println(dis); //PC모니터로 초음파 거리값을 확인하는 코드
  if (dis < 10) {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW); //거리가 10cm이하면 작동
    delay(3000);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW); //멈춤
    delay(3000);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH); //거리가 10cm이하면 작동
    delay(3000);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW); //멈춤
  }
  delay(500); //0.5초마다 측정값을 보여준다.
}
