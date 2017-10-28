---?code=code/blink.ino

@[1,3]
@[5,10]

Przykładowy program na **Arduino**

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

Napisana za nas funkcja `main()`

+++?code=code/blink.ino

---

##pinMode(pin, mode)

*pin*: numer pinu (od **0** do **13** oraz od **A0** do **A5**)

*mode*: **INPUT** (wejście), **OUTPUT** (wyjście) lub **INPUT_PULLUP**

---


@[2](pinMode(NR_PINU, INPUT | OUTPUT | INPUT_PULLUP))
@[6,8](digitalWrite(NR_PINU, LOW | HIGH))
@[7,9](delay(CZAS_W_MS))

---?code=code/lcd.ino
@[1](Załączamy bibliotekę do obsługi LCD)
@[4,7](Konfigurujemy i uruchamiamy LCD)
@[8](Wypisujemy na ekranie tekst);
@[12](Ustawiamy kursor na pierwszym miejscu drugiej kolumny)
@[13]()
@[13](Wypisujemy aktualny czas)

---?code=code/gpio.ino
@[9](`digitalRead(NR_PINU)`)
