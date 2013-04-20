#include <LiquidCrystal.h>
#include <PID_AutoTune_v0.h>
#include <PID_v1.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
double Setpoint, Input, Output;
PID myPID(&Input, &Output, &Setpoint,2,0.1,5, DIRECT);

int TempReadPin = 1;
int HeaterPin = 3; 
int currentTemp = 0;
int setTemp = 25;
int lcd_key     = 0;
int adc_key_in  = 0;
int UserSetTemp = 0;

 void setup()
 {
 pinMode(TempReadPin,INPUT);
 pinMode(HeaterPin,OUTPUT);
 lcd.begin(16, 2);
 Setpoint = 0;
 }
 
 
 void loop()
 {
   currentTemp = TemperatureReading();
   read_LCD_buttons();
   
   int Setpoint = LCDFunctions();
   int Input = currentTemp;
   myPID.Compute();
   analogWrite(HeaterPin,Output);
   if (currentTemp > 200)
   {
   //SafetyCheck();
   }
      delay(500);
   lcd.clear();

   
 }
