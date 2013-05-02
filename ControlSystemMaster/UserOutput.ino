void user_output(){
  
  lcd.setCursor(0,1);
  lcd.print("set:");              // display desired set temp on bottom left of lcd
  lcd.print(Setpoint); 

  lcd.setCursor(0,0);
  lcd.print("cur:");              // display current temperature on top left of lcd
  if (currentTemp<=99){
  lcd.print(" ");}
  lcd.print(currentTemp);
  
  lcd.setCursor(10,0);            // display stage of reflow on top right of lcd
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
      lcd.print("cool  ");
  };

// display time left of entire reflow
  EndTime=(PTIME+STIME+RTIME+CTIME)*1000+SysStartTime;  // Calculate end time of reflow process in milliseconds by using user inputs and system start time
  if (TimeRemaining > 14)                               // run time until TimeRemaining<14 ms (arbitralily chosen so that TimeRemaining is never < 0 and greater than initial time remaining)
  {
      TimeNow=millis();                                 // Find time now
      TimeRemaining=EndTime-TimeNow;                    // Calculate time remaining in reflow process
      lcd.setCursor(11, 1);                             // display time remaining in bottom right of lcd
      lcd.print(TimeRemaining / 60000);                 // print minutes
      lcd.print(":");
                                                        //print seconds
      if (TimeRemaining % (60000) >= 10000)             //60000 milliseconds in a minute
      {
        lcd.print((TimeRemaining % 60000) / 1000);
      }
      else
      {
        lcd.print("0");                                 //print an extra 0 if number is less than 10 seconds
        lcd.print((TimeRemaining % 60000) / 1000);
      }
  }

}
