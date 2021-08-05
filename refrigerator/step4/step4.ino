int Buzzer = 5 ; //부저 5번핀으로 제어
int led = 10; //led 10번핀으로 제어
int sw = 12; //스위치 12번핀으로 제어
bool warning = false;

void setup()  {
  pinMode(Buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(sw, INPUT_PULLUP); //스위치사용/sw를 인풋_풀업
}

void loop()  {
  int sw_value =  digitalRead(sw);
  if (sw_value == HIGH) { //냉장고 문이 열렸을 때
    if (warning == true) {
      digitalWrite(led , HIGH);
      digitalWrite(Buzzer , HIGH);
      delay(500);
      digitalWrite(led, LOW);
      digitalWrite(Buzzer, LOW);
      delay(500);
    }
    else { // warning == false //3초뒤 LED켜짐
      delay(5000);
      warning = true;
    }
  }
  else { // 냉장고 닫혔을떄
    warning = false;
  }
}
