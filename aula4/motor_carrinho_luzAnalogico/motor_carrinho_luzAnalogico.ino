// C++ code
//
#include <Servo.h>

Servo servo_5;

void setup()
{
  servo_5.attach(5, 500, 2500);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  servo_5.write(90);//pode voltar para 0° (ir pra tras)

  Serial.begin (9600);
}

void loop()
{
   int luz = analogRead (A0);
   Serial.println(luz);
   
   if (luz < 100){
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
   }
    else {
      digitalWrite(3, LOW);
      digitalWrite(2, HIGH);
      
   }
}
