void soakDisplay()
{
 lcd.setCursor(0,0);
 lcd.print("Set Soak Time   ");
 lcd.setCursor(0,1);
 lcd.print("time:");
 lcd.setCursor(8,1);
 lcd.print("sec"); 
}

void updateLCDs()
{
  lcd.setCursor(5,1);
  if (stime < 100)
  {
    lcd.print(" ");
  }
  lcd.print(stime);  
}

int soak()
{  
  switch (lcd_key)               
{
  case btnRIGHT:
    {
   stime=stime+10;  // right button increases by increments of 10
   if (stime > 120)
   {
     stime = 120;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDs();
    break;
    }
    
  case btnLEFT:
    {
   stime=stime-10; // left button decreases by increments of 10
   if (stime < 60)
   {
     stime = 60;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDs();
    break;
    }
  case btnUP: 
    {
    stime=stime+1; // up button increases by increments of 1
   if (stime > 120)
   {
     stime = 120;
    lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDs();
    break;
    }
  case btnDOWN:
    {
    stime=stime-1; // down button decreases by increments of 10
  if (stime < 60)
   {
     stime = 60;
    lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDs();
    break;
    }
  case btnSELECT:
    {
    STIME= stime;
    mode = 2;
    break;
    }
case btnNONE:
  {
    updateLCDs();
    break;
  }
}
return STIME;
}
