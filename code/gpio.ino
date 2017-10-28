LiquidCrystal lcd(12, 11, 5, 4,3, 2);

void setup() {
  pinMode(0, INPUT);
  lcd.begin(16, 2);
}

void loop() {
  int state = digitalRead(0);

  lcd.setCursor(0, 0);

  if (state) {
    lcd.print("ON");
  } else {
    lcd.print("OFF");
  }
}
