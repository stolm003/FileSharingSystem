// StringUpper.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int root = 25;
	int floor = 0;
	int cealing = 1000;
	int half = 0;
	int sqr = 0;

	bool go = true;

	while (go) {
		half = (cealing - floor) / 2;
		cout << half << endl;
		if ((half * half) < root) {
			cealing = half;
		}
		else if ((half*half) > root) {
			floor = half;
		}
		else {
			go = false;
		}
	}

	cout << "The square root is: " << half << endl;


}

