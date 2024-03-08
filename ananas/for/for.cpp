#include <iostream>


void task1()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	for(int counter = 0; counter != number; counter++)
	{
		std::cout << "hello world\n";
	}
}


void task2()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	for (int counter = 0; counter != number + 1; counter++)
	{
		std::cout << counter << "\n";
	}
}

int main()
{
	task2();
}