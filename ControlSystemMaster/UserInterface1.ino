// UserInput Function


// define some values used by the panel and buttons


// read the buttons
int read_LCD_buttons()
{


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

 adc_key_in = analogRead(0); 
 delay(100);
 if (adc_key_in > VNONE) return btnNONE; 
 if (adc_key_in < V1)   return btnRIGHT;
 if (adc_key_in < V2)  return btnUP;
 if (adc_key_in < V3)  return btnDOWN;
 if (adc_key_in < V4)  return btnLEFT;
 if (adc_key_in < V5)  return btnSELECT;
 return btnNONE;  
}

// Initial variables for target temperature and current temperature
//int setTemp=25;
// int currentTemp=25;


int LCDFunctions()
{
  int UserSetTemp = 0;
lcd.setCursor(0,0);
  lcd.print("SetTemp:");
  lcd.setCursor(0,1);
  lcd.print("Current:");
  // display values (3 character space worth)
  lcd.setCursor(8,0);
  lcd.print(setTemp);
  lcd.setCursor(8,1);
  lcd.print(currentTemp);
  // display degree symbols
  lcd.setCursor(11, 0);
  lcd.print((char)223);
  lcd.setCursor(11, 1);
  lcd.print((char)223);
  // display celcius
  lcd.setCursor(12, 0);
  lcd.print("C");
  lcd.setCursor(12, 1);
  lcd.print("C");
 if (setTemp>300){
    setTemp=300;
    lcd.setCursor(13,0);
    lcd.print("MAX");
    }
      if (setTemp<25){
    setTemp=25;
    lcd.setCursor(13,0);
    lcd.print("MIN");
    }

  lcd_key = read_LCD_buttons(); 



  
switch (lcd_key)               
{
  case btnRIGHT:
    {
   setTemp=setTemp+10;  // right button increases by increments of 10
    break;
    lcd.clear();
    }
    
  case btnLEFT:
    {
   setTemp=setTemp-10; // left button decreases by increments of 10
    lcd.clear();
    break;
    }
  case btnUP: 
    {
    setTemp=setTemp+1; // up button increases by increments of 1
    lcd.clear();
    break;
    }
  case btnDOWN:
    {
    setTemp=setTemp-1; // down button decreases by increments of 10
    lcd.clear();
    break;
    }
  case btnSELECT:
    {
    UserSetTemp = setTemp;
    break;
    }
case btnNONE:
  {
    break;
  }

}
return UserSetTemp;
}
