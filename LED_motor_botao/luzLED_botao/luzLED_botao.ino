// C++ code
//
int botao = 0;
int luz=0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(7, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  luz = analogRead(A0);
  botao = digitalRead(7);
  if(botao==1){
    digitalWrite(3, HIGH);
  } else if(luz < 30)
      digitalWrite(3, LOW);
      delay(1000);
      digitalWrite(3, HIGH);
  }
  Serial.println(botao);
  delay(10); // Delay a little bit to improve simulation performance
}
