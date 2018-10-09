//============================================================================
// Name        : 3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a;
	cout << "First number: ";
	cin >> a;
	if (a >= 1) {
		if (a <= 255){

		}
		else {
			cout << "I'm sorry, please input a number between 1 and 255: \n";
			cin >> a;
		}
	}
	else {
		cout << "I'm sorry, please input a number between 1 and 255: \n";
		cin >> a;
	}

	int b;
	cout << "Second number: ";
	cin >> b;
	if (b >= 1) {
		if (b <= 255){

		}
		else {
			cout << "I'm sorry, please input a number between 1 and 255: \n";
			cin >> b;
		}
	}
	else {
		cout << "I'm sorry, please input a number between 1 and 255: \n";
		cin >> b;
	}

	int c;
	cout << "Third number: ";
	cin >> c;
	if (c >= 1) {
		if (c <= 255){

		}
		else {
			cout << "I'm sorry, please input a number between 1 and 255: \n";
			cin >> c;
		}
	}
	else {
		cout << "I'm sorry, please input a number between 1 and 255: \n";
		cin >> c;
	}

	int d;
	cout << "Final number: ";
	cin >> d;
	if (d >= 1) {
		if (d <= 255){

		}
		else {
			cout << "I'm sorry, please input a number between 1 and 255: \n";
			cin >> d;
		}
	}
	else {
		cout << "I'm sorry, please input a number between 1 and 255: \n";
		cin >> d;
	}

	cout << a << "." << b << "." << c << "." << d;
	return 0;
}
