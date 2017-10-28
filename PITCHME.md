## Arduino UNO

![](img/uno_angle.jpg)

+++

![](img/uno.jpg)

---?code=code/blink.ino

@[1,3]
@[5,10]

Przykładowy program

+++

```
int main(void) {
  init();
  initVariant();
  #if defined(USBCON)
    USBDevice.attach();
  #endif
  setup();
  for (;;) {
    loop();
    if (serialEventRun) serialEventRun();
  }
  return 0;
}
```

@[1,7-9,11-13]

Napisana za nas funkcja *main()*

+++?code=code/blink.ino

---?code=code/lcd.ino

@[1]
@[4]


---?code=code/gpio.ino

Na podstawie tego przykładowego kodu wykonajcie zadanie 1. z kartki.
