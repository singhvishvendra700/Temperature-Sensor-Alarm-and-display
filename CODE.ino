#include<LiquidCrystal.h>

LiquidCrystal lcd(12,11,2,3,4,5);

void setup()
{
 lcd.begin(16,2);
 lcd.clear();
 pinMode(8, OUTPUT);
}

void loop()
{
  float v=analogRead(A0) * 5.0 /1023.0;
  float temp=v * 100 - 50;
  
  lcd.clear();
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" ");
  lcd.println("C");
  delay(1000);
  
  if ( temp > 50 )
  {
    tone(8, 500, 1000);
  }
}
