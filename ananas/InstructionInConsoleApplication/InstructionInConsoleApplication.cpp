#include <iostream>
/*
*
*
* 

* 

* 
*
* Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.
* Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.
* Napisz program, który poprosi użytkownika o podanie oceny w skali 100-punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.
* Program wyświetlający odpowiedni komunikat w zależności od podanej oceny (np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
* Napisz program, który na podstawie współczynników równania kwadratowego (a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.
* Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)

*/



/*
priorytety operatorow:

* /
+ -
> < >= <= == !=
&&
||



operator porównania:
> wiekszosci
< mniejszosci 
>= wieksze lub rowne
<= mniejsze lub rowne
== rowne
!= rozne

operatory logiczne:

|| or/lub
&& and\lub
! not/nie

a

A B		A || B		A && B
f f       f			  f
t f       t			  f
f t       t		      f
t t       t			  t

*/

//napisz program ktory pobierze liczbe od uzytkownika i wyswietli czy jest ona dodatnia czy nie
//wersja 1 
void task1()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	if (number <= 0)
	{
		std::cout << "liczba jest ujemna\n";
	}
}

//wersja 2
void task2()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "liczba jest ujemna\n";
	}
}

//wersja 3
void task3()
{
	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "liczba jest dodatnia\n";
	}
	else if (number < 0)
	{
		std::cout << "liczba jest ujemna\n";
	}
	else
	{
		std::cout << "liczba jest równa zeru\n";
	}
}

//.....................................................
//wersja 1
void task4()
{
	int number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number >= 1)

	{
		if (number < 10)
		{
			std::cout << "liczba jest w zakresie\n";
		}
		else
		{
			std::cout << "liczba nie jest w zakresie\n";
		}
	}

	else
	{
		std::cout << "liczba nie jest w zsakresie\n";
	}
}
//wersja 2 
void task5()
{

	int number;

	std::cout << "podaj liczbe\n";
	std::cin >> number;

	if (number >= 1 && number < 10)
	{
		std::cout << "liczba nalezy do zbioru\n";
	}
	else
	{
		std::cout << "liczba nie nalezy do zbioru\n";
	}
}



void task6()
{
	int firstNumber;
	std::cout << "podaj liczbe\n";
	std::cin >> firstNumber;

	std::cout << "najwieksza wartosc to " << firstNumber << "\n";
} 

void task7()
{ 
	int firstNumber,secondNumber;
	std::cout << "podaj liczbe 1\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe 2\n";
	std::cin >> secondNumber;

	if (secondNumber > firstNumber)
	{
		std::cout << "najwieksza liczba to " << secondNumber << "\n";
	}
	else
	{
		std::cout << "najwieksza liczba to " << firstNumber << "\n";
	}
}

void task8()
{
	int firstNumber, secondNumber, thirdNumber;

	std::cout << "podaj liczbe 1\n";
	std::cin >> firstNumber;

	std::cout << "podaj liczbe 2\n";
	std::cin >> secondNumber;

	std::cout << "podaj liczbe 3\n";
	std::cin >> thirdNumber;
	
	if (thirdNumber > firstNumber && thirdNumber > secondNumber)
	{
		std::cout << "najwieksza liczba to " << thirdNumber << "\n";
	}
	else if (secondNumber > firstNumber)
	{
		std::cout << "najwieksza liczba to " << secondNumber << "\n";
	}
	else
	{
		std::cout << "najwieksza liczba to " << firstNumber << "\n";
	}
}

void task9()
{
	int firstNumber;
	std::cout << "Podaj liczbę:\n";
	std::cin >> firstNumber;

	std::cout << "Liczby w kolejnosci rosnacej\n";
	std::cout << firstNumber;
}

void task10()
{
	int firstNumber, secondNumber;
	std::cout << "podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe:\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
	{
		std::cout << "liczby w kolejnosci rosnacej:\n";
		std::cout << secondNumber << " ," << firstNumber;
	}
	else
	{
		std::cout << "liczby w kolejnosci rosnacej:\n";
		std::cout << firstNumber << " ," << secondNumber;
	}
}

void task11()
{
	int firstNumber, secondNumber, thirdNumber;
	std::cout << "podaj pierwsza liczbe:\n";
	std::cin >> firstNumber;
	std::cout << "podaj druga liczbe:\n";
	std::cin >> secondNumber;
	std::cout << "podaj trzecia liczbe\n";
	std::cin >> thirdNumber;

	if (thirdNumber >= firstNumber && thirdNumber >= secondNumber)
	{
		if (firstNumber > secondNumber)
		{
			std::cout << secondNumber << ", " << firstNumber << ", " << thirdNumber;
		}
		else
		{
			std::cout << firstNumber << ", " << secondNumber << ", " << thirdNumber;
		}
	}
	else
	{
		if (firstNumber > secondNumber)
		{
			if (thirdNumber > secondNumber)
			{
				std::cout << secondNumber << ", " << thirdNumber << ", " << firstNumber;
			}
			else if (thirdNumber < secondNumber)
			{
				std::cout << thirdNumber << ", " <<	secondNumber << ", " << firstNumber;
			}
		}
		else
		{
			if (thirdNumber > firstNumber)
			{
				std::cout << firstNumber << ", " << thirdNumber << ", " << secondNumber;
			}
			else if (thirdNumber < firstNumber)
			{
				std::cout << thirdNumber << ", " << firstNumber << ", " << secondNumber;
			}
		}
	}
}

