// Fanning (as in Dakota) animation
// (Hopefully) creates a clockwise rotation of a fan like object over 4 - 5x8 pixel charcters

// quadrant 1
byte fan_Q1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B11100,
  B11100,
  B00000,
};
// quadrant 2 - 3 variations depending on fan position
byte fan_Q2_Q2off[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00001,
  B00001,}; // Q2 off
  
byte fan_Q2_Q1off[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01100,
  B01100,
  B01100,}; // Q1 off
  
byte fan_Q2_else[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B01100,
  B01100,
  B01100,}; // Q3 or Q4 off

// quadrant 3
byte fan_Q3_Q3off[8] = {
  B00111,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,}; // Q3 off
  
byte fan_Q3_Q2off[8] = {
  B00001,
  B00001,
  B01111,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,}; // Q2 off  
  
    
byte fan_Q3_else[8] = {
  B00111,
  B00001,
  B01111,
  B01110,
  B00000,
  B00000,
  B00000,
  B00000,}; // oQ1 or Q4 off  
  
  // quadrant 1
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
  lcd.createChar(0,fan_Q1);
  lcd.createChar(1,fan_Q2_Q2off);
  lcd.createChar(2,fan_Q2_Q1off);
  lcd.createChar(3,fan_Q2_else);
  lcd.createChar(4,fan_Q3_Q2off);
  lcd.createChar(5,fan_Q3_Q3off);
  lcd.createChar(6,fan_Q3_else);
  lcd.createChar(7,fan_Q4);
  
  // position 1 (Q2 off)
  lcd.setCursor(0,0);
  lcd.write(byte(1));
  lcd.write(byte(0));
  lcd.setCursor(0,1);
  lcd.write(byte(4));
  lcd.write(byte(7));
  delay(100);
  
  // position 2 (Q1 off)
  lcd.setCursor(0,0);
  lcd.write(byte(2));
  lcd.print(" ");
  lcd.write(byte(0));
  lcd.setCursor(0,1);
  lcd.write(byte(6));
  lcd.write(byte(7));
  delay(100);
  
  // position 3 (Q4 off)
  lcd.setCursor(0,0);
  lcd.write(byte(3));
  lcd.write(byte(0));
  lcd.setCursor(0,1);
  lcd.write(byte(6));
  lcd.print(" ");
  delay(100);
  
  // position 4 (Q3 off)
  lcd.setCursor(0,0);
  lcd.write(byte(3));
  lcd.write(byte(0));
  lcd.setCursor(0,1);
  lcd.write(byte(5));
  lcd.write(byte(7));
  delay(100);
  };
