#include <iostream>

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
	string days[7];
	days[0] = "poniedzialek";
	days[1] = "wtorek";
	days[2] = "sroda";
	days[3] = "czwartek";
	days[4] = "piatek";
	days[5] = "sobota";
	days[6] = "niedziela";

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

int main()
{
	task4();
}
//a