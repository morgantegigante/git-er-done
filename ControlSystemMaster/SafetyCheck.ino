// SafetyFunction

void SafetyCheck()
{
  if (currentTemp>300)    //checks for maximum temperature
  {
    digitalWrite(HeaterPin, LOW);  //if above max threshold turns off the heater
    lcd.clear();
    delay(800);
    lcd.setCursor(1,0);
    burning() ;                //displays overheat indicator
  }
}


