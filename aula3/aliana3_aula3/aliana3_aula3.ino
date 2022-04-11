// Blog Usinainfo
// Display LCD 20x4 com Adaptador I2C e Arduino;
 
// Carrega as bibliotecas necessárias
#include <Wire.h>;
#include <LiquidCrystal_I2C.h>;
 
// Define o endereço utilizado pelo Adaptador I2C
LiquidCrystal_I2C lcd(0x27,20,4);
void setup() {
//Inicializa o LCD e o backlight
lcd.init();
lcd.backlight();
}
 
void loop() {
  int tempo = millis ();
lcd.setCursor(7, 0);// (coluna, linha)
lcd.print("Aliana");
lcd.setCursor(0, 1);// lcd.setCursor aponta para onde começa a escrever
lcd.print("*Curso  de  Robotica");
lcd.setCursor(6, 2);
lcd.print("CTRL  3D");
lcd.setCursor(1, 3);
lcd.print("Tempo: ");
lcd.print(tempo/1000);
lcd.print("  segundos");
}
