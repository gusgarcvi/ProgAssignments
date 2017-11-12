#include <iostream>
#include "Main.h"
using namespace std;

int sockerkaka()
{
	int antal;
	cout << "Sockerkaksrecept" << endl;
	cout << "Number of people this recepie is for: \n" << endl;
	cin >> antal;
	if (antal < 2)
	{
		cout << "1 st egg \n";
	}
	else
	{
		cout << antal * 3 / 4 << "st egg \n";
	}
	cout << antal * 3.0 / 4 << "dl sugar \n";
	cout << antal * 1.0 / 2 << "tsk vaniljsugar \n";
	cout << antal * 1.0 / 2 << "tsk bakingpowder \n";
	cout << antal * 3.0 / 4 << "dl flour \n";
	cout << antal * 75.0 / 4 << "g butter \n";
	cout << antal * 1.0 / 4 << "dl water \n" << endl;
	cout << "Lubricate and broth the crow with 10g butter and 0.75g breadcrumbs \n" << endl;
	cout << "Press any key to return to the main menu" << endl;
	cin.get(); cin.get();
	return 0;
}

