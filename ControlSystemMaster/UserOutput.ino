void user_output(){

  // display desired set temp
  lcd.setCursor(0,1);
  lcd.print("set:");
  if (stage==1||stage==2){
    int setTemp=150;
    lcd.print(setTemp);
  }
  if (stage==3) {
    lcd.print(RTEMP);
  }
  if (stage==4){
    lcd.print(" ");
    lcd.print(startTemp);
  }


// display current temperature
  lcd.setCursor(0,0);
  lcd.print("cur:");
  if (currentTemp<=99){
  lcd.print(" ");}
  lcd.print(currentTemp);
  
// display stage of reflow
  lcd.setCursor(10,0);
  if (stage==1){
    lcd.print("ramp");
  }
  else if (stage==2){
    lcd.print("soak");
  }
  else if (stage==3){
    lcd.print("reflow");
  }
  else if (stage==4) {
    lcd.print("cool");
  }

  
 
// display time left of entire reflow
<<<<<<< HEAD
  unsigned long EndTime=(PTIME+STIME+RTIME+CTIME)*1000+SysStartTime;  // Calculate end time of reflow process in milliseconds
  unsigned long TimeNow=millis();                                          // Find time now
  unsigned long TimeRemaining=EndTime-TimeNow;                           // Calculate time remaining in reflow process
  lcd.setCursor(1, 12);                                  // move cursor to initial position
=======
  EndTime=(PTIME+STIME+RTIME+CTIME)*1000+SysStartTime;  // Calculate end time of reflow process in milliseconds
  TimeNow=millis();                                          // Find time now
  TimeRemaining=EndTime-TimeNow;                           // Calculate time remaining in reflow process
  lcd.setCursor(11, 1);                                  // move cursor to initial position
>>>>>>> 1f9523495bf77bd5132b21e7b7b02235d757fb43
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

