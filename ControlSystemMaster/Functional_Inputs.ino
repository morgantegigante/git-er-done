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




