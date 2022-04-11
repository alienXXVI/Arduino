void setup() {
  pinMode(A7, INPUT);
  Serial.begin (9600);
  Serial.println ("comece a medir");
}

void loop() {
  int valor, i;
  float soma = 0;
  float constante = 0.95, distancia; //constante que multiplica a soma das velocidades e descobre a distancia
  valor = analogRead(A7); //le a velocidade
  
  for(i=0; i<=4000; i++){ //le a velocidade durante 4 segundos
    valor = analogRead (A7);
    delay(1);
    soma = soma + valor; //acumula as velocidades e mede a distancia
  }
  distancia = (soma*constante)/10000;
  Serial.println (distancia);
  delay (30);

}
