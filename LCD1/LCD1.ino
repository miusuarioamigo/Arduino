 #include <LiquidCrystal.h>

int RS  = 4;
int E = 5;
int D4 = 6;
int D5 = 7;
int D6 = 8;
int D7 = 9;

int VO = 3;

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);

void setup() {

  analogWrite(VO, 100);
  
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.print("12345678998765432");

  lcd.setCursor(0,1);
  lcd.print("y los quiero YA!");
  
}

void loop() {

}
