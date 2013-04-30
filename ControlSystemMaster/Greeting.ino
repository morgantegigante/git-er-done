byte flame4[8] = {
  B00010,
  B00010,
  B00111,
  B01111,
  B01111,
  B11111,
  B11111,
  B01110,
};

void greeting()
{
  lcd.createChar(14, flame4);  

  lcd.setCursor(1,0);
  lcd.print("Git-er-done's");
  lcd.setCursor(3,1);
  lcd.print("Reflow Oven");
  lcd.setCursor(2,1);
  lcd.write(byte(14));
  delay(800);
  lcd.clear();
  delay(300);
  lcd.setCursor(1,0);
  lcd.print("Git-er-done's");
  lcd.setCursor(3,1);
  lcd.print("Reflow Oven");
  lcd.setCursor(2,1);
  lcd.write(byte(14));
  delay(800);
  lcd.clear();
  delay(300);
  lcd.setCursor(1,0);
  lcd.print("Git-er-done's");
  lcd.setCursor(3,1);
  lcd.print("Reflow Oven");
  lcd.setCursor(2,1);
  lcd.write(byte(14));
  delay(800);
  lcd.clear();
}
    
