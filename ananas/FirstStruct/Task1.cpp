#include <iostream>
using namespace std;

//napisz program kt�ry pobierze wsp�rz�dne 2D i obliczy jak daleko jest ten punkt od �rodka uk�adu wsp�rz�dnych
void task1()
{
	double x, y;
	cout << "podaj x\n";
	cin >> x;

	cout << "podaj y\n";
	cin >> y;

	double distance = sqrt(x * x + y * y);

	cout << "odleglosc od srodka to " << distance << "\n";
}