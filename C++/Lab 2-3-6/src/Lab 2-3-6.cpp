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

	int h;
	int s = 1;
	cout << "Enter a pyramid height: ";
	cin >> h;

	if (h <= 2 or h >=9){
		cout << "Try a number between 3 and 8: ";
		cin >> h;
	}
	int H = h;

	for (int a = 0; a<3; a++){
		for (int g=0; g< H-1;g++)
			cout << " ";
		cout << "*";
		for (int i=0; i<H-1; i++)
			cout << " ";
	}

	cout << endl;
	H--;


	for(int b = 0; b < H; b++){
		for (int k=0; k<3; k++){
			for(int c = 0; c < (H-1); c++)
				cout << " ";
			cout << "*";
			for(int d = 0; d < s; d++)
				cout << " ";
			cout << "*" ;
			for (int j = 0; j<H-1; j++)
				cout << " ";


		}
		cout << endl;
		H--;
		s+=2;
	}

	for (int A=0; A<3; A++){
		for(int f = 0; f< h*2-1; f++)
			cout << "*";
	}
	return 0;
}
