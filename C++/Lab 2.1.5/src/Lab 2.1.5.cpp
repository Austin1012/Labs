//============================================================================
// Name        : 5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int year;
	cout << "Year: " << endl;
	cin >> year;

	int a = year % 19;
	int b = year % 4;
	int c = year % 7;
	a *= 19;
	a += 24;
	int d = a % 30;
	int e = ((2* b) + (4 * c) + (6 * d) + 5) % 7;
	int Easter_Day = e + d;

	if (Easter_Day < 10){
		cout << "March " << d + e + 22 << endl;
	}
	else{
		cout << "April " << d + e - 9 << endl;
	}



	return 0;
}
