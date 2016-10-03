// StringUpper.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool done = true;
	int a = 0;
	int b = 1000;
	int c = -1;
	int cOld;
	int x = 9;

	do {
		cOld = c;
		c = (a + b) / 2;
		if ((c*c) == x)
		{
			done = false;
		}
		else if ((c*c) < x)
		{
			a = c;
		}
		else {
			b = c;
		}
		
	} while (done && c != cOld);

	cout << c << endl;

	return 0;

}

