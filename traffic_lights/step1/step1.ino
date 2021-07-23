void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); //초록불
  pinMode(10, OUTPUT); //빨간불
}

void loop() { //초록불 5초 점등 후, 깜빡인 후, 빨간불5초 점등
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);


}
