#include <LiquidCrystal.h>
#include <PID_AutoTune_v0.h>
#include <PID_v1.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
double Setpoint, Input, Output;
PID myPID(&Input, &Output, &Setpoint,2,0.1,5, DIRECT);

// define initial necessary variables
int TempReadPin = 1;
int HeaterPin = 2; 
int currentTemp = 0;
int setTemp = 25;
int lcd_key     = 0;
int adc_key_in  = 0;
int UserSetTemp = 0;
int WindowSize = 500;
unsigned long windowStartTime;
int stage = 0;
int startTemp = 25;
// these variables are for the user interface function
// don't worry about these
int ptime = 60;
int stime = 60;
int rtime = 45;
int rtemp = 218;
int ctime = 60;

// THESE ARE THE OUTPUTS!!! USE THEM! :D
unsigned long PTIME = 0; //PREHEAT TIME
unsigned long STIME = 0; //SOAK TIME
unsigned long RTIME = 0; //REFLOW TIME
unsigned long RTEMP = 0; //REFLOW TEMP
unsigned long CTIME = 0; //COOL TIME

int mode = 0; //MODE VARIABLE DEFINES WHICH USER INPUT BEING SPECIFIED

unsigned long SysStartTime;

#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

 void setup()
 {
 pinMode(TempReadPin,INPUT);
 pinMode(HeaterPin,OUTPUT);
 lcd.begin(16, 2);
 windowStartTime = millis();
 myPID.SetOutputLimits(0, WindowSize);
 myPID.SetMode(AUTOMATIC);
 greeting();
 }
 
 void loop()
 {
  if (mode == 0)
  {
      preheatDisplay();
      lcd_key = read_LCD_buttons();
      preheat();
  }
  
  if (mode == 1)
  {
      soakDisplay(); 
      lcd_key = read_LCD_buttons();
      soak();
  }
  
  if (mode == 2)
  {
    reflowDisplay();
    lcd_key = read_LCD_buttons();
    reflow();
  }
  
  if (mode == 3)
  {
    reflowTempDisplay();
    lcd_key = read_LCD_buttons();
    reflowTemp();
  }
  
  if (mode == 4)
  {
    coolDisplay();
    lcd_key = read_LCD_buttons();
    cool();
  }
  if (mode == 5)
  {
    
   lcd.setCursor(0,0);
   lcd.print("Begin? No keys..");
   lcd.setCursor(0,1);
   lcd.print(" PUSH TO START! ");
   lcd_key = read_LCD_buttons();
   switch (lcd_key)
    {
      case btnSELECT:
      {
        mode = 6;
        SysStartTime = millis();
        startTemp = TemperatureReading();
        delay(500);
        lcd.clear();
        break;
       }
      case btnNONE:
      {
      break;
      }
   }
  }
  if (mode == 6)
  {
   HeaterOutput();
   SafetyCheck();
   user_output();
  }
  
 }
