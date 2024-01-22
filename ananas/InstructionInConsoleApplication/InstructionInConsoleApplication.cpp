#include <iostream>

/*
priorytety operatorow:

* /
+ -
> < >= <= == !=
&&
||



operator porównania:
> wiekszosci
< mniejszosci 
>= wieksze lub rowne
<= mniejsze lub rowne
== rowne
!= rozne

operatory logiczne:

|| or/lub
&& and\lub
! not/nie

A B		A || B		A && B
f f       f			  f
t f       t			  f
f t       t		      f
t t       t			  t

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

//.....................................................
//wersja 1
void task4()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number >= 1)

	{
		if (number < 10)
		{
			std::cout << "liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "liczba nie jest w zakresie\n";
		}
	}

	else
	{
		std::cout << "liczba nie jest w zsakresie\n";
	}
}
//wersja 2 
void task5()
{

	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number >= 1 && number < 10)
	{
		std::cout << "liczba nalezy do zbioru\n";
	}
	else
	{
		std::cout << "liczba nie nalezy do zbioru\n";
	}
}



void task6()
{
	int firstNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "najwieksza wartosc to " << firstNumber << "\n";
} 

void task7()
{ 
	int firstNumber,secondNumber;
	std::cout << "podaj liczbe 1\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe 2\n";
	std::cin >> secondNumber;

	if (secondNumber > firstNumber)
	{
		std::cout << "najwieksza liczba to " << secondNumber << "\n";
	}
	else
	{
		std::cout << "najwieksza liczba to " << firstNumber << "\n";
	}
}

void task8()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj liczbe 1\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe 2\n";
	std::cin >> secondNumber;

	std::cout << "podaj liczbe 3\n";
	std::cin >> thirdNumber;
	
	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
	{
		std::cout << "najwieksza liczba to " << thirdNumber << "\n";
	}
	else if (secondNumber > firstNumber)
	{
		std::cout << "najwieksza liczba to " << secondNumber << "\n";
	}
	else
	{
		std::cout << "najwieksza liczba to " << firstNumber << "\n";
	}
}

int main()
{
	//task1();
	task8();
}