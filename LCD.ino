#include <LiquidCrystal.h>  //Librería para controlar la pantalla LCD
int rs=8, e=9, d4=10, d5= 11, d6=12, d7=13; //Variables con los pines del Arduino
LiquidCrystal lcd(rs,e,d4,d5,d6,d7); 

void setup() {
 

lcd.begin(16,1);//Comando para inciar LCD 16: columnas 2: filas
delay(100); //retardo 100 milisegundos

}

void loop() {
 lcd.setCursor(2,0); //Ubicarse en la posición columna 2, fila 0
 lcd.print(" Hola, Mundo!"); // Imprimir texto
 delay(1500);
 lcd.clear(); //Comando que borra el texto en el LCD

 lcd.setCursor(5,1);  //Ubicarse en la posición columna 5, fila 1
 lcd.print(" 4to semestre"); // Imprimir texto
 delay(1500);
 lcd.clear();

 lcd.print(" codigo LCD"); // LCD PRINT
 delay(1500);
 lcd.clear();
}
