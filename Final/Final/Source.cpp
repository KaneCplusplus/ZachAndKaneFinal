// Authors Zach Hirst and Kane Greenwalt
//5/4/18
// Final 

#include<iostream>
#include<string> 
#include<cstdlib>
#include<time.h>
#include<iomanip>
#include"AlienLevel.h"
using namespace std;

int main()
{
	int levelchoice;

	cout << " Welcome to Zach and Kane's C++ Final " << endl;
	cout << "                                              " << endl;
	cout << "     __         _____           _____         " << endl;
	cout << "    |  |       [ O   ]         [ O   ]        " << endl;
	cout << "    |  |      /[     ]        /[     ]        " << endl;
	cout << "    |  |       [_____]         [_____]        " << endl;
	cout << "    |__|       __| |___        __| |___       " << endl;
	cout << "     ||        |       |      |       |       " << endl;
	cout << "    / |        | |   | |      | |   | |       " << endl;
	cout << " _ /__|___     | |   | |      | |   | |       " << endl;
	cout << " |        |    |_|___|_|      |_|___|_|       " << endl;
	cout << " |        |      |   |          |   |         " << endl;
	cout << " |        |      | | |          | | |         " << endl;
	cout << " | _______|      | | |          | | |         " << endl;
	cout << " | |      |    __| | |__      __| | |__       " << endl; 
	cout << " | | Dell |   |____|____|    |____|____|      " << endl;
	cout << " |_|______|                                   " << endl;
	cout << "                                              " << endl;
	cout << " Select a level " << endl << " Level [1] - Easy \n Level [2] - Medium \n Level [3] - Hard \n Level [4] - Alien Survival " << endl;
	cin >> levelchoice;
	if (levelchoice = 1)
	{

	}
	else if (levelchoice = 2)
	{

	}
	else if (levelchoice = 3)
	{

	}
	else if (levelchoice = 4)
	{
		AlienLevel();
	}

	system("Pause");
	return 0;
}
