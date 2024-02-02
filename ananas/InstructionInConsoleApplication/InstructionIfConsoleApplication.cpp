#include <iostream>
/*
*
*
* 

* 

* 
*
*
* 
* 
*
* 
* 
* 
* 

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
	long long numberOne, numberTwo;
	std::cout << "podaj liczbe a\n";
	std::cin >> numberOne;
	std::cout << "podaj liczbe b\n";
	std::cin >> numberTwo;

	if (numberOne == numberTwo)
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
	long long number;
	std::cout << "podaj liczbe\n";
	std::cin >> number;
	long long restOfDividingByThree = number % 3;
	long long restOfDividingByFive = number % 5;

	if (restOfDividingByThree == 0 && restOfDividingByFive == 0)
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
	double weightInKg, heightInMeter;
	std::cout << "mase w kg\n";
	std::cin >> weightInKg;
	std::cout << "wzrost w m\n";
	std::cin >> heightInMeter;

	double bmi = weightInKg / ( heightInMeter * heightInMeter );

	if (bmi >= 40)
	{
		std::cout << "otyłosc skrajna\n";
	}
	else if (bmi <= 39.99 && bmi >= 35.0)
	{
		std::cout << "II stopien otylosci";
	}
	else if (bmi <= 34.99 && bmi >= 30.0)
	{
		std::cout << "I stopien otylosci\n";
	}
	else if (bmi <= 29.9 && bmi >= 25)
	{
		std::cout << "nadwaga\n";
	}
	else if (bmi <= 24.99 && bmi >= 18.5)
	{
		std::cout << "waga prawidlowa\n";
	}
	else if (bmi <= 18.49 && bmi >=17)
	{
		std::cout << "niedowaga\n";
	}
	else if (bmi <= 16.99 && bmi >= 16)
	{
		std::cout << "wychudzenie\n";
	}
	else if (bmi < 16)
	{
		std::cout << "wyglodzenie\n";
	}
}

//Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.

void task16()
{
	int dayOfTheWeek;
	std::cout << "podaj liczbe calkowita od 1 do 7\n";
	std::cin >> dayOfTheWeek;

	if (dayOfTheWeek == 1)
	{
		std::cout << "poniedzialek";
	}
	else if (dayOfTheWeek == 2)
	{
		std::cout << "wtorek";
	}
	else if (dayOfTheWeek == 3)
	{
		std::cout << "sroda";
	}
	else if (dayOfTheWeek == 4)
	{
		std::cout << "czwartek";
	}
	else if (dayOfTheWeek == 5)
	{
		std::cout << "piatek";
	}
	else if (dayOfTheWeek == 6)
	{
		std::cout << "sobota";
	}
	else if (dayOfTheWeek == 7)
	{
		std::cout << "niedziela";
	}
/*
	switch(dayOfTheWeek)
	{
	case 1:
		std::cout << "poniedzialek";
		brake;
	itd.
	[jezeli zadne]
	default:
		std::cout << "nie ma takiego dnia tygodnia";
		brake;
	}
*/
}

// Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.

void task17()
{
	int numberOfMonth;
	std::cout << "podaj liczbe calkowita od 1 do 12\n";
	std::cin >> numberOfMonth;

	if (numberOfMonth == 1)
	{
		std::cout << "styczen";
	}
	else if (numberOfMonth == 2)
	{
		std::cout << "luty";
	}
	else if (numberOfMonth == 3)
	{
		std::cout << "marzec";
	}
	else if (numberOfMonth == 4)
	{
		std::cout << "kwiecien";
	}
	else if (numberOfMonth == 5)
	{
		std::cout << "maj";
	}
	else if (numberOfMonth == 6)
	{
		std::cout << "czerwiec";
	}
	else if (numberOfMonth == 7)
	{
		std::cout << "lipiec";
	}
	else if (numberOfMonth == 8)
	{
		std::cout << "sierpien";
	}
	else if (numberOfMonth == 9)
	{
		std::cout << "wrzesien";
	}
	else if (numberOfMonth == 10)
	{
		std::cout << "pazdziernik";
	}
	else if (numberOfMonth == 11)
	{
		std::cout << "listopad";
	}
	else if (numberOfMonth == 12)
	{
		std::cout << "grudzien";
	}
}

// Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny. Wyświetl odpowiedni komunikat.

void task18()
{
	int year;
	std::cout << "podaj rok\n";
	std::cin >> year;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		std::cout << "jest to rok przestepny";
	}
	else
	{
		std::cout << "nie jest to rok przestepny";
	}
}

// Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną. Wyświetl wynik.

