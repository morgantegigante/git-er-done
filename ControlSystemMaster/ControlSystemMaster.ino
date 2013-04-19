#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
 
int TempReadPin = 1;
int HeaterPin = 13; 
int currentTemp = 0;

 void setup()
 {
 pinMode(TempReadPin,INPUT);
 pinMode(HeaterPin,OUTPUT);
 lcd.begin(16, 2);
 
 }
 
 
 
 void loop()
 {
   
   int currentTemp = TemperatureReading();
   lcd.setCursor(0,1);
   lcd.print(currentTemp);
   delay(100);
   lcd.clear();
   
   if(currentTemp > 35)
   {
     digitalWrite(HeaterPin, LOW);
     delay(100);
   }
   if(currentTemp < 35)
   {
     digitalWrite(HeaterPin, HIGH);
     delay(100);    
   }
   
   SafetyCheck();
   
   
 }

