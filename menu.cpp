// scarything.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <string>
using namespace std;
int main()
{
	string password;
	string options;
	bool legion = false;
	bool onoff = false;
	cout << "Hello we are all we are legion we are few and we are many" << endl;
	cout << "enter password:  ";
	cin >> password;
	while (onoff == false)
	{
		if (password == "Trump2020")
		{
			cout << "******************************************welcome**************************************************" << endl;
			cout << "  Trump2020 Trump2020    Trump2020    Trump2020    Trump2020    Trump2020    Trump2020    Trump2020" << endl;                                                                                                                                                                                                                                                      
			cout << "*******************************************    ****************************************************" << endl;
			cout << "1 bio" << endl;
			cout << "2 we are many" << endl;
			cout << "3 members" << endl;
			cout << "4 done" << endl;
			cout << "enter what you would like to see:  ";
			cin >> options;
			if (options == "1")
			{
				cout << "we are legion we are many we are no one and we are everyone this is a program desined to let in only the true men who serve on god indidiual" << endl;
				cout << "enter what you would like to see:  ";
					cin >> options;
			}
			if (options == "2")
			{
				while (legion == false)
					cout << "we are legion expect us" << endl;
			}
			if (options == "3")
			{
				cout << "currently members are caleb and issac" << endl;
				cout << "enter what you would like to see:  ";
				cin >> options;
			}
			if (options == "4")
			{
				cout << "the program will now end!";
				return 0;
				onoff = true;
			}
		}
		else
		{
			cout << "you are not the one neo" << endl;
			onoff = true;
		}
	}

	
	
	}

