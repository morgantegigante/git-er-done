#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup()
{
lcd.begin(16,2);
} 
 
 int setTemp = 200;
 int currentTemp = 50; 
 
 void loop()
 {
  // displaying current and set temperature
  // Display words
  lcd.setCursor(0,0);
  lcd.print("SetTemp:");
  lcd.setCursor(0,1);
  lcd.print("Current:");
  // display values (3 character space worth)
  lcd.setCursor(9,0);
  lcd.print(setTemp);
  lcd.setCursor(9,1);
  lcd.print(currentTemp);
  // display degree symbols
  lcd.setCursor(12, 0);
  lcd.print((char)223);
  lcd.setCursor(12, 1);
  lcd.print((char)223);
  // display celcius
  lcd.setCursor(13, 0);
  lcd.print("C");
  lcd.setCursor(13, 1);
  lcd.print("C");

}
