#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

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

void setup() {
  lcd.createChar(11, flame1);
  lcd.createChar(12, flame2);
  lcd.createChar(13, flame3);
  lcd.createChar(14, flame4);
  lcd.begin(16, 2);
}

int burning(){
  for (int position=0; position<15;position++)
{
  lcd.setCursor(position,0);
  lcd.write(byte(11));
}
  delay(500);
  lcd.clear();
  for (int position=0; position<15;position++)
{
  lcd.setCursor(position,0);
  lcd.write(byte(12));
}
  delay(500);
  lcd.clear();
  
    for (int position=0; position<15;position++)
{
  lcd.setCursor(position,0);
  lcd.write(byte(13));
}
  delay(500);
  lcd.clear();
    for (int position=0; position<15;position++)
{
  lcd.setCursor(position,0);
  lcd.write(byte(14));
}
  delay(700);
}


void loop() {
  burning();
}
