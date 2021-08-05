#include <SoftwareSerial.h>
SoftwareSerial test(18,19);

void setup() {
  // put your setup code here, to run once:
  test.begin(9600);
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available()){
    String str = Serial.readString();
    String temp = "";
    int index = str.indexOf(":");
    if(index >=0){
      temp = str.substring(index+1);
      Serial.print(temp);
      digitalWrite(13,temp.toInt());
    }
    
    
    
  }

  if(test.available()){
    int b = test.read();
    Serial.print(b);
    Serial.println("C");
  }
}
