// SafetyFunction

int SafetyCheck(){
  if (temp>300)
  {
    lcd.clear();
    delay(800)
    lcd.setCursor(0,0);
    lcd.print("WARNING: TOO HOT");
    lcd.setCursor(1,0);
    lcd.print("UNPLUG ASAP");
    delay(1000);
  }
}



