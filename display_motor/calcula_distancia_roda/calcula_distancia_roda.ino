// C++ code
//
int distancia = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)//trigger envia e echo recebe o sinal sonoro
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(7, 6);
  Serial.println(distancia);
  delay(10); // Delay a little bit to improve simulation performance
}
