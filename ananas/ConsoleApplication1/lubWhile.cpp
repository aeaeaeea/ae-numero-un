#include <iostream>

void task1()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigits = 1;

	/*do
	{
		numberOfDigits++;
		number = number / 10;
	} while (number > 0);

	*/

	while (number > 9)
	{
		numberOfDigits++;
		number = number / 10;
	}
	std::cout << "ilosc cyfr wynosi " << numberOfDigits;
}

void task2()
{
	int a;
	std::cout << "podaj liczbe calkowita a\n";
	std::cin >> a;

	int b;
	std::cout << "podaj liczbe calkowita b\n";
	std::cin >> b;
	
	int tempA;

	/*if (b != 0)
	{
		int tempA = a;
		a = b;
		b = tempA % b;
		if (b != 0)
		{
			//...
		}
	}*/

	while (b != 0)
	{
		tempA = a;
		a = b;
		b = tempA % b;
	}

	std::cout << "NWD = " << a <<"\n";
}

//Miasto T. ma obecnie 100 tys. mieszkańców, ale jego populacja rośnie co roku o 3% rocznie. 
//Miasto B. ma 300 tys. mieszkańców i ta liczba rośnie w tempie 2% na rok.
// Wykonaj symulację prezentującą liczbę mieszkańców w obu miastach i zatrzymującą się, 
// gdy liczba mieszkańców miasta T. przekroczy liczbę z miasta B.
void task3()
{
	double cityT = 100000, cityB = 300000, year = 2024;
	/*
	std::cout << "liczba mieszkancow miasta t\n";
	std::cin >> cityT;

	std::cout << "liczba mieszkancow miasta b\n";
	std::cin >> cityB;*/

	while (cityT < cityB)
	{
		std::cout << year << "\n";
		cityT = cityT * 1.03;

		cityB = cityB * 1.02;

		std::cout << "miasto T " << cityT << "\n";
		std::cout << "miasto B " << cityB << "\n";
		year = year + 1;

	}
}

int main()
{
	task3();
}
