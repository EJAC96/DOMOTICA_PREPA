#include <LiquidCrystal.h>
int rs=8, e=9, d4=10, d5= 11, d6=12, d7=13;
LiquidCrystal lcd(rs,e,d4,d5,d6,d7); 

int senal1=0, senal2=0, senal3=0, senal4=0;
int boton1=2, boton2=3;

void setup() {
  lcd.begin(16,2);//16: columnas 2: filas
  pinMode(boton1, INPUT); //Establece pin 2 como entrada
  pinMode(boton2, INPUT); //Establece pin 3 como entrada 
}

void loop() {
    lcd.setCursor(0,0);
    lcd.print(" BIENVENIDO ");//Comando para mostrar texto en el display LCD
    lcd.setCursor(2,1);
    lcd.print(" DOMOTICA ");
    delay(500);//Retado de 200 milisegundos
    lcd.clear();

    senal1 = digitalRead(boton1); //Lee la señal del pin 2 guardado en la variable "boton1"
    senal2 = digitalRead(boton2); //Lee la señal del pin 3 guardado en la variable "boton2"
    
    if(senal1 == HIGH){ //Evalúa si es presionado el boton 1 (La señal es guardad en la variable "senal1")
      lcd.setCursor(0,0);
      lcd.print("LUCES LED");//Comando para mostrar texto en el display LCD
      lcd.setCursor(2,1);
      lcd.print("ENC. / APAG.");
      delay(500);//Retado de 200 milisegundos
      lcd.clear();
    }
    if(senal2 == HIGH){ //Evalúa si es presionado el boton 2 (La señal es guardad en la variable "senal2")
      lcd.setCursor(0,0);
      lcd.print("TEMPERATURA");//Comando para mostrar texto en el display LCD
      lcd.setCursor(2,1);
      lcd.print("HUMEDAD");
      delay(500);//Retado de 200 milisegundos
      lcd.clear();
    }

}
