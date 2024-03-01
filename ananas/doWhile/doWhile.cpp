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

void task5()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	int sum = 0;

	do
	{
		/*
			tmpNumber = -1
			do
			{
				tmpNumber++;
			}while((number - tmpNumber) % 10 != 0);
		*/

		int rest = number % 10;
		std::cout << rest << ", ";

		number = number / 10;

		sum = rest + sum;
	} while (number > 0);

	std::cout << "suma wynosi " << sum;
}

/*
* 
* 
* 
*/
//Napisz program, który poprosi użytkownika o wprowadzenie dowolnej liczby całkowitej. Następnie program powinien obliczyć i wyświetlić liczbę cyfr.
void task6()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfDigits = 0;

	do
	{
		numberOfDigits++;
		number = number / 10;
	} while (number > 0);

	std::cout << "ilosc cyfr wynosi " << numberOfDigits;
}

//Napisz program, który sprawdza czy więcej jest cyfr parzystych, czy nieparzystych we wczytanej liczbie.
void task7()
{
	int number;
	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	int numberOfEvenDigits = 0;
	int numberOfUnevenDigits = 0;
	int rest = 0;

	do
	{
		int rest = number % 10;

		if (rest % 2 == 0)
		{
			numberOfEvenDigits++;
		}
		else
		{
			numberOfUnevenDigits++;
		}
		number = number / 10;
	} while (number > 0);

	std::cout << "ilosc cyfr parzystych wynosi " << numberOfEvenDigits << "\n";
	std::cout << "ilosc cyfr nieparzystych wynosi " << numberOfUnevenDigits << "\n";

	if (numberOfEvenDigits > numberOfUnevenDigits)
	{
		std::cout << "jest wiecej cyfr parzystych\n";
	}
	else
	{
		std::cout << "jest wiecej cyfr nieparzystych\n";
	}
}

//Poproś użytkownika o podawanie liczb, aż wprowadzi zero. Oblicz sumę oraz średnią arytmetyczną wprowadzonych liczb.
void task8()
{
	int numberFromUser = 1;
	int sumOfDigits = 0;
	int sum = 0;
	int numberOfAttempts = 0;

	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> numberFromUser;

		sum = numberFromUser + sum;

		numberOfAttempts++;

	} while (numberFromUser != 0);

	numberOfAttempts--;

	std::cout << "suma liczb wynosi " << sum << "\n";

	int avarage = sum / numberOfAttempts;
	std::cout << "srednia liczb wynosi " << avarage << "\n";
}

int main()
{
	task6();
}