//zadania

// Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe. Wyświetl odpowiedni komunikat.

void task12()
{
	long long a, b;
	std::cout << "podaj liczbe a\n";
	std::cin >> a;
	std::cout << "podaj liczbe b\n";
	std::cin >> b;

	if (a == b)
	{
		std::cout << "liczbt sa rowne";
	}
	else
	{
		std::cout << "liczby nie sa rowne";
	}
}

// Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona parzysta. Wyświetl odpowiedni komunikat.

void task13()
{
	long long number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;
	 
	int rest = number % 2;

	if (rest == 0)
	{
		std::cout << "liczba jest parzysta";
	}
	else
	{
		std::cout << "liczba nie jest parzysta";
	}
}

//Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.

void task14()
{
	long long a;
	std::cout << "podaj liczbe\n";
	std::cin >> a;
	long long b = a % 2;
	long long c = a % 2;

	if (b == 0 && c == 0)
	{
		std::cout << "liczba jest podzielna";
	}
	else
	{
		std::cout << "liczba nie jest podzielna";
	}

}

/*Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
BMI = masa / wzrost ^ 2
poniżej 16 - wygłodzenie
16 - 16.99 - wychudzenie
17 - 18.49 - niedowagę
18.5 - 24.99 - wagę prawidłową
25.0 - 29.9 - nadwagę
30.0 - 34.99 - I stopień otyłości
35.0 - 39.99 - II stopień otyłości
powyżej 40.0 - otyłość skrajną*/

void task15()
{
	double kg, m;
	std::cout << "mase w kg\n";
	std::cin >> kg;
	std::cout << "wzrost w m\n";
	std::cin >> m;

	double BMI = kg / ( m * m );

	if (BMI >= 40)
	{
		std::cout << "otyłosc skrajna\n";
	}
	else if (BMI <= 39.99 && BMI >= 35.0)
	{
		std::cout << "II stopien otylosci";
	}
	else if (BMI <= 34.99 && BMI >= 30.0)
	{
		std::cout << "I stopien otylosci\n";
	}
	else if (BMI <= 29.9 && BMI >= 25)
	{
		std::cout << "nadwaga\n";
	}
	else if (BMI <= 24.99 && BMI >= 18.5)
	{
		std::cout << "waga prawidlowa\n";
	}
	else if (BMI <= 18.49 && BMI >=17)
	{
		std::cout << "niedowaga\n";
	}
	else if (BMI <= 16.99 && BMI >= 16)
	{
		std::cout << "wychudzenie\n";
	}
	else if (BMI < 16)
	{
		std::cout << "wyglodzenie\n";
	}
}

//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.

void task16()
{
	int number;
	std::cout << "podaj liczbe calkowita od 1 do 7\n";
	std::cin >> number;

	if (number == 1)
	{
		std::cout << "poniedzialek";
	}
	else if (number == 2)
	{
		std::cout << "wtorek";
	}
	else if (number == 3)
	{
		std::cout << "sroda";
	}
	else if (number == 4)
	{
		std::cout << "czwartek";
	}
	else if (number == 5)
	{
		std::cout << "piatek";
	}
	else if (number == 6)
	{
		std::cout << "sobota";
	}
	else if (number == 7)
	{
		std::cout << "niedziela";
	}
}

// Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.

void task17()
{
	int number;
	std::cout << "podaj liczbe calkowita od 1 do 12\n";
	std::cin >> number;

	if (number == 1)
	{
		std::cout << "styczen";
	}
	else if (number == 2)
	{
		std::cout << "luty";
	}
	else if (number == 3)
	{
		std::cout << "marzec";
	}
	else if (number == 4)
	{
		std::cout << "kwiecien";
	}
	else if (number == 5)
	{
		std::cout << "piatek";
	}
	else if (number == 6)
	{
		std::cout << "sobota";
	}
	else if (number == 7)
	{
		std::cout << "niedziela";
	}
	else if (number == 8)
	{
		std::cout << "sroda";
	}
	else if (number == 9)
	{
		std::cout << "czwartek";
	}
	else if (number == 10)
	{
		std::cout << "piatek";
	}
	else if (number == 11)
	{
		std::cout << "sobota";
	}
	else if (number == 12)
	{
		std::cout << "niedziela";
	}
}

int main()
{
	//task1();
	task16();
}