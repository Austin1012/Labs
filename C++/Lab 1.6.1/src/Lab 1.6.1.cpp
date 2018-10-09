//============================================================================
// Name        : Lab.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool answer;
	int value;

	cout << "Enter a value: ";
	cin >> value;

	answer = value >= 0 and value < 10;
	answer = answer or ((value * 2) < 20 and (value - 2) > -2);
	answer = answer or ((value - 1) > 1 and (value / 2) < 10);
	answer = answer or (value == 111);

	if (answer) {
		cout << "THAT'S TRUE :)";
	}
	else {
		cout << "THAT'S NOT TRUE:(";
	}






	return 0;
}
