#include<SoftwareSerial.h>

int flexpin0=A0;
int flexpin1=A1;
int flexpin2=A2;
int flexpin3=A3;
int flexpin4=A4;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexVal0,flexVal1,flexVal2,flexVal3,flexVal4;
  flexVal0 = analogRead(flexpin0);
  Serial.print("Sensor 1: ");
  Serial.println(flexVal0);
  delay(1000);
  
  flexVal1 = analogRead(flexpin1);
  Serial.print("Sensor 2: ");
  Serial.println(flexVal1);
  delay(1000);
  
  flexVal2 = analogRead(flexpin2);
  Serial.print("Sensor 3: ");
  Serial.println(flexVal2);
  delay(1000);
  
  flexVal3 = analogRead(flexpin3);
  Serial.print("Sensor 4: ");
  Serial.println(flexVal3);
  delay(1000);
    
  flexVal4 = analogRead(flexpin4);
  Serial.print("Sensor 5: ");
  Serial.println(flexVal4);
  delay(1000);
}
