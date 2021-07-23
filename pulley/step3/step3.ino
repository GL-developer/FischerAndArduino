#include <Wire.h>  //I2C통신을 위한 헤더
#include <hd44780.h> //라이브러리에 대한 해더
#include <hd44780ioClass/hd44780_I2Cexp.h> //라이브러리에 대한 해더/ 라이브러리가 정상적으로 설치되면 주황글씨로 표시

hd44780_I2Cexp mylcd; / / 내가 사용할객체 mylcd

void setup() {
  // put your setup code here, to run once:
  mylcd.begin(16, 2);
}

void loop() {
  mylcd.setCursor(0, 0); //
  mylcd.print("Have a nice day!"); // LCD에 출력
  mylcd.setCursor(1, 1);
  mylcd.print("1234"); //LCD에 출력
}
