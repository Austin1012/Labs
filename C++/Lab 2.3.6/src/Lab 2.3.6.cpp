//============================================================================
// Name        : 6.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
// HEIGHT IS ONE TOO HIGH!!!!!!
	int s = 1;
	int h;
	cout << "Enter a height: ";
	cin >> h;// save for bottom row

	while (h <3 or h > 8){
		cout << "Try again: ";
		cin >> h;
	}
	int H = h;// use to decrement rows

	for (int b = 0; b<3; b++){
		for (int a = 0; a<H-1; a++)
			cout << " ";
		cout << "*";
		for (int j=0; j<H-1; j++)
			cout << " ";
	}
	H--;
	cout << endl;
	for (int l =0; l<h-1; l++){
		for (int c = 0; c<3; c++){
			for (int d = 0; d < H-1; d++)
				cout << " ";
			cout << "*";
			for (int e = 0; e<s; e++)
				cout << " ";

			cout << "*";
			for (int f = 0; f<H-1; f++)
				cout << " ";
		}
		H--;
		s+=2;
		cout << endl;
	}
	for (int i=0; i<3; i++)
		for (int g =0; g< h*2 -1; g++)
			cout << "*";
	cout << " ";

	return 0;
}
