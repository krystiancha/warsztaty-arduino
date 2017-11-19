void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  bool isOn = digitalRead(2) && analogRead(A0) > 700;

  digitalWrite(9, isOn);
  digitalWrite(10, isOn);
  digitalWrite(11, isOn);
}
