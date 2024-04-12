#include <iostream>

using namespace std;

//napisz program ktory pobierze znak od uzytkownika i pobierze go.
void task1()
{
	char characterFromUser;
	cout << "napisz pojedynczy znak.\n";
	cin >> characterFromUser;

	cout << characterFromUser;

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1;
}

//napisz program ktory sprawdzi czy to mala litera alfabetu czy duza
void task2()
{
	char characterFromUser;
	cout << "podaj znak\n";
	cin >> characterFromUser;

	//v1
	if (characterFromUser <= 'z' && characterFromUser >= 'a')
	{
		cout << "podales mala litere alfabetu";
	}
	else
	{
		cout << "podales inny znak";
	}

	//v2
	if (characterFromUser <= 122 && characterFromUser >= 97)
	{
		cout << "podales mala litere alfabetu";
	}
	else
	{
		cout << "podales inny znak";
	}
}

//napisz program który poprosi cię o twoje imię i przywita
void task3()
{
	string nameFromUser;
	cout << "podaj imie\n";
	cin >> nameFromUser;

	cout << "witaj " << nameFromUser;
}

//program ktory sprawdzi czy haslo jest poprawne
void task4()
{
	string passwordFromUser;
	cout << "podaj haslo\n";
	cin >> passwordFromUser;

	if (passwordFromUser == "pineapple")
	{
		cout << "haslo poprawne";
	}
	else
	{
		cout << "haslo niepoprawne";
	}
}

//napisz program ktory sprawdzi ile jest liter a
void task5()
{
	string charactersFromUser;
	cout << "podaj tekst\n";
	cin >> charactersFromUser;

	int counter = 0, textLength = charactersFromUser.length();

	cout << "ostatni znak " << charactersFromUser[textLength - 1] << "\n";

	for (int i = 0; i < textLength; i++)
	{
		if (charactersFromUser[i] == 'a')
		{
			counter++;
		}
	}
	cout << "tekst ma " << counter << " malych liter a";
}

//napisz program ktory prosi o haslo i nie przepusci jezeli haslo jest nieprawidlowe
void task6()
{
	string passwordFromUser;

	do
	{
		cout << "podaj haslo\n";
		cin >> passwordFromUser;
	} while (passwordFromUser != "pineapple");

	cout << "poprawne haslo";
}

//podaj program ktory wyswietli ile jest samoglosek i spolglosed
void task7()
{
	string charactersFromUser;
	cout << "podaj tekst\n";
	cin >> charactersFromUser;

	int length = charactersFromUser.length(), counter = 0, counterTwo = 0;

	for (int i = 0; i < length; i++)
	{
		if (charactersFromUser[i] == 'a' ||
			charactersFromUser[i] == 'e' ||
			charactersFromUser[i] == 'i' ||
			charactersFromUser[i] == 'o' ||
			charactersFromUser[i] == 'u' ||
			charactersFromUser[i] == 'y')
		{
			counter++;
		}
		else
		{
			counterTwo++;
		}
	}

	cout << "jest" << counter << "samoglosek\n";
	cout << "jest" << counterTwo << "innych znakow\n";
}

/*
*
*
*
*
* */

//Poproś użytkownika o wprowadzenie liczby całkowitej w systemie dziesiętnym.Następnie skonwertuj tę liczbę na system dwójkowy(binarny) i wyświetl wynik.
void task8()
{
	int numberFromUser, rest = 0;
	cout << "podaj liczbe calkowita\n";
	cin >> numberFromUser;

	int tmpNumber = numberFromUser;
	string binary;

	do
	{
		rest = numberFromUser % 2;
		numberFromUser = numberFromUser / 2;
		if (rest == 0)
		{
			binary = '0' + binary;
		}
		else
		{
			binary = '1' + binary;
		}
	} while (numberFromUser != 0);

	std::cout << "liczba to " << tmpNumber << "    binarnie " << binary;
}

//Program sprawdzający czy podany ciąg znaków jest palindromem(czyli takim, który czytany od tyłu jest taki sam, jak czytany od przodu, np. "kajak")
void task9()
{
	string charactersFromUser, reversedCharacters;
	cout << "podaj znaki\n";
	cin >> charactersFromUser;

	int length = charactersFromUser.length();

	for (int i = 0; i < length; i++)
	{
		reversedCharacters = charactersFromUser[i] + reversedCharacters;
	}
	if (charactersFromUser == reversedCharacters)
	{
		cout << "liczba jest palindromem " << reversedCharacters;
	}
	else
	{
		cout << "liczba nie jest palindromem " << charactersFromUser << "    " << reversedCharacters;
	}
}

// Program sprawdzający czy podane dwa słowa są anagramami(czyli takimi, które zawierają te same litery, ale w innym układzie, np. "klasa" i "salka")
void task10()
{
	string charactersFromUser, charactersFromUserTwo;
	cout << "podaj pierwszy wyraz\n";
	cin >> charactersFromUser;

	cout << "\npodaj drugi wyraz\n";
	cin >> charactersFromUserTwo;

	int length = charactersFromUser.length();
	int lengthTwo = charactersFromUserTwo.length();

	bool isAnagram = false;

	if (length == lengthTwo)
	{
		for (int i = 0; i < length; i++)
		{
			isAnagram = false;
			for (int j = 0; j < lengthTwo; j++)
			{
				if (charactersFromUser[i] == charactersFromUserTwo[j])
				{
					charactersFromUserTwo[j] = ' ';
					isAnagram = true;
					break;
				}
			}
			if (!isAnagram)
			{
				break;
			}
		}
	}
	if (isAnagram)
	{
		cout << "liczba jest anagramem";
	}
	else
	{
		cout << "liczba nie jest anagramem";
	}
}

//Program implementujący algorytm szyfrowania Cezara(proste szyfrowanie, w którym każdy znak w tekście jest zastępowany innym znakiem, przesuniętym o stałą liczbę pozycji w alfabecie).
void task11()
{
	string charactersFromUser, codedCharacters = " ", temp = " ";
	cout << "podaj wyraz\n";
	cin >> charactersFromUser;

	int length = charactersFromUser.length();
	for (int i = 0; i < length; i++)
	{
		if (charactersFromUser[i] >= 'a' &&
			charactersFromUser[i] <= 'x')
		{
			temp = charactersFromUser[i] + 2;
			codedCharacters = codedCharacters + temp;
		}
		else
		{
			temp = charactersFromUser[i] + 232;
			codedCharacters = codedCharacters + temp;
		}
	}
	cout << charactersFromUser << "    zaszyfrowane: " << codedCharacters;
}

int main()
{
	task11();
}