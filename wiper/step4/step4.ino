#include <DHT.h>
#define DHTPIN 2 //DHT핀을 2번으로 제어
#define DHTTYPE DHT11 //DHT11타입을 사용
DHT dht(DHTPIN, DHTTYPE); //DHT설정을 2번핀과 dht11로 제어
int t = 0; //온도
int h = 0; //습도
int r = 3; //모터

void setup() {
  Serial.begin(9600); //시리얼모니터 사용
  pinMode(r, OUTPUT); //r(모터)를 OUTPUT모드
}

void dht11() {
  t = dht.readTemperature();
  h = dht.readHumidity();
  Serial.print("Temperature : "); //문자열출력
  Serial.print(t);
  Serial.println("c"); //문자열출력
  Serial.print("Jumidity : "); //문자열출력
  Serial.print(h);
  Serial.println("%"); //문자열출력
}

void loop() {
  dht11();
  if (h >= 50) // h값이 50이상일 경우
  {
    digitalWrite(r, HIGH); //모터작동
  }
  else //50이상이 아닐경우
  {
    digitalWrite(r, LOW); //모터 정지
  }
  delay(2000); //루프딜레이 2초
}
