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

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		avarage = avarage + numbers[i];
	}

	avarage = avarage / ARRAY_SIZE;
	cout << "srednia wynosi " << avarage;
}

int main()
{
	task2();
}
//a