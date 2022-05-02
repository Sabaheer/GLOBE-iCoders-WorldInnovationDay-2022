#include"LiquidCrystal.h"
LiquidCrystal lcd(9,8,7,6,5,4);

int GAS_VAL = 0;

void setup()
{
pinMode(A0, INPUT);
Serial.begin(9600);
lcd.begin(16, 2);

lcd.setCursor(0, 0);
lcd.print("    GAS SENSOR   ");



}

void loop()
{
GAS_VAL = analogRead (A0);
Serial.println(GAS_VAL);

if (GAS_VAL > 500 )
{
lcd.setCursor(0, 1);
lcd.print(" GAS Detected ");

}

else 
{

lcd.setCursor(0, 1);
lcd.print("GAS Not Detected");

}

delay(10); // Delay a little bit to improve simulation performance.

}