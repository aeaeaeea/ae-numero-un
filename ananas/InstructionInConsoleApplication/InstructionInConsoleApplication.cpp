#include <iostream>

/*
operator porównania:
> wiekszosci
< mniejszosci 
>= wieksze lub rowne
<= mniejsze lub rowne
== rowne
!= rozne
*/

//napisz program ktory pobierze liczbe od uzytkownika i wyswietli czy jest ona dodatnia czy nie
//wersja 1
void task1()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	if (number <= 0)
	{
		std::cout << "liczba jest ujemna\n";
	}
}

//wersja 2
void task2()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "liczba jest ujemna\n";
	}
}

//wersja 3
void task3()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	else if (number < 0)
	{
		std::cout << "liczba jest ujemna\n";
	}
	else
	{
		std::cout << "liczba jest równa zeru\n";
	}
}

int main()
{
	task1();
}