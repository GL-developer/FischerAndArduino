int motor = 10; //모터 10번핀으로 제어

void setup()
{
  pinMode(motor, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
  //시리얼모니터를 사용해 숫자를 입력하여 속도조절
}


void loop()
{
  if (Serial.available())
  {
    int speed = Serial.parseInt();
    if (speed >= 0 && speed <= 255) //0~255까지의 숫자 입력
    {
      analogWrite(motor, speed);
    }
  }
}
