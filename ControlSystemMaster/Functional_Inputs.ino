int read_LCD_buttons()
{
  adc_key_in = analogRead(0);
  delay(100); 
  if (adc_key_in < 50) return btnRIGHT;
  else if (adc_key_in < 195) return btnUP;
  else if (adc_key_in < 380) return btnDOWN;
  else if (adc_key_in < 555) return btnLEFT;
  else if (adc_key_in < 790) return btnSELECT;
  else return btnNONE; 
}

void screen()
{
  lcd.setCursor(0,0);
  lcd.print("     Reflow     ");
  lcd.setCursor(0,1);
  lcd.print("   Statistics   ");
}

void maxavg()
{
    lcd.setCursor(0,0);
    lcd.print("maxtemp:");
    lcd.setCursor(8,0);
    if (maxTemp < 100)
    {
      lcd.print(" ");
    }
    if (maxTemp < 10)
    {
      lcd.print(" ");
    }
    lcd.print(maxTemp);
    lcd.setCursor(11,0);
    lcd.print((char)223);
    lcd.setCursor(12,0);
    lcd.print("C   ");
    
    lcd.setCursor(0,1);
    lcd.print("avgtemp:");
    lcd.setCursor(8,1);
    if (avg < 100)
    {
      lcd.print(" ");
    }
    if (avg < 10)
    {
      lcd.print(" ");
    }
    lcd.print(avg);
    lcd.setCursor(11,1);
    lcd.print((char)223);
    lcd.setCursor(12,1);
    lcd.print("C   ");
  
  
  
}

void rampsoak()
{
              lcd.setCursor(0,0);
    lcd.print("ramp:");
    lcd.setCursor(5,0);
    if (avg_p < 100)
    {
      lcd.print(" ");
    }
    if (avg_p < 10)
    {
      lcd.print(" ");
    }
    lcd.print(avg_p);
    lcd.setCursor(8,0);
    lcd.print((char)223);
    lcd.setCursor(9,0);
    lcd.print("C      ");
    
    lcd.setCursor(0,1);
    lcd.print("soak:");
    lcd.setCursor(5,1);
    if (avg_s < 100)
    {
      lcd.print(" ");
    }
    if (avg_s < 10)
    {
      lcd.print(" ");
    }
    lcd.print(avg_s);
    lcd.setCursor(8,1);
    lcd.print((char)223);
    lcd.setCursor(9,1);
    lcd.print("C      ");
}

void reflowcool()
{
    lcd.setCursor(0,0);
    lcd.print("reflow:");
    lcd.setCursor(7,0);
    if (avg_r < 100)
    {
      lcd.print(" ");
    }
    if (avg_r < 10)
    {
      lcd.print(" ");
    }
    lcd.print(avg_r);
    lcd.setCursor(10,0);
    lcd.print((char)223);
    lcd.setCursor(11,0);
    lcd.print("C    ");
    
    lcd.setCursor(0,1);
    lcd.print("cool  :");
    lcd.setCursor(7,1);
    if (avg_c < 100)
    {
      lcd.print(" ");
    }
    if (avg_c < 10)
    {
      lcd.print(" ");
    }
    lcd.print(avg_c);
    lcd.setCursor(10,1);
    lcd.print((char)223);
    lcd.setCursor(11,1);
    lcd.print("C    ");
  
}

void error()
{
    lcd.setCursor(0,0);
    lcd.print("RMS error :");
    lcd.setCursor(0,1);
    lcd.print("Overall         ");
    lcd.setCursor(11,0);
    lcd.print(rms_error);
    
}

void done()
{
  lcd.setCursor(0,0);
  lcd.print(" Thank you for  ");
  lcd.setCursor(0,1);
  lcd.print("  not smoking.  ");
}


