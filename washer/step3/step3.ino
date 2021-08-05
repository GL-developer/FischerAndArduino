//PWM제어로 모터 속도변경
int motorPin = 3; //모터 3번핀으로 제어

void setup()
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255"); //시리얼모니터에 0~255값입력
}


void loop()  //속도 0~ 255까지 입력으로 속도제어
{
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255)
    {
      analogWrite(motorPin, speed);
    }
  }
}
