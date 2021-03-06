#include <LiquidCrystal.h>
#include <PID_AutoTune_v0.h>
#include <PID_v1.h>
#include <EEPROM.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
double Setpoint, Input, Output;
PID myPID(&Input, &Output, &Setpoint,5,1,5, DIRECT);

// define initial necessary variables
int TempReadPin = 5;
int HeaterPin = 2; 
unsigned long currentTemp = 0;
int lcd_key     = 0;
int adc_key_in  = 0;
int WindowSize = 500;
unsigned long windowStartTime;
int stage = 1;
unsigned long startTemp = 25;
  
// these variables are for the user interface function
// don't worry about these
unsigned long ptime = 60;
unsigned long stime = 60;
unsigned long rtime = 45;
unsigned long rtemp = 218;
unsigned long ctime = 60;

unsigned long EndTime;
unsigned long TimeNow = 0;
unsigned long TimeRemaining = 15;

// THESE ARE THE OUTPUTS!!! USE THEM! :D
unsigned long PTIME = 0; //PREHEAT TIME
unsigned long STIME = 0; //SOAK TIME
unsigned long RTIME = 0; //REFLOW TIME
unsigned long RTEMP = 0; //REFLOW TEMP
unsigned long CTIME = 0; //COOL TIME

int mode = 0; //MODE VARIABLE DEFINES WHICH USER INPUT BEING SPECIFIED

// these variables are for the statistical function
unsigned long totalTemp = 0;
int maxTemp = 0;
unsigned long count = 0;
unsigned long sq_error_sum = 0;
int rms_error = 0;
int m = 0;
unsigned long count_p = 0;
unsigned long count_s = 0;
unsigned long count_r = 0;
unsigned long count_c = 0;
unsigned long temp_p = 0;
unsigned long temp_s = 0;
unsigned long temp_r = 0;
unsigned long temp_c = 0;
int avg = 0;
int avg_p = 0;
int avg_s = 0;
int avg_r = 0;
int avg_c = 0;
int fan_count=0;

unsigned long SysStartTime;

//defines buttons for user interface
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
 //initiates greeting to the user!
 greeting();
 Serial.begin(9600);
  Serial.print("Time");
  Serial.print("\t");
  Serial.print("Current Temp");
  Serial.print("\t");
  Serial.print("Error Measure");
  Serial.println();
 }
 
 void loop()
 {
  // modes were used to move through the code 
  //they are useful to getting the select button to move into different if statements

  if (mode == 0)
  {   
      //Displays preheat user input and allows user to select desired preheat/ramp time
      preheatDisplay();
      lcd_key = read_LCD_buttons();
      preheat();
  }
  
  if (mode == 1)
  {
      //Displays soak user input and allows user to select desired soak time
      soakDisplay(); 
      lcd_key = read_LCD_buttons();
      soak();
  }
  
  if (mode == 2)
  {
    //Displays reflow user input and allows user to select desired reflow time
    reflowDisplay();
    lcd_key = read_LCD_buttons();
    reflow();
  }
  
  if (mode == 3)
  {
    //Displays reflow user input and allows user to select desired reflow temperature
    reflowTempDisplay();
    lcd_key = read_LCD_buttons();
    reflowTemp();
  }
  
  if (mode == 4)
  {
    //Displays cool user input and allows user to select desred cool time
    coolDisplay();
    lcd_key = read_LCD_buttons();
    cool();
  }
  if (mode == 5)
  {
   //Display a ready screen before engaging reflow oven
   lcd.setCursor(0,0);
   lcd.print("Begin? No keys..");
   lcd.setCursor(0,1);
   lcd.print(" PUSH TO START! ");
   lcd_key = read_LCD_buttons();
   switch (lcd_key)
    {
      case btnSELECT:
      { //if select button is pressed - reflow begins
        mode = 6;
        lcd.clear();
        //Heater delay to have heater warm up before reading time/temp
        lcd.print("Heating");
        digitalWrite(HeaterPin,HIGH);
        delay(30000);
        SysStartTime = millis();
        startTemp = TemperatureReading();
        // startTemp = 25;     //used during debugging
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
   user_output();
   Setpoint = setSetpoints();
   HeaterOutput();
   SafetyCheck();
   monitor_printout();
   statistics();
   count=count+1;
<<<<<<< HEAD
   if (TimeRemaining<=10){
     TimeRemaining=0;
     Setpoint=0;
     lcd.clear();
     mode=7;
   };
 }
=======

   
  if (TimeRemaining <=10)
  {
    TimeRemaining = 0;
    Setpoint = 25;
    lcd.clear();
    mode = 7;
  }
  }
>>>>>>> ea18aa629d34617992a2f37df8f9a0c228a5c57c
  
  if (mode == 7)
  {
  fanning();
  fanning();
    fanning();
      fanning();
        fanning();
          fanning();
            fanning();
          mode=8;
  }
  
  if (mode == 8)
  {
// Calculates statistics
  calc();
  mode = 9;
  }
  
  if (mode == 9)
  {
   monitor_printout();
   if (m == 0)
   { //displays Reflow statistics intro screen
     screen();
     lcd_key = read_LCD_buttons();
     switch (lcd_key)
     {
       case btnSELECT:
       {
         m = 1;
         break;
       }
       case btnNONE:
       {
         break;
       }
     }
   }
   if (m == 1)
   { //displays average and max temperatures overall
     maxavg();
     lcd_key = read_LCD_buttons();
     switch (lcd_key)
     {
       case btnSELECT:
       {
         m = 2;
         break;
       }
       case btnNONE:
       {
         break;
       }
     }
   }

   if (m == 2)
   { //displays average temperatures in ramp and soak stages
     rampsoak();
     lcd_key = read_LCD_buttons();
     switch (lcd_key)
     {
       case btnSELECT:
       {
         m = 3;
         break;
       }
       case btnNONE:
       {
         break;
       }
     }
     
   }

   if (m == 3)
   { //displays average temperatures in reflow and cool stages
     reflowcool();
     lcd_key = read_LCD_buttons();
     switch (lcd_key)
     {
       case btnSELECT:
       {
         m = 4;
         break;
       }
       case btnNONE:
       {
         break;
       }
     }
   }

   if (m == 4)
   {//displays rms error value
     error();
     lcd_key = read_LCD_buttons();
     switch (lcd_key)
     {
       case btnSELECT:
       {
         m = 5;
         break;
       }
       case btnNONE:
       {
         break;
       }
     }
   }
   
   if (m == 5)
   { //"thank you for not smoking"
     done();
   } 
   
  }
 }
