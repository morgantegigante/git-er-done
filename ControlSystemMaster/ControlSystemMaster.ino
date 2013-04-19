#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
int TempReadPin = 1;
int HeaterPin = 13; 

 void setup()
 {
 pinMode(TempReadPin,INPUT);
 pinMode(HeaterPin,OUTPUT);
 lcd.begin(16, 2);
 }
 
 void loop()
 {
 }
