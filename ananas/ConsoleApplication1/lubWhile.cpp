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

	if (b != 0)
	{
		int tempA = a;
		a = b;
		b = tempA % b;
		if (b != 0)
		{
			//...
		}
	}
}

int main()
{
	task1;
}
