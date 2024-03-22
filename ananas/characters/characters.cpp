#include <iostream>

using namespace std;

//napisz program ktory pobierze znak od uzytkownika i pobierze go.
void task1()
{
	char characterFromUser;
	cout << "napisz pojedynczy znak\n";
	cin >> characterFromUser;

	cout << characterFromUser;

	characterFromUser = 97;
	characterFromUser = 'a';
	characterFromUser = 'a' + 1;
}

int main()
{
	task1();;

}