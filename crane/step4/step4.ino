#include <Wire.h>
#include <hd44780.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
hd44780_I2Cexp lcd;
int motor = 10; //모터(정회전)10번핀으로 제어
int sw = 12 ; //스위치 12번핀으로 제어


void setup()  {
  lcd.begin(16, 2); //LCD 통신 사용
  pinMode(sw, INPUT_PULLUP);
  lcd.noBacklight(); //LCD 백라이트 켜짐으로 초기화
  pinMode(motor, OUTPUT); //모터(정회전) 출력
}

void loop()  {
  lcd.setCursor (0, 0); //LCD 내용 출력 위치 커서 설정 (첫번째줄, 왼쪽 첫번째 칸)
  lcd.print("Have a nice day!");
  lcd.setCursor(1, 1); //LCD 내용 출력 위치 커서 설정 (두번째줄, 왼쪽에서 두번째 칸)
  lcd.print("Tower crain");

  if (digitalRead(sw) == LOW) //스위치 눌렀을때
  {
    lcd.backlight(); //LCD 백라이트 켜짐
    digitalWrite(motor, HIGH); //모터작동
  }
  if (digitalRead(sw) == HIGH) //스위치 누르지 않았을때
  {
    lcd.noBacklight(); //LCD 백라이트 꺼짐
    digitalWrite(motor, LOW);
  }
}
