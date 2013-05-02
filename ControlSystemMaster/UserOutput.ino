void user_output(){

  // display desired set temp
  lcd.setCursor(0,1);
  lcd.print("set:");
  lcd.print(Setpoint);

// display current temperature
  lcd.setCursor(0,0);
  lcd.print("cur:");
  if (currentTemp<=99){
  lcd.print(" ");}
  lcd.print(currentTemp);
  
// display stage of reflow
  lcd.setCursor(10,0);
  if (stage==1){
    lcd.print("ramp  ");
  }
  else if (stage==2){
    lcd.print("soak  ");
  }
  else if (stage==3){
    lcd.print("reflow");
  }
  else if (stage==4) {
      lcd.print("cool");
  };

  
 
// display time left of entire reflow
  EndTime=(PTIME+STIME+RTIME+CTIME)*1000+SysStartTime;  // Calculate end time of reflow process in milliseconds

  if (TimeRemaining > 100)
  {
      TimeNow=millis();                                          // Find time now
      TimeRemaining=EndTime-TimeNow;                           // Calculate time remaining in reflow process
      lcd.setCursor(11, 1);                                  // move cursor to initial position
      lcd.print(TimeRemaining / 60000);
      lcd.print(":");
      //print seconds
      if (TimeRemaining % (60000) >= 10000) //60000 milliseconds in a minute
      {
        lcd.print((TimeRemaining % 60000) / 1000);
      }
      else
      {
        lcd.print("0"); //print an extra 0 if number is less than 10 seconds
        lcd.print((TimeRemaining % 60000) / 1000);
      }
  }

}
