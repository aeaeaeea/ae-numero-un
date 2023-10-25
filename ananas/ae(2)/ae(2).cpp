#include <iostream>

//napisz program, który wczyta od użytkownika jego wiek a następnie wyświetli go na konsoli.
void task1()
{
    short ageFromUser;
    std::cout << "podaj swój wiek.\n";
    std::cin >> ageFromUser;
    std::cout << "masz " << ageFromUser << " lat\n";

}


void task2()
{

    //dodawanie cuz yes
    int x;
    std::cout << "podaj x\n";
    std::cin >> x;
    int y;
    std::cout << "podaj y\n";
    std::cin >> y;
    int suma = x + y;
    std::cout << "wynkik to " << suma;

}

//stwórz program który pobiera od użytkownika
//długość w metrach i przelicza je na centymetry
//milimetry i kilometry. wyświetl wynik
void task3()
{
    float meter;

    std::cout << "\nwpisz długość w metrach ";
    std::cin >> meter;

    float centymetr = meter * 100;
    float milimetr = meter * 1000;
    float kilometr = meter / 1000;
    
    std::cout << "\ncentymetry " << centymetr << "\nmilimetry " << milimetr << "\nkilometry " << kilometr;

}


int main()
{

    task1();

    task2();

    task3();

}

/*
algorytm - zbiór instrukcji realizujący postawione przed nim zadanie.
sposoby zapisu:
-w punktach
-opis słowny
-język programowania lub pseudokod
-zbiór rysunków
-schemat blokowy

zmienna - jest to pewien obszar pamięci, słóżący do przechowywania danych. Te dane można modyfikować.
zmienna pozwala przechowywac tylko jedną wartość w danym momencie czasu.

deklaracja zmiennej - moment jej utworzenia.

typ_zmiennej nazwa_zmiennej;
typ zmiennej mówi o wielkości obszaru pamięci i o rodzaju przechowywanych danych.

short        liczby całkowite ze znakiem   2 bajty      <-32 768; 32 767>
int/long     liczby całkowite ze znakiem   4 bajty      <-2 147 483 648; 2 147 483 647>
long long    liczby całkowite ze znakiem   8 bajtów     <-9 223 372 036 854 775 808; 9 223 372 036 854 775 808>


jeżeli przed powyższymi typami dodamy słowo "unsigned" to zakres jest od zera do podwojonego zakresu górnego plus 1.

float           liczby rzeczywiste ze znakiem   4 bajty
double          liczby rzeczywiste ze znakiem   8 bajtów
long double     liczby rzeczywiste ze znakiem   12 bajtów

nazwa zmiennej - nazwa obszaru pamięci. poprzez tą nazwę odwołujemy się do tego obszaru.

wymagania kompilatora względem nazwy:
    * użycie tylko dozwolonych znaków
        -alfabet angielski a-z oraz A-Z
        -cyfry arabskie 0-9
        -podkreślenie (podłoga) _
    * pierwszym znakiem nie może być cyfra
    * nie moze być to słowo kluczowe danego języka programowania
    * musi być unikalna w danej widoczności
     
wymagania programistów:
    *jeżeli nazwa składa się z wielu wyrazów to zamiast spacji:
        -uzywamy znaku podkreślnika np.first_number_from_user
        -stosujemy camel case, czyli piszemy wszystko razem a słowa (zaczynamy od drugiego)
        zaczynamy z dużej litry np. firstNumberFromUser
    *nazwa zmiennej musi oddawać charakter przechowywanych danych, czyli mieć znaczenie
    *nazwy po angielsku !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

*/