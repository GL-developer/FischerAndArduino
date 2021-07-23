#include <Wire.h> //I2C 통신을 위해 Wire 라이브러리 사용
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h> // hd44780.h 라이브러리 사용

hd44780_I2Cexp mylcd; //객체 이름 mylcd로 선언
const int trigPin = 11; //trig 11번핀
const int echoPin = 12; //echo 12번핀

void setup() {
  Serial.begin(9600); //시리얼통신 시작

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  mylcd.init(); //lcd 시작
  mylcd.backlight(); //lcd백라이트 on
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long timeDistance = pulseIn(echoPin, HIGH);
  long distance = (timeDistance / 2) / 29; ////물체에 반사되어돌아온 초음파의 시간을 변수에 저장

  mylcd.clear(); //lcd 초기화
  mylcd.setCursor(0, 0);
  mylcd.print("Distance : "); //LCD에 출력
  mylcd.setCursor(0, 1);
  mylcd.print(distance);
  mylcd.print("cm"); // LCD에 출력
  delay(500); //0.5초간격으로 표시
}
