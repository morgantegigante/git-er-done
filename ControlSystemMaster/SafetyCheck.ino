// SafetyFunction

int CurrentTempDegrees = 0;

int SafetyCheck(){
  if (CurrentTempDegrees>300 == millis()>60000*20)
  {
    digitalWrite(HeaterPin, LOW);
    lcd.clear();
    delay(800);
    lcd.setCursor(0,0);
    lcd.print("WARNING: TOO HOT");
    lcd.setCursor(1,0);
    burning() ;  
  }
}



