#include <iostream>
#include "Main.h"
using namespace std;

int bounce(int talet) 
{
	if (abs(talet) == 0)
	{
		cout << talet;
	}
	else
	{
		cout << talet << " ";
		bounce(talet - 1);
		cout << " " << talet;
	}
	return talet;
}
int bounce2(int talet)
{
	int n;
	n = (-1)*talet;
	while (talet > n && talet >= 0)
	{
		cout << talet << " ";
		talet = talet - 1;
	}
	while (talet >= n && talet < 0)
	{
		cout << " " << abs(talet);
		talet = talet - 1;
	}
	return 0;
}