//napisz program ktory wczyta od uzytkownika liczbe dodarina a

void task1()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	while (number < 0)
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	}

	std::cout << "podano liczbe " << number << "\n";
}

void task2()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;
	/*
	if (number<0)
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
		if (number < 0)
		{
			std::cout << "podaj liczbe dodatnia\n";
			std::cin >> number;
			if (number < 0)
			{
				std::cout << "podaj liczbe dodatnia\n";
				std::cin >> number;
				if (number < 0)
				{
					std::cout << "podaj liczbe dodatnia\n";
					std::cin >> number;
					if (number < 0)
					{
						std::cout << "podaj liczbe dodatnia\n";
						std::cin >> number;
						if (number < 0)
						{
							std::cout << "podaj liczbe dodatnia\n";
							std::cin >> number;
							//...
						}
					}

				}
			}

		}
	}
	*/
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "podano liczbe " << number << "\n";
}

#include <iostream>

int main()
{
	task2;
}


