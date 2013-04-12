#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


// define some values used by the panel and buttons
int lcd_key     = 0;
int adc_key_in  = 0;
int state = 0;
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
 adc_key_in = analogRead(0); 
 if (adc_key_in > VNONE) return btnNONE; 
 if (adc_key_in < V1)   return btnRIGHT;
 if (adc_key_in < V2)  return btnUP;
 if (adc_key_in < V3)  return btnDOWN;
 if (adc_key_in < V4)  return btnLEFT;
 if (adc_key_in < V5)  return btnSELECT;
 return btnNONE;  
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
  
  lcd_key = read_LCD_buttons(); 
  
switch (lcd_key)               
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
             while (state ==0)
             {
             for (timeTotal; timeTotal>0; timeTotal--)
               {
                topofSelectLoop:
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
                       break; 
                      }
                    lcd_key = read_LCD_buttons();
                   switch(lcd_key)
                   {
                       case btnSELECT:
                          {
                            state = 1;   //enabling stop state
                            break;
                          } 
                       case btnNONE:
                          {
                            state = 0;   //maintain running state
                            break;
                          }
                   }
                 }
             }
                 break;
             }
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
