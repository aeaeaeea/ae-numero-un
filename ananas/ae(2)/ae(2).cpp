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

//zadania
//Napisz program, który poprosi użytkownika o podanie długości boku a i b prostokąta, a następnie obliczy i wyświetli pole prostokąta.

void task4()
{
    float bok_a, bok_b;

    std::cout << "\npodaj dlugosc boku a\n";
    std::cin >> bok_a;

    std::cout << "\npodaj dlugosc boku b\n";
    std::cin >> bok_b;

    float area_of_square = bok_a *bok_b;
    std::cout << "\npole kwadratu wynosi\n" << area_of_square;
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.

void task5()
{
    float a, h;

    std::cout << "\npodaj dlugosc boku podstawy\n";
    std::cin >> a;

    std::cout << "\npodaj wysokosc\n";
    std::cin >> h;

    float area_of_triangle = a * h;
    std::cout << "\npole trojkata wynosi \n" << area_of_triangle;
}

//Napisz program, który poprosi użytkownika o podanie promienia koła i obliczy pole tego koła, wyświetlając wynik.

void task6()
{
    
    float r;

    std::cout << "\npodaj promien kola\n";
    std::cin >> r;

    float n = 3.14;

    float area_of_circle = r * n;
    
    std::cout << "pole kola wynosi " << area_of_circle;
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy a, podstawy b i wysokości h trapezu, a następnie obliczy pole tego trapezu, wyświetlając wynik.

void task7()
{

    float bok_a, bok_b, h;

    std::cout << "\npodaj bok a\n";
    std::cin >> bok_a;

    std::cout << "\npodaj bok b\n";
    std::cin >> bok_b;
    
    std::cout << "\npodaj wysokosc\n";
    std::cin >> h;

    float area_of_trapeze =  ( bok_a + bok_b ) * h / 2;

    std::cout << "pole trapezu wynosi " << area_of_trapeze;
}

void task8()
{

    float bok_a, 

    std::cout << "\npodaj bok a\n";
    std::cin >> bok_a;

    float area_of_trapeze = (bok_a + bok_b) * h / 2;

    std::cout << "objetosc szesciokata wynosi " << area_of_trapeze;

}

int main()
{

    //task1();

    //task2();

    //task3();

    task4();

    task5();

    task6();

    task7();
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