// C++ code
//
#include <Servo.h>

Servo servo_5;

void setup()
{
  servo_5.attach(5, 500, 2500);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  servo_5.write(0);//muda o ângulo
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  servo_5.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
}
