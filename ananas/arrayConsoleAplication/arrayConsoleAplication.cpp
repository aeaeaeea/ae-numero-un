﻿#include <iostream>


using namespace std;

void task1()
{
	const unsigned int ARRAY_SIZE = 5;
	int numbers[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "podaj " << (i + 1) << " liczbe\n";
		cin >> numbers[i];
	}
	for (int i = ARRAY_SIZE - 1; i >= 0; i--)
	{
		cout << numbers[i] << ", ";
	}
}

void task2()
{
	int avarage;

	const unsigned int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	cout << "liczby w kolekcji: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		cout << numbers[i] << ", ";
	}

	cout << "\n\n";
	avarage = 0;

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		avarage = avarage + numbers[i];
	}

	avarage = avarage / ARRAY_SIZE;
	cout << "srednia wynosi " << avarage;
}

void task3()
{
	const unsigned int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	cout << "liczby w kolekcji: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		cout << numbers[i] << ", ";
	}
	int smallestNumber = numbers[0], biggestNumber = numbers[0];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		if (numbers[i] > biggestNumber)
		{
			biggestNumber = numbers[i];
		}
		if (smallestNumber > numbers[i])
		{
			smallestNumber = numbers[i];
		}
	}
	cout << "\nnajwieksza liczba " << biggestNumber << "\n";
	cout << "mniejsza liczba " << smallestNumber << "\n";
}

void task4()
{
	int dayFromUser;
	string days[7]{ "poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela" };
	/*days[0] = "poniedzialek";
	days[1] = "wtorek";
	days[2] = "sroda";
	days[3] = "czwartek";
	days[4] = "piatek";
	days[5] = "sobota";
	days[6] = "niedziela"; */

	cout << "podaj numer dnia tygodnia\n";
	cin >> dayFromUser;

	if (dayFromUser < 8 && dayFromUser > 0)
	{

		cout << "jest " << days[dayFromUser - 1];
	}
	else
	{
		cout << "nie ma takiego dnia";
	}
}

void task5()
{
	int tempNumber = 0, tabelNumber;

	const unsigned int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	cout << "liczby w kolekcji: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		cout << numbers[i] << ", ";
	}

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (numbers[j] < numbers[i])
			{
				tempNumber = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = tempNumber;
				tabelNumber = j;
			}
		}
	}
	cout << "\n";

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << numbers[i] << ", ";
	}
}

void task6()
{
	const unsigned int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];

	srand(time(NULL));
	cout << "liczby w kolekcji: \n";
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		numbers[i] = rand() % 101;
		cout << numbers[i] << ", ";
	}
	cout << "\n\n";

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		int minNumberLocation = i;
		for (int j = i + 1; j < ARRAY_SIZE; j++)
		{
			if (numbers[j] < numbers[minNumberLocation])
			{
				minNumberLocation = j;
			}
			int tmp = numbers[i];
			numbers[i] = numbers[minNumberLocation];
			numbers [minNumberLocation] = tmp;
		}
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << numbers[i];
	}
}

void task7()
{
	const unsigned int ARRAY_SIZE = 50;
	bool sieve[ARRAY_SIZE];
	cout << "liczby pierwsze: \n";
	for (int i = 2; i < ARRAY_SIZE; i++)
	{
		sieve[i] = true;
	}

	for (int i = 2; i < ARRAY_SIZE; i++)
	{
		if (sieve[i]/* == true*/)
		{
			for (int j = i + i; j < ARRAY_SIZE; j = j + i)
			{
				sieve[j] = false;
			}
		}
	}
	for (int i = 2; i < ARRAY_SIZE; i++)
	{	
		if(sieve[i]/* == true*/)
		cout << i << ", ";
	}
}

int main()
{
	task7();
}
//aa