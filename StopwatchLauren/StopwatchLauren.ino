#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


// define some values used by the panel and buttons
int lcd_key     = 0;
int adc_key_in  = 0;
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5

#define V1     50
#define V2     150
#define V3     300
#define V4     450
#define V5     700
#define VNONE  1100

// read the buttons
int read_LCD_buttons()
{
 adc_key_in = analogRead(0);      // read the value from the sensor
 // my buttons when read are centered at these valies: 0, 144, 329, 504, 741
 // we add approx 50 to those values and check to see if we are close
 if (adc_key_in > VNONE) return btnNONE; // We make this the 1st option for speed reasons s
 if (adc_key_in < V1)   return btnRIGHT;
 if (adc_key_in < V2)  return btnUP;
 if (adc_key_in < V3)  return btnDOWN;
 if (adc_key_in < V4)  return btnLEFT;
 if (adc_key_in < V5)  return btnSELECT;
 return btnNONE;  // when all others fail, return this...
}

int minutes=0;
int seconds=0;


void setup()
{
  lcd.begin(16, 2);

}


void loop()

{
   lcd.setCursor(0,0);
  lcd.print("minutes:");
  lcd.setCursor(0,1);
  lcd.print("seconds:"); 
lcd.setCursor(9,0);
lcd.print(minutes);

lcd.setCursor(9,1);
lcd.print(seconds,DEC);
  lcd_key = read_LCD_buttons();  // read the buttons
switch (lcd_key)               // depending on which button was pushed, we perform an acti
{
  case btnRIGHT:
    {
    minutes=minutes+1;
    delay(200);
    lcd.clear();
    break;
    }
  case btnLEFT:
    {
    //Instructions for what to do on LEFT button press
    minutes=minutes-1;
    delay(200);
        if (minutes < 0)
        {
          minutes=0;
        }
    lcd.clear();
    break;
    }
  case btnUP: 
    {
    //Instructions for what to do on UP button press
    seconds=seconds+1;
    delay(200);
        if (seconds > 59)
        {
          seconds=00;
          minutes=minutes+1;
        }
    lcd.clear();
    break;
    }
  case btnDOWN:
    {
    //Instructions for what to do on DOWN button press
    seconds=seconds-1;
    delay(200);
    if (seconds < 0)
      {
        seconds=59;
        minutes=minutes-1;
      }
    lcd.clear();
    break;
    }
  case btnSELECT:
    { 
     int minStart=minutes;
     int secStart=seconds;
     int timeTotal=(60*minStart+secStart);
     delay(200); 
     while (timeTotal > 0)
     {
       lcd.setCursor(0,0);
       lcd.print("minutes:");
       lcd.setCursor(0,1);
       lcd.print("seconds:"); 
       lcd.setCursor(9,0);
       lcd.setCursor(9,0);
       lcd.print(minutes); 
       lcd.setCursor(9,1);
       lcd.print(seconds); 
       delay(1000);
       lcd.clear();
       seconds=seconds-1;
       if (seconds < 0)
          {
              seconds=59;
              minutes=minutes-1;
           }
       if ((minutes ==0) && (seconds == 0)) 
          {
            lcd.setCursor(0,0);
            lcd.print("minutes:");
            lcd.setCursor(0,1);
            lcd.print("seconds:"); 
            lcd.setCursor(9,0);
            lcd.setCursor(9,0);
            lcd.print(minutes); 
            lcd.setCursor(9,1);
            lcd.print(seconds); 
            delay(800);
            lcd.clear();
            delay(800);
            lcd.setCursor(0,0);
            lcd.print("minutes:");
            lcd.setCursor(0,1);
            lcd.print("seconds:"); 
            lcd.setCursor(9,0);
            lcd.setCursor(9,0);
            lcd.print(minutes); 
            lcd.setCursor(9,1);
            lcd.print(seconds); 
            delay(800);
            lcd.clear();
            delay(800);
            lcd.setCursor(0,0);
            lcd.print("minutes:");
            lcd.setCursor(0,1);
            lcd.print("seconds:"); 
            lcd.setCursor(9,0);
            lcd.setCursor(9,0);
            lcd.print(minutes); 
            lcd.setCursor(9,1);
            lcd.print(seconds); 
            break; 
          }
       switch (lcd_key)
       {
         case btnNONE:
         {
         }
         case btnSELECT:
         {
           pausedSpot:
            delay(200);
            lcd.setCursor(0,0);
            lcd.print("minutes:");
            lcd.setCursor(0,1);
            lcd.print("seconds:"); 
            lcd.setCursor(9,0);
            lcd.setCursor(9,0);
            lcd.print(minutes); 
            lcd.setCursor(9,1);
            lcd.print(seconds); 
            
            switch (lcd_key)
            {
              case btnNONE:
              {
              goto pausedSpot;
              break;
              }
             case btnSELECT:
            {
              delay(200);
            } 
            }
          }
       }
     }
    break;}
      
case btnNONE:
  {
    break;
  }
}
}


// default = 1023
// select = 640
// left = 410
// up = 99
// down = 257
// right = 0
