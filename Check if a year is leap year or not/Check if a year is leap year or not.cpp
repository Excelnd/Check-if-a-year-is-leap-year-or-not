// Check if a year is leap year or not.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int year;
	cout << "Enter a year: ";

	int t=10;
	while (t--) {
		cin >> year;
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if(year % 400 == 0)
					cout << year << " is a leap year\n";
				else cout << year << " is not a leap year\n";
			}
			else 
				cout << year << " is a leap year\n";
		}
		else 
			cout << year << " is not a leap year\n";
	}
    return 0;
}

