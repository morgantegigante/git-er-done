void user_output(){
// display desired set temp
  lcd.setCursor(1,0);
  lcd.print("set:"+setTemp);

// display current temperature
  lcd.setCursor(0,0);
  lcd.print("cur:"+currentTemp);
  
// display stage of reflow
  lcd.setCursor(0,10);
  if (stage==1||stage==3){
    lcd.print("ramp")
  }
  else (stage==2){
    lcd.print("soak")
  else (stage==4){
    lcd.print("reflow") 
  }
  else (stage==5) {
    lcd.print("cool")
  }
  
 
// display time left of entire reflow
  EndTime=(PTIME+STIME+RTIME+CTIME)*60000+SysStartTime;  // Calculate end time of reflow process in milliseconds
  TimeNow=millis();                                          // Find time now
  TimeRemaining=TotalTime-TimeNow;                           // Calculate time remaining in reflow process
  lcd.setCursor(1, 13);                                  // move cursor to initial position
  lcd.print(TimeRemaining / 60000);
  lcd.print(":");
  //print seconds
  if (TimeRemaining % (60000) >= 10000) //60000 milliseconds in a minute
  {
    lcd.print((time % 60000) / 1000);
  }
  else
  {
    lcd.print("0"); //print an extra 0 if number is less than 10 seconds
    lcd.print((time % 60000) / 1000);
  }
}
  
}
