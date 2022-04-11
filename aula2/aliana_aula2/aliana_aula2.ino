// C++ code
//
int LUZ = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(3,OUTPUT);

}

void loop()
{
  LUZ = analogRead(A0);
  if(LUZ<300){
    digitalWrite (3, HIGH);
  }
  else {
    digitalWrite (3, LOW);
  }
  Serial.println(LUZ);
  delay(10); // Delay a little bit to improve simulation performance
}
