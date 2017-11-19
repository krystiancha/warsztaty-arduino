void setup() {
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  if (!digitalRead(2)) {
    digitalWrite(9, LOW);
    digitalWrite(11, LOW);
    return;
  }
  long t = digitalRead(8) ? 250 : 125;

  digitalWrite(9, HIGH);
  digitalWrite(11, LOW);
  delay(t);

  digitalWrite(9, LOW);
  digitalWrite(11, HIGH);
  delay(t);
}
