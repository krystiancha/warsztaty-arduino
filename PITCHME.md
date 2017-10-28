## Arduino UNO

![](img/uno_angle.jpg)

+++

![](img/uno.jpg)

---

## Hello world

+++?code=code/hello.cpp

###### Hello world: **C++**

+++?code=code/blink.ino

@[1,3]
@[5,10]

###### Hello world: Arduino

(mruganie LED)

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

---?code=code/digitalReadSerial.ino

@[2]
@[6]
@[7]
@[8]
