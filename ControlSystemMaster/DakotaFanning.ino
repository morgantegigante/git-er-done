// Fanning (as in Dakota) animation
// Creates a clockwise rotation of a fan like object over 4 - 5x8 pixel charcters
// At any given time, only 3 quadrants have "fan arms" in them to create the appearance of rotation
// Quadrants are named as they would be mathematically

// fan arm for quadrant 1
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
// fan arm for quadrant 2 
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

// fan arm for quadrant 4
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

int fanning(){                //initialize function
  lcd.createChar(1,fan_Q1);   // create characters for lcd
  lcd.createChar(2,fan_Q2);
  lcd.createChar(3,fan_Q3);
  lcd.createChar(4,fan_Q4);
 
  lcd.setCursor(4,0);         // set cursor to center text on top row 
  lcd.print("Open lid");      // display message "open lid"
  lcd.setCursor(2,1);         // set cursor to center text on bottom row
  lcd.print("Turn on fan!");  // display message "turn on fan!"
  
  lcd.setCursor(0,0);         // put animation in position 1, with quadrant 2 off 
  lcd.print(" ");             // sets up animation on left side of lcd
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
  
  lcd.setCursor(14,0);         // put animation in position 1, with quadrant 2 off 
  lcd.print(" ");              // sets up animation on right side of lcd
  lcd.write(byte(1));
  lcd.setCursor(0,14);
  lcd.write(byte(3));
  lcd.write(byte(4));
  delay(200);
  
  lcd.setCursor(0,0);          // put animation in position 2, with quadrant 1 off 
  lcd.write(byte(2));          // sets up animation on left side of lcd
  lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
  lcd.setCursor(14,0);         // sets up animation on right side of lcd
  lcd.write(byte(2));
  lcd.print(" ");
  lcd.setCursor(14,1);
  lcd.write(byte(3));
  lcd.write(byte(4));
  delay(200);

  lcd.setCursor(0,0);          // put animation in position 3, with quadrant 4 off 
  lcd.write(byte(2));          // sets up animation on left side of lcd
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.write(byte(3));
  lcd.print(" ");
  lcd.setCursor(14,0);         // sets up animation on right side of lcd
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(14,1);
  lcd.write(byte(3));
  lcd.print(" ");
  delay(200);

  lcd.setCursor(0,0);          // put animation in position 4, with quadrant 3 off
  lcd.write(byte(2));          // sets up animation on left side of lcd
  lcd.write(byte(1));
  lcd.setCursor(0,1);
  lcd.print(" ");
  lcd.write(byte(4));
  lcd.setCursor(14,0);         // sets up animation on right side of lcd
  lcd.write(byte(2));
  lcd.write(byte(1));
  lcd.setCursor(14,1);
  lcd.print(" ");
  lcd.write(byte(4));
  delay(200);
  };
