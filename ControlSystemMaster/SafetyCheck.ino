// SafetyFunction

void SafetyCheck()
{
  if (currentTemp>200)
  {
    digitalWrite(HeaterPin, HIGH);
    lcd.clear();
    delay(800);
    lcd.setCursor(1,0);
    burning() ;  
  }
}


