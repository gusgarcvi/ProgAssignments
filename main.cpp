#include <iostream>
#include <string>
#include <sstream>
#include "Main.h"
using namespace std;

int main()
{
	string mmchoice = ""; //main menu choice being a string instead of int, fixing all sorts of bugs
	while (true)
	{
		cout << "Main menu \n1. Sockerkaksrecept \n2. Bankloan \n3. Functions \n4. Dictionary \n5. Files \n";
		cout << "Enter a number (1-5) of your choice: \n";
		getline(cin, mmchoice); //getline gets all the words in the entered string, neato~
		if (mmchoice == "1")
		{sockerkaka();}
		else if (mmchoice == "2")
		{banklan();}
		else if (mmchoice == "3")
		{
			string bcho = "";
			cout << "Pick 1 for bounce \n";
			cout << "Pick 2 for bounce2 \n";
			cout << "Anything else to return to main menu \n";
			getline(cin, bcho);
			if (bcho == "1")
			{
				int bint;
				cout << "Number you want to bounce: \n";
				cin >> bint;
				bounce(bint);
			}
			else if (bcho == "2")
			{
				int bint;
				cout << "Number you want to bounce: \n";
				cin >> bint;
				bounce2(bint);
			}
			cout << " \n \nPress any key to return to the main menu" << endl;
			cin.get();
		}
		else if (mmchoice == "4")
		{
			MainDic dic;
			dic.mainDic();
		}
		else if (mmchoice == "5")
		{

		}
		else
		{
			cout << "Choose between 1-5. \n\n";
		}
	}
}