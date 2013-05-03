//this is our little greeting for the lovely user

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
    
