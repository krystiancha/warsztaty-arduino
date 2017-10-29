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
@[2]
@[6]
@[7]
@[8]
@[9]

###### Hello world: **Arduino**

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

---

## Adruino IDE

Jak skompilować i uruchomić program?

---

### Zadanie 1.

Napiszcie program, który będzie działał w następujący sposób:

* *P* **wciśnięty** i *F* **zasłoniony** => *D*: **zielona**

* *P* **wciśnięty** i *F* **zasłoniony** => *D*: **czerwona**

* w pozostałych przypadkach *D* nie świeci

+++?code=task1.ino

#### Przykład rozwiązania
