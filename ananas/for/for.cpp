#include <iostream>
/*
* 
* 
* 
* 
* 
* .
* e
* 
* 
* Program wyświetlający na ekranie ciąg Fibonacciego do 20 elementu (ciąg Fibonacciego to ciąg gdzie każdy element jest sumą dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)

* Program, kóry wyświetli poniższe wzory:
	****     *       54321        121212        122333
	***     ***      65432        212121        223334444
	**     *****     76543        121212        333444455555
	*     *******    87654        212121        444455555666666

* Oblicz sumę szeregu 1/1^2 + 1/2^2 + 1/3^2 + ... +1/n^2. Jeżeli się nie pomylisz, to dla odpowiednio dużej wartości n po przemnożeniu jej przez 6 i spierwiastkowaniu powinieneś otrzymać wartość liczby π (suma szeregu jest równa π2/6). Zwróć uwagę, że pierwsza wartość indeksu to 1, a nie 0. Dokładność obliczeń można sprawdzić porównując z wartością odczytaną z własności Math.PI.

* Napisz program, który rozkłoży liczbę na czynniki pierwsze.

*/

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


void task3() 
{
	int height, width;
	std::cout << "podaj wysokosc\n";
	std::cin >> height;

	std::cout << "podaj szerokosc\n";
	std::cin >> width;

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << "x";
		}
		std::cout << "\n";
	}
}

//Program obliczający sumę liczb od 1 do 100
void task4()
{
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
		std::cout << sum << "\n";
	}
}

//Program sprawdzający czy podana liczba jest liczbą doskonałą (czyli taką, której suma dzielników (z wyłączeniem samej siebie) jest równa danej liczbie, np. 6 jest liczbą doskonałą, ponieważ 1 + 2 + 3 = 6).
void task5()
{
	int numberFromUser, temp = 0;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> numberFromUser;
	
	for (int i = 1; i < numberFromUser; i++)
	{
		if (numberFromUser % i == 0)
		{
			temp = temp + i;
		}
	}

	if (temp == numberFromUser)
	{
		std::cout << "liczb jest liczba doskonala";
	}
	else
	{
		std::cout << "liczb nie jest liczba doskonala";
	}
}

//Program wyświetlający na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task6()
{
	int temp = 0;

	for (int i = 1; i <= 10; i++)
	{
		temp = i * i;
		std::cout << temp << "\n";
	}
}

//Program obliczający n!.
void task7()
{
	int numberFromUser, factoria = 1;
	std::cout << "podaj liczeb dodatnia\n";
	std::cin >> numberFromUser;

	for (int i = 1; i <= numberFromUser; i++)
	{
		factoria = i * factoria;
		std::cout << factoria << "\n";
	}
}

//Program wyświetlający na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4! itd.)
void task8()
{
	int factoria = 1;

	for (int i = 1; i <= 10; i++)
	{
		factoria = i * factoria;
	}

	std::cout << factoria;
}

//Program wyświetlający na ekranie tabliczkę mnożenia od 1 do 9 (np. 1x1=1, 1x2=2, 1x3=3 itd.)
void task9()
{
	int temp = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			temp = i * j;

			std::cout << temp << "\n";
		}
	}
}

//Program wyświetlający na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task10()
{
	for (int i = 1; i < 101; i++)
	{
		if(i % 3 == 0)
		{
			std::cout << i << "\n";
		}
	}
}

//Program obliczający sumę kwadratów liczb od 1 do 10
void task11()
{
	int temp = 0;

	for (int i = 1; i < 11; i++)
	{
		temp = i * i + temp;
	}
	
	std::cout << temp;
}

//Program, który wczyta podstawę oraz wykładnik oraz wyliczy wynik.
void task12()
{

}

//
void task13()
{

}

int main()
{
	task11();
}