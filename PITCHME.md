## Arduino

---?code=code/blink.ino
@[1,3](Wnętrze funkcji setup wykona się raz)
@[5,10](Wnętrze funkcji loop wykonywać się będzie ciągle)
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
