#include <iostream>
using namespace std;

struct point
{
	double x;
	double y;
};

//napisz program kt�ry pobierze wsp�rz�dne 2D i obliczy jak daleko jest ten punkt od �rodka uk�adu wsp�rz�dnych
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