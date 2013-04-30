#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

int currentTemp = 0;
int setTemp = 25;
int lcd_key = 0;
int adc_key_in = 0;
int ptime = 60;
int stime = 60;
int rtime = 45;
int rtemp = 218;
int ctime = 60;

int PTIME = 0;
int STIME = 0;
int RTIME = 0;
int RTEMP = 0;
int CTIME = 0;

int mode = 0; //preheat mode

#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5



void setup()
{
  lcd.begin(16,2);
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
 

}
