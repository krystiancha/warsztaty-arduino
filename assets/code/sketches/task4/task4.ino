double t = 1020;

int f(double t) {
  switch ((int)(t / 255) % 6) {
    case 0:
      return 255;
    case 1:
      return 255 - (int)t % 255;
    case 2:
      return 0;
    case 3:
      return 0;
    case 4:
      return (int)t % 255;
    case 5:
      return 255;
  }
}

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(A3, INPUT);
}

void loop() {
  if (digitalRead(2)) {
    t = map(analogRead(A3), 0, 1023, 0, 1020);
  } else {
    t += analogRead(A3) / 100.0;
  }
  analogWrite(9, f(t));
  analogWrite(10, f(t + 4 * 255));
  analogWrite(11, f(t + 2 * 255));
  delay(10);
}
