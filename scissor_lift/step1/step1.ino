int in1 = 10;
int in2 = 13;

void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available())
  {
    char in_data;
    in_data = Serial.read();
    if (in_data == '1')
    {
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
    }
    else if (in_data == '2')
    {
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
    }
    else
    {
      digitalWrite(in1, LOW);
      digitalWrite(in2, LOW);
    }
  }
}
