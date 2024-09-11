#include <iostream>
using namespace std;

//napisz program który pobierze wspó³rzêdne 2D i obliczy jak daleko jest ten punkt od œrodka uk³adu wspó³rzêdnych
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