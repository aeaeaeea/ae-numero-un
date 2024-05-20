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
	cout << "siema " << n << "\n";
}
void showWelcome(string n, int w)
{
	showWelcome(n);
	cout << "wiek to " << w << "\n";
}
void showWelcome(string n, int w, string a)
{
	showWelcome(n, w);
	cout << "adres to " << a << "\n";
}

void parameter(int& p)
{
	cout << "wartosc parametru " << p << "\n";
	p++;
	cout << "wartosc parametru " << p << "\n";
}

void sum(int firstNumber, int secondNumber, int& result)
{
	int r;
	r = firstNumber + secondNumber;
	result = r;
}

void sum(int firstNumber, int secondNumber)
{
	int r;
	r = firstNumber + secondNumber;
	return r;
}

int main()
{
	/*
	showHello();
	string name;
	name = "maciek";
	showWelcome(name);
	name = "Jan";
	showWelcome(name);
	showWelcome("Anna");
	showWelcome("maciuś", 9, "[redacted]");
	*/

	//parameter(98) || przez parameter nie mozna przekazac stalej

	int variable = 5;
	cout << "wartosc zmiennej przed funkcja " << variable << "\n";
	parameter(variable);
	cout << "wartosc zmiennej po funkcji " << variable << "\n";

	int result;
	sum(6, 8, result);
	cout << result << "\n";

	result = sum(15, 7) + 2;
	cout << result << "\n";
}