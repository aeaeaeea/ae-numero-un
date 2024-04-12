#include <iostream>

using namespace std;

void task1()
{
	const unsigned int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "podaj " << (i + 1) << " liczbe\n";
		cin >> numbers[i];
	}
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << numbers[i] << ", ";
	}
}

int main()
{
	task1();
}
