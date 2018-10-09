//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {

	int i, j, k;



	cout << "Enter i: \n";
	cin >> i;
	cout << "Enter j: \n";
	cin >> j;

	i = i + 2;
	j = j - i;
	k = i / j;
	k = k + k;
	k = k - 1;
	j = k % i;
	k = k + i + k;
	k = k + k / j ;
	k = k * k * k;
	k = k + (i * j);




	cout << k;
	return 0;
}
