// Fanning (as in Dakota) animation
// (Hopefully) creates a clockwise rotation of a fan like object over 4 - 5x8 pixel charcters

// quadrant 1
byte fan_Q1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01110,
  B11110,
  B10000,
};
// quadrant 2 
byte fan_Q2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00110,
  B00110,
  B00110,
  B00011,}; 
  
// quadrant 3  
byte fan_Q3[8] = {
  B00001,
  B01111,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,}; 

// quadrant 4
byte fan_Q4[8] = {
  B11000,
  B01110,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
};

int fanning(){
// create characters
  lcd.createChar(1,fan_Q1);
  lcd.createChar(2,fan_Q2);
  lcd.createChar(3,fan_Q3);
  lcd.createChar(4,fan_Q4);
  
// display messge "OPEN LID"//"Turn on fan!"
  lcd.setCursor(4,0);
  lcd.print("Open lid");
  lcd.setCursor(2,1);
  lcd.print("Turn on fan!");
  
   // position 1 (Q2 off)
  lcd.setCursor(0,0);
  lcd.print(" ");
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
  
  lcd.setCursor(14,0);
  lcd.print(" ");
  lcd.write(byte(1));
  lcd.setCursor(0,14);
  lcd.write(byte(3));
  lcd.write(byte(4));
  delay(200);
  
  // position 2 (Q1 off)
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
    lcd.setCursor(14,0);
  lcd.write(byte(2));
  lcd.print(" ");
  lcd.setCursor(14,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
  delay(200);

  // position 3 (Q4 off)
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.print(" ");
  lcd.setCursor(14,0);
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(14,1);
  lcd.write(byte(3));
  lcd.print(" ");
  delay(200);

  
  // position 4 (Q3 off)
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.print(" ");
  lcd.write(byte(4));
  lcd.setCursor(14,0);
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(14,1);
  lcd.print(" ");
  lcd.write(byte(4));
  delay(200);
  
  fan_count=fan_count+1;
  };
