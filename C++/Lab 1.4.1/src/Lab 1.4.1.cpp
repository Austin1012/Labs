//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	float pi = 3.14159265359;
	float y;
	float x = 1.0;

	cout << "Enter value for x: ";
	cin >> x;

	float x2 = x*x;

	float pi2 = pi*pi;



	cout << endl;

	y = x2/(pi2*(x2 + .5))*(1 + (x2/(pi2*(x2 - .5)*(x2 - .5))));

		cout << "y = " << y;
	return 0;
}
