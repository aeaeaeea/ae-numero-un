#include <iostream>

using namespace std;

/*

funkcja - zbiór instrukcji. definicja/deklaracja funkcji sklada sę z dwóch cześci:
* nagówek - sposób uzycia funkcji
    - typ zwracany
    - nazwa(poprawny identyfiaktor)
    - parametrów w nawiasie (nieobowiąznowe)
* ciało - zbiór instrukcji

typZwracany nazwaFunkcji(parametry)
{
    //ciało funkcji
}
*/

void showHello()
{
    cout << "hello world\n";
}

void showWelcome(string n)
{
    cout << "siema " << n <<"\n";
}

int main()
{
    showHello();
    string name;
    name = "maciek";
    showWelcome(name);
    name = "Jan";
    showWelcome(name);
    showWelcome("Anna");
}