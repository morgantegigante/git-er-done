// Flame animation to be used when safety check fails

// create small flame
byte flame1[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00100,
  B01100,
};

// create medium flame
byte flame2[8] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00010,
  B00110,
  B01110,
  B01100,
};

// create large flame
byte flame3[8] = {
  B00000,
  B00000,
  B00010,
  B00011,
  B00111,
  B01111,
  B11110,
  B01100,
};

// create GIANT flame
byte flame4[8] = {
  B00010,
  B00010,
  B00111,
  B01111,
  B01111,
  B11111,
  B11111,
  B01110,
};


int burning(){                  // initialize function
  lcd.createChar(0, flame1);    // create characters for lcd
  lcd.createChar(1, flame2);
  lcd.createChar(2, flame3);
  lcd.createChar(3, flame4);
  lcd.begin(16, 2);                // initialize lcd
  lcd.setCursor(0,0);              // set initial cursor position
  lcd.print("WARNING: TOO HOT");      // display warning message on top row
  
  for (int position=0; position<15;position++)  // display small flame all the way across bottom row
{
  lcd.setCursor(position,1);
  lcd.write(byte(0));
}
  delay(500);                                  // delay for 500 ms
  lcd.clear();                                 // clear lcd   
  for (int position=0; position<15;position++) // display medium flame all the way across bottom row
{
  lcd.setCursor(position,1);
  lcd.write(byte(1));
}
  delay(500);                                  // delay for 500 ms
  lcd.clear();                                 // clear lcd 
  
    for (int position=0; position<15;position++) // display large flame all the way across bottom row
{
  lcd.setCursor(position,1);
  lcd.write(byte(2));
}
  delay(500);                                  // delay for 500 ms
  lcd.clear();                                 // clear lcd
    for (int position=0; position<15;position++) // display GIANT flame all the way across bottom row
{
  lcd.setCursor(position,1);
  lcd.write(byte(3));
}
  delay(700);                                    // delay for 700 ms (for dramatic effect)
  lcd.clear();                                   // clear lcd
}
