int input1 = 10;
int input2 = 13;

void setup() {
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(input1, HIGH) ;
  digitalWrite(input2, LOW) ;
  delay(10000);
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ;
  delay(3000);
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  delay(10000) ;
  digitalWrite(input1, LOW) ;
  digitalWrite(input2, LOW) ;
  delay (3000) ;
}
