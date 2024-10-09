#include <iostream>
using namespace std;
#include <fstream>

void task1()
{
	string name;
	int age;
	cout << "podaj imie\n";
	cin >> name;

	cout << "podaj wiek\n";
	cin >> age;

	ofstream writeInFile;
	writeInFile.open("c:\\dane.txt");

	if (writeInFile.is_open() == true)
	{
		writeInFile << name;
		writeInFile << "\n";
		writeInFile << age;

		writeInFile.close();
	}
	else
		cout << "blad otwarcia";
}

int main()
{
	task1();
}