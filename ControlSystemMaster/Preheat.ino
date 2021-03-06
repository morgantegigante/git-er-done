void preheatDisplay()
{
 lcd.setCursor(0,0);
 lcd.print("Set Preheat Time");
 lcd.setCursor(0,1);
 lcd.print("time:");
 lcd.setCursor(8,1);
 lcd.print("sec"); 
}

void updateLCDp()
{ //prints extra space if number is two digits
  lcd.setCursor(5,1);
  if (ptime < 100)
  {
    lcd.print(" ");
  }
  lcd.print(ptime);  
}

int preheat()
{  //establishes user interface - buttons increase and decrease user set time
    
  switch (lcd_key)               
{
  case btnRIGHT:
    {
   ptime=ptime+10;  // right button increases by increments of 10
   if (ptime > 120)
   {
     ptime = 120;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDp();
    break;
    }
    
  case btnLEFT:
    {
   ptime=ptime-10; // left button decreases by increments of 10
   if (ptime < 60)
   {
     ptime = 60;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDp();
    break;
    }
  case btnUP: 
    {
    ptime=ptime+1; // up button increases by increments of 1
   if (ptime > 120)
   {
     ptime = 120;
    lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDp();
    break;
    }
  case btnDOWN:
    {
    ptime=ptime-1; // down button decreases by increments of 1
  if (ptime < 60)
   {
     ptime = 60;
    lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDp();
    break;
    }
  case btnSELECT: //user if finished
    {
    PTIME= ptime;
    mode = 1;
    break;
    }
case btnNONE:
  {
    updateLCDp();
    break;
  }
}
return PTIME; //returns user preheat time
}
