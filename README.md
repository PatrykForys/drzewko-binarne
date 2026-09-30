# Drzewo  w C++

 Program przedstawia prostą implementację **binarnego drzewa wyszukiwania** w języku C++.

 ## Opis

 Program pozwala:

 - utworzyć puste drzewo,
- dodać podaną liczbę elementów,
- wyświetlić elementy drzewa w kolejności rosnącej,
- wyświetlić drzewo w formie graficznej.

 Mniejsze liczby są dodawane do lewego poddrzewa, a większe lub równe do prawego.

 ## Uruchomienie

 Program można skompilować za pomocą kompilatora C++, np.:

```
g++ main.cpp -o drzewo
```

 Następnie uruchomić:

```
./drzewo
```

 W systemie Windows:

```
drzewo.exe
```

 ## Przykład działania

 Dla liczb:

```
8 4 12 2 6 10 15
```

 drzewo będzie wyglądać następująco:

```
        15
    12
        10
8
        6
    4
        2
```

 ## Wyświetlanie elementów

 Metoda `wyswietl()` przechodzi przez drzewo metodą **in-order**, dlatego liczby są wyświetlane rosnąco.

 Przykład:

```
2 4 6 8 10 12 15
```

 ## Struktura programu

 ### Klasa `Drzewo`

 Klasa przechowuje całe drzewo oraz udostępnia metody do dodawania i wyświetlania elementów.

 ### `Node`

 Struktura reprezentuje pojedynczy węzeł drzewa. Przechowuje:

 - liczbę,
- wskaźnik na lewe dziecko,
- wskaźnik na prawe dziecko.

 ### `dodaj()`

 Dodaje liczbę do odpowiedniego miejsca w drzewie.

 ### `wyswietl()`

 Wyświetla liczby w kolejności rosnącej.

 ### `wyswietlDrzewo()`

 Wyświetla drzewo w czytelnej formie tekstowej.
