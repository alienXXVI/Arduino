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
lcd.setCursor(0, 0);// (coluna, linha)

lcd.setCursor(3, 1);// lcd.setCursor aponta para onde começa a escrever
lcd.print("Aliana mt foda");
lcd.setCursor(0, 2);

lcd.setCursor(0, 3);

}
