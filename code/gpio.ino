LiquidCrystal lcd(12, 11, 5, 4,3, 2);

void setup() {
  pinMode(0, INPUT);
  pinMode(9, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  int state = digitalRead(0);

  lcd.setCursor(0, 0);

  if (state == HIGH) {
    lcd.print("ON");
    digitalWrite(9, HIGH);
  } else {
    lcd.print("OFF");
    digitalWrite(9, LOW);
  }
}
