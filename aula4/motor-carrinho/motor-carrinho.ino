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
  char bt;
  if (Serial.available () > 0){ //se estiver tendo comunicação serial

    bt = Serial.read();
    if (bt == 'a'){
      digitalWrite(2, HIGH);//frente
      digitalWrite(3, LOW);//frente
    }
    else if(bt == 't'){
      digitalWrite(2, LOW);//tras
      digitalWrite(3, HIGH);//tras
    }
    else if(bt == 'p'){ //parado
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
    else if(bt == 'f'){
      servo_5.write(90);
    }
    else if(bt == 'd'){//direita
      servo_5.write(110);
    }
    else if(bt == 'e'){//esquerda
      servo_5.write(70);
   }
  

  }
}
