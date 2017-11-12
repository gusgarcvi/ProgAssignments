#include <iostream>//std::cout osv
#include "Main.h"
#include <vector> //std::vector
#include <algorithm>//for std::find
#include <iterator> //for std::begin,std::end
#include <string>
using namespace std;
int menu()
{cout << "\n Menu for dictionary \n\n 1: Insert\n 2: Lookup\n 3: Exit\n";return 0;}
int insert(std::vector<std::string> slaUpp, std::vector<std::string> definUpp) //Insert new words and definitions
{
	cout << "Word you want to insert into the dictionary: " << endl;
	string chword;//Chosen word
	string chdesc;//Chosen words description
	cin.get();
	getline(cin, chword);
	std::vector<string>::iterator exists;

	exists = find (slaUpp.begin(), slaUpp.end(), chword);
	if (exists != slaUpp.end())
	{
		cout << "Word [" << *exists << "] is already in the dictionary";
	}
	else
	{
		slaUpp.push_back(chword);
		cout << "Description of the word: \n" << endl;
		getline(cin, chdesc);
		definUpp.push_back(chdesc);
		cout << chword << " : " << chdesc << "\n Press a key to return to Menu for dictionary" << endl;
		cin.get();
	}
	return 0;
}
int sear() //Search the definitions for the words
{
	return 0;
}
int MainDic::mainDic()//The main function
{
	int choice;
	while (true)
	{
		menu();
		cin >> choice;
		if (choice == 1)
		{
			insert(slaUpp, definUpp);
		}
		else if (choice == 2)
		{

		}
		else if (choice == 3)
		{
			cout << "Bye bye" << endl;
			cin.get(); cin.get();
			break;
		}
		else
		{
			cout << "Choose 1,2, or 3. \n" << endl;
		}

	}
	return 0;
}
