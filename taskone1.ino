// C++ code

#include <Servo.h>

Servo m1,m2,m3,m4,m5;

void setup()
{
  Serial.begin(9600);
  m1.attach(11);
  m2.attach(10);
  m3.attach(9);
  m4.attach(6);
  m5.attach(5);
  
}

void loop()
{
 int x = analogRead(A0);
 int y = map(x,0,1023,0,90);
  m1.write(y);
  m2.write(y);
  m3.write(y);
  m4.write(y);
  m5.write(y);
 
}