void task19()
{
	double number;
	std::cout << "podaj wartosć\n";
	std::cin >> number;

	double absoluteValue;

	if (number >= 0)
	{
		absoluteValue = number;
	}
	else
	{
		absoluteValue = -number;
	}
	
	
	std::cout << absoluteValue;
}	

//Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia. Wyświetl odpowiedni komunikat.

void task20()
{
	int age;
	std::cout << "podaj wiek";
	std::cin >> age;

	if (age >= 18)
	{
		std::cout << "osoba jest dorosla";
	}
	else
	{
		std::cout << "osoba nie jest dorosla";
	}
}

//Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt. Wyświetl odpowiedni komunikat.

void task21()
{
	int firstLengthOfSide, secondLengthOfSide, thirdLengthOfSide;
	std::cout << "podaj pierwsza dlugosc";
	std::cin >> firstLengthOfSide;
	std::cout << "podaj druga dlugosc";
	std::cin >> secondLengthOfSide;
	std::cout << "podaj trzecia dlugosc";
	std::cin >> thirdLengthOfSide;

	if (firstLengthOfSide > secondLengthOfSide && firstLengthOfSide > thirdLengthOfSide)
	{
		if (firstLengthOfSide > thirdLengthOfSide + secondLengthOfSide)
		{
			std::cout << "nie mozna zbudowac trojkata";
		}
		else
		{
			std::cout << "mozna zbudowac trojkat";
		}
	}
	else if(thirdLengthOfSide > firstLengthOfSide && thirdLengthOfSide > secondLengthOfSide)
	{
		if (thirdLengthOfSide > firstLengthOfSide + secondLengthOfSide)
		{
			std::cout << "nie mozna zbudowac trojkata";
		}
		else
		{
			std::cout << "mozna zbudowac trojkat";
		}
	}
	else if (secondLengthOfSide > firstLengthOfSide && secondLengthOfSide > thirdLengthOfSide)
	{
		if (secondLengthOfSide > firstLengthOfSide + thirdLengthOfSide)
		{
			std::cout << "nie mozna zbudowac trojkata";
		}
		else
		{
			std::cout << "mozna zbudowac trojkat";
		}
	}
	else
	{
		std::cout << "nie mozna zbudowac trojkata";
	}
}

//Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)

void task22()
{
	int grade;
	std::cout << "podaj liczbe od 1 do 6";
	std::cin >> grade;

	if (grade == 1)
	{
		std::cout << "niedostateczny";
	}
	else if (grade == 2)
	{
		std::cout << "dopuszczajacy";
	}
	else if (grade == 3)
	{
		std::cout << "dostateczny";
	}
	else if (grade == 4)
	{
		std::cout << "dobry";
	}
	else if (grade == 5)
	{
		std::cout << "bardzo dobry";
	}
	else if (grade == 6)
	{
		std::cout << "celujacy";
	}
}

////Napisz program, który poprosi użytkownika o podanie oceny w skali 100-punktowej i przeliczy ją na ocenę procentową w przedziale od 0 do 100. Wyświetl wynik.

void task23()
{
	int points;
	std::cout << "podaj ilosc punktow w zakresie od 1 do 100";
	std::cin >> points;

	if (points >= 0 && points <= 29)
	{
		std::cout << "niedostateczny";
	}
	else if (points >= 30 && points <= 49)
	{
		std::cout << "dopuszczajecy";
	}
	if (points >= 50 && points <= 69)
	{
		std::cout << "dostateczny";
	}
	else if (points >= 70 && points <= 89)
	{
		std::cout << "dobry";
	}
	if (points >= 90 && points <= 95)
	{
		std::cout << "bardzo dobry";
	}
	else if (points >= 96 && points <= 100)
	{
		std::cout << "celujacy";
	}
}

//Program sprawdzający czy podana data jest poprawna (np. sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)

void task25()
{
	int year, month, day;
	std::cout << "podaj date(dzien, miesiac, rok)\n";
	std::cin >> day >> month >> year;

	if (day >= 1 && day <= 31 &&
		month >= 1 && month <= 12)
	{
		std::cout << "jest to prawidlowa data";
	}
	else
	{
		std::cout << "nie jest to prawidlowa data";
	}
}

//napisz program ktory wczyta od uzytkownika liczbe dodarina a

void task26()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	while(number < 0)
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number; 
	}

	std::cout << "podano liczbe " << number << "\n";
}	

void task27()
{
	int number;
	std::cout << "podaj liczbe dodatnia\n";
	std::cin >> number;

	do
	{
		std::cout << "podaj liczbe dodatnia\n";
		std::cin >> number;
	} while (number < 0);

	std::cout << "podano liczbe " << number << "\n";
}

int main()
{
	//task1();
	task26();
}