bool on = false;
bool pressed = false;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  bool pressedNow = !digitalRead(8);
  if (pressedNow && !pressed) {
    on = !on;
  }
  pressed = pressedNow;
  
  if (!on) {
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    return;
  }
  long t = digitalRead(2) ? 250 : 125;

  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  delay(t);

  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(t);
}
