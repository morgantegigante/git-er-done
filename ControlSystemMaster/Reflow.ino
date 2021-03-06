void reflowDisplay()
{
 lcd.setCursor(0,0);
 lcd.print("Set Reflow Time ");
 lcd.setCursor(0,1);
 lcd.print("time:");
 lcd.setCursor(8,1);
 lcd.print("sec"); 
}

void updateLCDr()
{ //prints extra space if number is two digits
  lcd.setCursor(5,1);
  if (rtime < 100)
  {
    lcd.print(" ");
  }
  lcd.print(rtime);  
}

int reflow()
{  //establishes user interface - buttons increase and decrease user set time
  switch (lcd_key)               
{
  case btnRIGHT:
    {
   rtime=rtime+10;  // right button increases by increments of 10
   if (rtime > 75)
   {
     rtime = 75;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDr();
    break;
    }
    
  case btnLEFT:
    {
   rtime=rtime-10; // left button decreases by increments of 10
   if (rtime < 45)
   {
     rtime = 45;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDr();
    break;
    }
  case btnUP: 
    {
    rtime=rtime+1; // up button increases by increments of 1
   if (rtime > 75)
   {
     ptime = 75;
    lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDr();
    break;
    }
  case btnDOWN:
    {
    rtime=rtime-45; // down button decreases by increments of 1
  if (rtime < 45)
   {
     rtime = 1;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDr();
    break;
    }
  case btnSELECT: //user is finished
    {
    RTIME= rtime;
    mode = 3;
    break;
    }
case btnNONE:
  {
    updateLCDr();
    break;
  }
}
return RTIME; //returns user set time
}
