﻿#include <iostream>

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
	
	

int main()
{
	task5();
}