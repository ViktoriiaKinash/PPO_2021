// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego pliku.
//
// Prosze zaimplementować funkcje zwracające odpowiednie wartości lub
// wykonujące proste operacje. Rozwiazanie powinno uwzgledniac dokumentacje!
// Odpowiednie wartości zwracane proszę
// wywnioskować z załączonego wyniku na końcu tego pliku.
//
// ZALOZENIE 1: Deklaracja funkcji dedykowanych roznym wielkosciom fizycznym
// ma znajdować się w osobnym pliku nagłówkowym, a definicja w osobnych plikach .cpp
// Czas | Polozenie | Przyspieszenie | Predkosc
//
// ZALOZENIE 2: Implementacja fukcji Polozenie() powinna zawierać wywołanie funkcji
// Kwadrat(...), Iloczyn(...) i Suma(...)
// zdefiniowane w osobnym pliku Operacje.h (.cpp)
// 
// ZALOZENIE 3: Program zawiera okreslona strukture katalogow dla
// ktorej zdefiniowany jest CMakeLists.txt (gotowy do uzycia!)
// Przypomnienie: cmake i kompilacje wykonujemy spoza zrodla (np. z katalogu build/)
//
// Pliku Main.cpp, nie wolno modyfikowac.
//
// Ukonczone zadanie nalezy wyslac na UPEL w formie spakowanego katalogu (Lab02)
// do archiwum Lab02.tar.gz, dla przypomnienia:
// tar -czvf Lab02.tar.gz Lab02/

#include<iostream>
#include"Polozenie.h"
#include"Czas.h"
#include"Przyspieszenie.h"
#include"Predkosc.h"

int main () {
  
  std::cout<<"t = "  <<Czas()<<"\n";
  std::cout<<"a = "  <<Przyspieszenie()<<"\n"; 
  std::cout<<"v_0 = "<<PredkoscPoczatkowa()<<"\n";
  std::cout<<"r_0 = "<<PolozeniePoczatkowe()<<"\n";
  

  std::cout<<"r = a*t^2/2 + v_0*t + r_0 = "<<Polozenie()<<"\n";

  return 0;
}

/* 
[brachwal@vmate build]$ ./lab02 
t = 1.4
a = 9.8
v_0 = 333
r_0 = 22
r = a*t^2/2 + v_0*t + r_0 = 493.998
*/
