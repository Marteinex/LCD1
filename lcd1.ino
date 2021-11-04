#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup() {
  lcd.begin(16,2);
  lcd.clear();
  lcd.print("Szia, Lajos!");          //leírtat írja ki
  lcd.setCursor(0,1);                 //melyik sorban/oszlopban kezdődjön
  lcd.print("Karakterkeszlet:");
  delay(1000);
  lcd.clear();

}
int sz=0;
void loop() {
  lcd.setCursor(0,0);
  lcd.print("   ");
  lcd.setCursor(0,0);
  lcd.print(sz);
  lcd.setCursor(0,1);
  lcd.write(sz);                      //pl. ascii karaktert ír ki a száma szerint
  sz++;
  if (sz==256) sz=0;
  delay(500);

}
