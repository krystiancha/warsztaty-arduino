# Struktura programu
```c++
void setup() {
  // kod znajdujący się tutaj wykona się JEDEN raz przy starcie programu
  
  // ustawiamy tu najczęściej tryb działania pinów np.
  pinMode(7, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  // kod znajdujący się tutaj wykonuje się w nieskończonej pętli
  
  // np.
  digitalWrite(7, digitalRead(8));
}
```

# Piny

## Wyjścia

**Uwaga!** Aby korzystać z pinu jako wyjścia należy ustawić go w tryb `OUTPUT` używając funkcji 
`pinMode(int pin, OUTPUT)`

### Cyfrowe
| Nazwa                 | Symbol    | Pin   | gdy HIGH      | gdy LOW       |
| --------------------- | :-------: | :---: | :-----------: | :-----------: |
| LED czerwona          | R         | 7     | świeci        | nie świeci    |
| LED żółta             | Y         | 12    | świeci        | nie świeci    |
| RGB LED czerwony      | RGBr      | 9     | świeci        | nie świeci    |
| RGB LED zielony       | RGBg      | 10    | świeci        | nie świeci    |
| RGB LED niebieski     | RGBb      | 11    | świeci        | nie świeci    |

### PWM
| Nazwa                 | Symbol    | Pin   | gdy wsp. wyp rośnie           | wsp. wyp. maleje  |
| --------------------- | :-------: | :---: | :-----------: | :-----------: |
| RGB LED czerwony      | RGBr      | 9     | jasność rośnie                | jasność maleje    |
| RGB LED zielony       | RGBg      | 10    | jasność rośnie                | jasność maleje    |
| RGB LED niebieski     | RGBb      | 11    | jasność rośnie                | jasność maleje    |

## Wejścia

**Uwaga!** Aby korzystać z pinu jako wejścia należy ustawić go w tryb `INPUT` używając funkcji 
`pinMode(int pin, INPUT)`

### Cyfrowe
| Nazwa                     | Symbol    | Pin   | HIGH, gdy             | LOW, gdy              |
| ------------------------- | :-------: | :---: | :-------------------: | :-------------------: |
| przycisk (monostabilny)   | B         | 8     | niewciśnięty          | wciśnięty             |
| przełącznik (bistabilny)  | S         | 2   | w pozycji "w lewo"    | w pozycji "w prawo"   |
| wykrywacz klaśnięć        | C         | 3     | cisza                 | wykrywa klaśnięcie    |

### Analogowe
| Nazwa          | Symbol    | Pin   | napięcie rośnie, gdy                  | napięcie maleje, gdy              |
| -------------- | :-------: | :---: | :-----------------------------------: | :-------------------------------: |
| potencjometr   | P         | A3    | kręcimy osią w kierunku CW*            | kręcimy osią w kierunku CCW*       |
| fotorezystor   | F         | A0    |     pada mniej światła (zasłaniamy)       | pada więcej światła (odsłaniamy)  |
* **CW** - clockwise (*zgodnie z ruchem wskazówek zegara*); **CCW** - counterclockwise (*przeciwnie do ruchu wskazówek zegara*)

# Wybrane funkcje
#### `pinMode(int pin, bool tryb)`
Ustaw dany pin w tryb wyjścia `OUTPUT` lub wejścia `INPUT`.
#### `digitalWrite(int pin, bool stan)`
Ustaw stan niski `LOW` lub wysoki `HIGH` na danym pinie.
#### `delay(long ms)`
Zaczekaj daną liczbę milisekund.
#### `digitalRead(int pin)`
Odczytaj stan danego pinu. Zwraca `HIGH` lub `LOW`.
#### `analogWrite(int pin, int wyp)`
Wyprowadza sygnał PWM na danym pinie.

Parametr *wyp* może przyjmować wartości:
 
od 0 (wypełnienie 0%, równoważne `digitalWrite(int pin, LOW)`)

do 255 (wypełnienie 100%, równoważne `digitalWrite(int pin, HIGH)`).
#### `analogRead(int pin)`
Odczytuje napięcie na danym pinie.

Zwraca wartości:

od 0 (~0V)

do 1023 (~5V)
