// SafetyFunction

void SafetyCheck()
{
  if (currentTemp>300)    //checks for maximum temperature
  {
    digitalWrite(HeaterPin, LOW);  //if above max threshold turns off the heater
    lcd.clear();
    delay(800);
    lcd.setCursor(0,0);
    lcd.print("OVEN IS ON FIRE");
    lcd.setCursor(1,0);
    burning() ;                //displays overheat indicator
  }
  unsigned long TimeOn=millis()-SysStartTime;
  if (TimeOn/60000>=20)
  { digitalWrite(HeaterPin, LOW);  //if above max threshold turns off the heater
    lcd.clear();
    lcd.print("OVEN ON TOO LONG");
    lcd.setCursor(1,0);
    burning();
  }
}


