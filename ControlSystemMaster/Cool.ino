void coolDisplay()
{
 lcd.setCursor(0,0);
 lcd.print("Set Cool Time   ");
 lcd.setCursor(0,1);
 lcd.print("time:");
 lcd.setCursor(8,1);
 lcd.print("sec"); 
}

void updateLCDc()
{
  lcd.setCursor(5,1);
  if (ctime < 100)
  {
    lcd.print(" ");
  }
  lcd.print(ctime);  
}

int cool()
{  
  switch (lcd_key)               
{
  case btnRIGHT:
    {
   ctime=ctime+10;  // right button increases by increments of 10
   if (ctime > 180)
   {
     ctime = 180;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDc();
    break;
    }
    
  case btnLEFT:
    {
   ctime=ctime-10; // left button decreases by increments of 10
   if (ctime < 60)
   {
     ctime = 60;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDc();
    break;
    }
  case btnUP: 
    {
    ctime=ctime+1; // up button increases by increments of 1
   if (ctime > 180)
   {
     ctime = 180;
    lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDc();
    break;
    }
  case btnDOWN:
    {
    ctime=ctime-1; // down button decreases by increments of 10
  if (ctime < 60)
   {
     ctime = 60;
    lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDc();
    break;
    }
  case btnSELECT:
    {
    CTIME= ctime;
    mode = 5;
    break;
    }
case btnNONE:
  {
    updateLCDc();
    break;
  }
}
return CTIME;
}
