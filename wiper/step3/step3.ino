#include "DHT.h"
#define DHTPIN 2     // DHT를 2번핀으로제어
#define DHTTYPE DHT11 // 온도센서모델명은 DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println(F("DHT11 test!"));

  dht.begin();
}

void loop() {
  delay(2000); //2초간격으로 나타냄

  float h = dht.readHumidity(); //습도
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature(); //온도
  // Read temperature as Fahrenheit (isFahrenheit = true)
  float f = dht.readTemperature(true);

  if (isnan(h) || isnan(t) || isnan(f)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }

  float hif = dht.computeHeatIndex(f, h);
  float hic = dht.computeHeatIndex(t, h, false);

  Serial.print(F("Humidity: ")); //습도
  Serial.print(h);
  Serial.print(F("%  Temperature: ")); //온도
  Serial.print(t);
  Serial.print(F("°C ")); //섭씨온도
  Serial.print(f);
  Serial.print(F("°F  Heat index: "));//화씨온도
  Serial.print(hic);
  Serial.print(F("°C "));
  Serial.print(hif);
  Serial.println(F("°F"));
}
