//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	int a;
	cout << "Please enter a value: ";
	cin >> a;


	int b;
	cout << "Please enter another value: ";
	cin >> b;


	float c = 1 / (float)a;
	float d = 1 / (float)b;

	float e = fabs (c-d);

	if (e < .0000001) {
		cout << "Results are equal ( by .0000001 epsilon)";

	}

	else {
		cout << "Results are not equal (by .0000001 epsilon)";
	}


	return 0;
}
