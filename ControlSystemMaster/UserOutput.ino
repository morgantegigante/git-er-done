void user_output(){
// display desired set temp
  lcd.setCursor(1,0);
  lcd.print("set:"+setTemp);

// display current temperature
  lcd.setCursor(0,0);
  lcd.print("cur:"+currentTemp);
  
// display stage of reflow
  lcd.setCursor(0,10);
  
  
  // display time left of entire reflow

  
}
