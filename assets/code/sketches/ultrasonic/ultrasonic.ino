#include <LiquidCrystal.h>

const int trig = 0;
const int echo = 1;

LiquidCrystal lcd(2, 4, 5, 6, A2, A1);

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  lcd.begin(16, 2);
}

void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  
  unsigned long t = pulseIn(echo, HIGH);

  if (t) {
    lcd.home();
    lcd.print(340 * t/1e6 / 2);
  }

  delay(250);
}
