/*
  Reading a serial ASCII-encoded string.

  This sketch demonstrates the Serial parseInt() function.
  It looks for an ASCII string of comma-separated values.
  It parses them into ints, and uses those to fade an RGB LED.

  Circuit: Common-Cathode RGB LED wired like so:
  - red anode: digital pin 3
  - green anode: digital pin 5
  - blue anode: digital pin 6
  - cathode: GND

  created 13 Apr 2012
  by Tom Igoe
  modified 14 Mar 2016
  by Arturo Guadalupi

  This example code is in the public domain.
*/

// pins for the LEDs:
const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // make the pins outputs:
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int red = Serial.parseInt();
    // do it again:
    int green = Serial.parseInt();
    // do it again:
    int blue = Serial.parseInt();

    int inverse = Serial.parseInt();

    if (inverse) {
      red = 1023 - red;
      green = 1023 - green;
      blue = 1023 - blue;
    }

    // look for the newline. That's the end of your sentence:
    while (Serial.read() != '\n');

    // constrain the values to 0 - 255 and invert
    // if you're using a common-cathode LED, just use "constrain(color, 0, 255);"
    red = map(red, 0, 1023, 0, 255);
    green = map(green, 0, 1023, 0, 255);
    blue = map(blue, 0, 1023, 0, 255);

    // fade the red, green, and blue legs of the LED:
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);

    // print the three numbers in one string as hexadecimal:
    Serial.print(red, HEX);
    Serial.print(green, HEX);
    Serial.println(blue, HEX);
  }
}
