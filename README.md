# kutong
Horizontale und Vertikale Drehung eines Penis.

modyfikacja klasycznego donut.c, wyświetlająca niecenzuralny obrazek

kompilujcie za pomocą:
`gcc -o kutong kutong.c -lm`

zmienne:
- theta & fi || C & D - kąty do okręgów  (walec i koło)
- A, B - kąty obrotu kutong
- dT, dF, dA, dB || E, G, F, H - różnice obrotu
- z - tablica wartości z, ergo 'bliskości od ekranu'
- b - tablica znaków zawierająca cnagę, rysowana
- d1 || I - przesunięcie prącia w osi Y
- d2 || J - przesunięcie jąder w osi X
- rS || s, r - promenie przyrodzenia oraz genitaliów
- dist || K - 'odległość' członka od ekranu (początku ukł. wsp.), w osi Z
- L - wartość naświetlenia, zastępuje współrzędną Z
- lM || l - skalar funkcji naświetlenia cocka (dobrać do l. znaków w str)
- str || S - słownik znaków do rysowania fallusa
- od S do Z - sinusy i cosinusy kątów (pkt 3)
- p1, p2, p3 || d, e, f - zmienne pomocnicze, żeby ograniczyć obliczenia

inne naświetlenia:
shaft:
1. L=lM*(cB*cT+(sA*sB-cA)*sT),	// dół, przód
2. L = lM*(sT*(sA*cB + cA) - sB*cT),	// góra, przód

balls:
1. L=lM*(cB*cT+(sA*sB-cA)*sT);
2. L = lM * (sT*(sA*(cB*cF+sF) + cA*(cB*sF + cF)) - sB*cT);


