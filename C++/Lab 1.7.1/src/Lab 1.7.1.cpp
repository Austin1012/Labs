//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float a = 2.3;
	float b = 2.3;
	float c = 2.123456;
	float d = 2.123456;
	float e = 2.123456;

	cout << a << endl;
	cout << fixed;
	cout << setprecision(2) << b << endl; // extra zero
	cout << setprecision(6) << c << endl;
	cout << setprecision(2) << d << endl;
	cout << setprecision(0) << e << endl;

			return 0;
}
