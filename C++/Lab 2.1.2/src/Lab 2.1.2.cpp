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

	float grossprice, taxrate, netprice= 0, taxvalue= 0;

	cout << "Enter a gross price: ";
	cin >> grossprice;
	cout << "Enter a tax rate: ";
	cin >> taxrate;

	if (grossprice > 0){
		if (taxrate < 100){
			if (taxrate > 0) {
				netprice = grossprice / ((taxrate / 100) + 1);
				taxvalue = grossprice - netprice;
			}

		}
	}

	cout << "Netprice: " << netprice << endl;
	cout << "Tax value: " << taxvalue << endl;


	return 0;
}
