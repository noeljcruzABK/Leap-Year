// Write a program to check and return whether it is currently a leap year.

#include <iostream>
using namespace std;

string checkLeapYear(int year) {
	if (year % 400 == 0) {
		return "a leap year.";
	}
	else if (year % 100 == 0) {
		return "not a leap year.";
	}
	else if (year % 4 == 0) {
		return "a leap year.";
	}
	else {
		return "not a leap year.";
	}
}

int main()
{
	int input;

	cout << "- Leap Year Checker -" << endl;
	cout << "Please enter a year to determine if it is a leap year:" << endl;
	cin >> input;
	cout << input << " is " << checkLeapYear(input) << endl;
}
