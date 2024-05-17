#include <iostream>

/*
    DRY - Don't repeat yourself.
    KISS - Keep it simple, stupid.
    YAGNI - You aren't gonna need it.
    SOLID:
        S - Single responsibility. - kod odpowiedzialny za jedna czynnosc
        O - 
        L -
        I -
        D -
*/

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
    float sideA, sideB;

    std::cout << "\npodaj dlugosc boku a\n";
    std::cin >> sideA;

    std::cout << "\npodaj dlugosc boku b\n";
    std::cin >> sideB;

    float areaOfSquare = sideA * sideB;
    std::cout << "\npole kwadratu wynosi\n" << areaOfSquare;
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy i wysokości trójkąta, a następnie obliczy pole tego trójkąta, wyświetlając wynik.

void task5()
{
    float a, h;

    std::cout << "\npodaj dlugosc boku podstawy\n";
    std::cin >> a;

    std::cout << "\npodaj wysokosc\n";
    std::cin >> h;

    float areaOfTriangle = a * h;
    std::cout << "\npole trojkata wynosi \n" << areaOfTriangle;
}

//Napisz program, który poprosi użytkownika o podanie promienia koła i obliczy pole tego koła, wyświetlając wynik.

void task6()
{
    
    float radius;

    std::cout << "\npodaj promien kola\n";
    std::cin >> radius;

    float pi = 3.14;

    float areaOfCircle = pi * radius * radius;
    
    std::cout << "pole kola wynosi " << areaOfCircle;
}

//Napisz program, który poprosi użytkownika o podanie długości podstawy a, podstawy b i wysokości h trapezu, a następnie obliczy pole tego trapezu, wyświetlając wynik.

void task7()
{

    float sideA, sideB, height;

    std::cout << "\npodaj bok a\n";
    std::cin >> sideA;

    std::cout << "\npodaj bok b\n";
    std::cin >> sideB;
    
    std::cout << "\npodaj wysokosc\n";
    std::cin >> height;

    float areaOfTrapeze =  ( sideA + sideB ) * height / 2;

    std::cout << "pole trapezu wynosi " << areaOfTrapeze;
}

//Napisz program, który poprosi użytkownika o podanie długości krawędzi sześcianu i obliczy jego objętość, wyświetlając wynik.

void task8()
{

    float a;

    std::cout << "\npodaj krawędź a\n";
    std::cin >> a;

    float area = ( a * a ) * 6;

    std::cout << "objetosc szesciokata wynosi " << area;

}

//Napisz program, który poprosi użytkownika o podanie temperatury w stopniach Celsiusza, a następnie przeliczy ją na stopnie Fahrenheita i wyświetli wynik.

void task9()
{
   
    float c;

    std::cout << "\npodaj temperature w stopniach celcjusza\n";
    std::cin >> c;

    float f = c * 2 - 30;

    std::cout << c << "stopni celcjusza to" << f << "stopni fahrenheita\n";
}

//Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.

void task10()
{
    float pln;
    
    std::cout << "\npodaj ilosć PLN\n";
    std::cin >> pln;

    float euro = pln / 4.42;
    float usd = pln / 4.13;

    std::cout << pln << "złoty to " << usd << "usd i " << euro << "euro";
}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb (a, b) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wyni

void task11()
{

    float a, b;

    std::cout << "\npodaj a\n";
    std::cin >> a;

    std::cout << "\npodaj b\n";
    std::cin >> b;

    float avarage = (a + b) / 2;

    std::cout << "\nśrednia wynosi " << avarage;
}

//Napisz program, który poprosi użytkownika o podanie trzech liczb (a, b, c) i obliczy średnią arytmetyczną tych liczb. Następnie wyświetli wynik.

void task12()
{
    float a, b, c, d;
    
    std::cout << "\npodaj a\n";
    std::cin >> a;

    std::cout << "\npodaj b\n";
    std::cin >> b;

    std::cout << "\npodaj c\n";
    std::cin >> c; 

    std::cout << "\npodaj d\n";
    std::cin >> d;

    float avarage = (a + b + c + d) / 4;

    std::cout << "\nśrednia arytmetyczna wynosi " << avarage;

}

//Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.

void task13()
{
    float w1, w2, w3,a ,b ,c;

    std::cout << "\npodaj liczbę a \n";
    std::cin >> a;

    std::cout << "\npodaj liczbę b \n";
    std::cin >> b;

    std::cout << "\npodaj liczbę c \n";
    std::cin >> c;

    std::cout << "\npodaj wage liczby a \n";
    std::cin >> w1;

    std::cout << "\npodaj wage liczby b \n";
    std::cin >> w2;

    std::cout << "\npodaj wage liczby c \n";
    std::cin >> w3;

    float sumOfWages = w1 + w2 + w3;
    float avarage = (a * w1 + b * w2 + c * w3) / sumOfWages;

    std::cout << "\n średnia wynosi " << avarage;
}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych. Następnie wykona operacje (+, -, *, /) i wyświetli wyniki.

void task14()
{
    long long a, b;

    std::cout << "\npodaj a\n";
    std::cin >> a;

    std::cout << "\npodaj b\n";
    std::cin >> b;

    long long adding = a + b;
    long long dividing = a / b;
    long long multiplication = a * b;
    long long subtraction = a - b;

    std::cout << "\nwynik dodawania to " << adding << "\nwynik odejmowania to " << subtraction << "\nwynik mnożenia " << multiplication << "\nwynik dzielenia to " << dividing;
}

//Napisz program, który poprosi użytkownika o podanie liczby sekund i przeliczy je na godziny i minuty, wyświetlając wynik.

void task15()
{
    float s;

    std::cout << "\npodaj sekundy \n";
    std::cin >> s;

    float min = s / 60;
    float h = s / 60 / 60;

    std::cout << "\nminuty " << min << "\ngodziny " << h;
}

//Napisz program, który poprosi użytkownika o podanie współrzędnych (x1, y1) i (x2, y2) dwóch punktów w układzie kartezjańskim, a następnie obliczy odległość między nimi, wyświetlając wynik.

void task16()
{
    float x1, x2, y1, y2;

    std::cout << "\npodaj x1 \n";
    std::cin >> x1;
    std::cout << "\npodaj x2 \n";
    std::cin >> x2;
    std::cout << "\npodaj y1 \n";
    std::cin >> y1;
    std::cout << "\npodaj y2 \n";
    std::cin >> y2;

    float distance = (x1 - x2) * (x1 - x2) - (y1 - y2) * (y1 - y2);

    std::cout << "\nodleglosc wynosi " << distance;
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

    task8();

    task9();

    task10();

    task11();

    task12();

    task13();

    task14();

    task15();

    task16();
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