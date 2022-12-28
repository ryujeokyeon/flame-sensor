#include <LiquidCrystal.h>

LiquidCrystal lcd (13,12,11,10,9,8);
int flame = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(flame, INPUT_PULLUP);
  lcd.begin(20,4);

  lcd.setCursor(0,0);
  lcd.print("Flame: ");


  lcd.setCursor(4,4);
  lcd.print("by Annisa");

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(flame) == HIGH)
    {
      lcd.setCursor(8,0);
      lcd.print("Detected ");
    }
  if(digitalRead(flame) == HIGH)
    {
      lcd.setCursor(8,0);
      lcd.print("Not Detected ");
    }
}
