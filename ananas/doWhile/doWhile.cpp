#include <iostream>
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

//napisz program ktory wylosuje liczbe a  uzsytkownik bedzie musial ja zgadnac
void task3()
{
	int randomNumber;

	srand(time(0));
	randomNumber = rand() % 101;
	
	int numberFromUser;

	/*if (numberFromUser != randomNumber)
	{
		std::cout << "podaj liczbe";
		std::cin >> numberFromUser;
		if (numberFromUser != randomNumber)
		{
			std::cout << "podaj liczbe";
			std::cin >> numberFromUser;
			if (numberFromUser != randomNumber)
			{
				std::cout << "podaj liczbe";
				std::cin >> numberFromUser;
				if (numberFromUser != randomNumber)
				{
					std::cout << "podaj liczbe";
					std::cin >> numberFromUser;
					if (numberFromUser != randomNumber)
					{
						std::cout << "podaj liczbe";
						std::cin >> numberFromUser;
						if (numberFromUser != randomNumber)
						{
							std::cout << "podaj liczbe";
							std::cin >> numberFromUser;
							//...
						}
					}
				}
			}
		}
	}*/

	do
	{
		std::cout << "podaj liczbe\n";
		std::cin >> numberFromUser;
		if (numberFromUser < randomNumber)
		{
			std::cout << "za mala liczba\n";
		}
		if (numberFromUser > randomNumber)
		{
			std::cout << "za duza liczba\n";
		}
	} while (numberFromUser != randomNumber);

	//std::cout << "Liczba losowa" << randomNumber << "\n";
}

//napisz program wyswietlajacy liczby calkowite z przedzialu <0,x) (wartosc x podaje uzytkownik)
void task4()
{
	int upperRange, tempNumber = 0;
	std::cout << "podaj gorny zakres\n";
	std::cin >> upperRange;

	/*std::cout << "0, ";
	if (upperRange >= 1)
	{
		std::cout << "1, ";
		if (upperRange >= 2)
		{
			std::cout << "2, ";
			if (upperRange >= 3)
			{
				std::cout << "3, ";
				//...
			}
		}
	}*/
	do
	{
		std::cout << tempNumber << ", ";
		tempNumber =  tempNumber + 1;
		//tempNumber += 1, tempNumber ++
	} while (upperRange >= tempNumber);
}

int main()
{
	task4();
}


