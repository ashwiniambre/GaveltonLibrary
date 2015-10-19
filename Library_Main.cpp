//
//  Library_Main.cpp
//  Gavelton Library
//
//  Created by Ashwini Ambre
//  Date : 9/10/2014.
// 

#include "SearchEngine.h"
#include "Media.h"
#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	SearchEngine se;
	int makeChoice = 0;
	//Take input for search keyword from user
	string input;
	vector<Media*> holdResults;//Hold result for particular search
	int count = 0;

	while (makeChoice != 5)
	{
		cout << "------------- Welcome to Gavelton Library!-----------------"<< endl;
		cout << "Enter Serach Keyword \n";
		cin >> input;
		cout << "\nPlease make a choice from following options for your entered keyword: \n";
		cout << " 1. Search by call number\n";
		cout << " 2. Search by title\n";
		cout << " 3. Search by subjects\n";
		cout << " 4. Search by other\n";
		cout << " 5. Exit the Serach Engine!\n";
		cin >> makeChoice;
		
		cin.ignore();

		switch (makeChoice)
		{
		case 1:
		{
			holdResults.clear();
			holdResults = se.searchByCallNumber_SE(input);
			holdResults = se.searchByCallNumber_SE(input);
			if (holdResults.size() == 0)
			{
				cout << "Sorry requested Media not found!! \n" << endl;
				cout << endl;
			}
			else
			{
				for (unsigned int i = 0; i < holdResults.size(); i++)
				{
					holdResults[i]->display();
				}
			}
			cin.clear();
					
			break;
		}

		case 2:
		{
			holdResults.clear();
			holdResults = se.searchByTitle_SE(input);
			if (holdResults.size() == 0)
			{
				cout << "Sorry requested Media not found!! \n" << endl;
				cout << endl;
			}
			else
			{
				for (unsigned int i = 0; i < holdResults.size(); i++)
				{
					holdResults[i]->display();
				}
			}
			cin.clear();

			break;
		}

		case 3:
		{
			holdResults.clear();
			holdResults = se.searchBySubjects_SE(input);
			if (holdResults.size() == 0)
			{
				cout << "Sorry requested Media not found!! \n" << endl;
				cout << endl;
			}
			else
			{
				for (unsigned int i = 0; i < holdResults.size(); i++)
				{
					holdResults[i]->display();
				}
			}
			cin.clear();

			break;
		}

		case 4:
		{
			holdResults.clear();
			holdResults = se.searchByOther_SE(input);
			if (holdResults.size() == 0)
			{
				cout << "Sorry requested Media not found!! \n" << endl;
				cout << endl;
			}
			else
			{
				for (unsigned int i = 0; i < holdResults.size(); i++)
				{
					holdResults[i]->display();
				}
			}
			cin.clear();

			break;
		}

		case 5:
			return 0;

		default:
		{
			cout << "\nPlease make a choice from folowing options for : \n";
			cout << " 1. Search by call number";
			cout << " 2. Search by title";
			cout << " 3. Search by subjects";
			cout << " 4. Search by other";
			cout << " 5. Exit the Serach Engine!";
			cin >> makeChoice;
			cout << "Enter Serach Keyword \n";
			cin >> input;
			cin.ignore();
		}
		}

		cout << "Continue Searching? \n";
		cout << " 1. No.\n";
		cout << " 2. Yes.\n";
		int makeChoiceExit;
		cin >> makeChoiceExit;
		cin.ignore();

		switch (makeChoiceExit)
		{
		case 1:
			return 0;

		case 2:
		{
			system("clear");
			break;
		}

		default:
		{
			cout << "Continue Searching? \n";
			cout << " 1. No.\n";
			cout << " 2. Yes.\n";
			cout << "Enter your Choice: \n";
			cin >> makeChoiceExit;
			cin.ignore();
		}
		}
	}
return 0;
}
