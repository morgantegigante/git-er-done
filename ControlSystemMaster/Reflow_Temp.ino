void reflowTempDisplay()
{
 lcd.setCursor(0,0);
 lcd.print("Set Reflow Temp ");
 lcd.setCursor(0,1);
 lcd.print("temp:");
 lcd.setCursor(8,1);
 lcd.print((char)223);
 lcd.setCursor(9,1);
 lcd.print("C ");
}

void updateLCDrt()
{
  lcd.setCursor(5,1);
  if (rtemp < 100)
  {
    lcd.print(" ");
  }
  lcd.print(rtemp);  
}

int reflowTemp()
{  
  switch (lcd_key)               
{
  case btnRIGHT:
    {
   rtemp=rtemp+10;  // right button increases by increments of 10
   if (rtemp > 230)
   {
     rtemp = 230;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDrt();
    break;
    }
    
  case btnLEFT:
    {
   rtemp=rtemp-10; // left button decreases by increments of 10
   if (rtemp < 218)
   {
     rtemp = 218;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDrt();
    break;
    }
  case btnUP: 
    {
    rtemp=rtemp+1; // up button increases by increments of 1
   if (rtemp > 230)
   {
     rtemp = 230;
     lcd.setCursor(13,1);
     lcd.print("max");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDrt();
    break;
    }
  case btnDOWN:
    {
    rtemp=rtemp-1; // down button decreases by increments of 10
  if (rtemp < 218)
   {
     rtemp = 218;
     lcd.setCursor(13,1);
     lcd.print("min");
     delay(600);
     lcd.setCursor(13,1);
     lcd.print("   ");
   }
   updateLCDrt();
    break;
    }
  case btnSELECT:
    {
    RTEMP= rtemp;
    mode = 4;
    break;
    }
case btnNONE:
  {
    updateLCDrt();
    break;
  }
}
return RTEMP;
}
