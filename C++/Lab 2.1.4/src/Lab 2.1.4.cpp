//============================================================================
// Name        : 4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int year = 0;
	int month = 0;
	int day = 0;

	cout << "Year: ";
	cin >> year;
	cout << "Month: ";
	cin >> month;
	cout << "Day: ";
	cin >> day;



	if (year < 1901){
		cout << "Please enter a year between 1901 and 2100: ";
		cin >> year;
		while (year < 1901) {
			cout << "Try again: ";
			cin >> year;
		}
	}
	if (year > 2100){
		cout << "Please enter a year between 1901 and 2000: ";
		cin >> year;
		while (year > 2100){
			cout << "Try again: ";
			cin >> year;
		}
	}

	if (month == 2) {
		if (year % 4 == 0){
			if (day == 29){
			}
		}
		else if (day > 28){
			cout << "There are only 28 days in February! Please try again: ";
			cin >> day;
			while (day > 28){
				cout << "Please try again: ";
				cin >> day;
			}

		}
		else if (day <= 0){
			cout << "We need a valid number to complete the calculations: ";
			cin >> day;
			while (day <= 0){
				cout << "Your only wasting your own time, try again: ";
				cin >> day;
			}
		}
	}
	if (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12){
		while (day >= 32){
			cout << "There are only 31 days in this month, please try again: ";
			cin >> day;
		while (day <= 0){
				cout << "We need a valid number to complete the calculations: ";
				cin >> day;
			}
		}
	}
	if (month == 4 or month == 6 or month == 9 or month == 11){
		while (day > 30){
			cout << "There are only 30 days in this month, please try again: ";
			cin >> day;
		}
	}

	if (month > 12){
		year += month / 12;
		month = month % 12;
	}

	month -= 2;


	if (month <= 0){
		year--;
		month += 12;
	}
	month *= 83;
	month /= 32;
	month += day;
	month += year;
	month += (year / 4);
	month -= (year / 100);
	month += (year / 400);
	int weekday = month % 7;


	if (weekday == 0){
		cout << "Sunday";
	}
	else if (weekday == 1){
		cout << "Monday";
	}
	else if (weekday == 2){
		cout << "Tuesday";
	}
	else if (weekday == 3){
		cout << "Wednesday";
	}
	else if (weekday == 4){
		cout << "Thursday";
	}
	else if (weekday == 5){
		cout << "Friday";
	}
	else if (weekday == 6){
		cout << "Saturday";
	}


	return 0;
}
