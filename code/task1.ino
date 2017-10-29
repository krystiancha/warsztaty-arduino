void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  int foto = digitalRead(2);
  int przycisk = digitalRead(4);

  digitalWrite(3, przycisk && !foto);
  digitalWrite(5, przycisk && foto);
}
