#include <iostream>
#include "Main.h"
using namespace std;

int banklan()
{
	int P;
	float r;
	int a;
	cout << "Bankloan" << endl;
	cout << "How big is the loan?(in kr)" << endl;
	cin >> P;
	cout << "How much interest?(in percent) \n";
	cin >> r;
	cout << "For how long?(in years) \n";
	cin >> a;
	cout << "The total amount after " << a << " years is " << P + ((a + 1)*P*r / 200.0) << "kr. \n" << endl;
	cout << "Press any key to return to the main menu" << endl;
	cin.get(); cin.get();
	return 0;
}