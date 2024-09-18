#include <iostream>
using namespace std;

struct point
{
	double x;
	double y;
};

//napisz program który pobierze wspó³rzêdne 2D i obliczy jak daleko jest ten punkt od œrodka uk³adu wspó³rzêdnych
void getCoordinate(double& x, double& y)
{
	cout << "podaj x";
	cin >> x;

	cout << "podaj y";
	cin >> y;
}

void task1()
{
	point firstPoint;
	//point secondPoint;
	firstPoint.x = 5;
	//double x, y;

	getCoordinate(x, y);

	double distance = sqrt(x * x + y * y);

	cout << "odleglosc od srodka to " << distance << "\n";
}