/*
ja4284_hw3_q2.cpp
Written by Jacob Altschul
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, currentStatus;
	int graduationYear, currentYear, graduationYearDifference;

	//Gather information from user
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your graduation year: ";
	cin >> graduationYear;
	cout << "Please enter current year: ";
	cin >> currentYear;

	graduationYearDifference = graduationYear - currentYear;

	if (graduationYearDifference == 4) {
		currentStatus = "a Freshman";
	}
	else if (graduationYearDifference == 3) {
		currentStatus = "a Sophomore";
	}
	else if (graduationYearDifference == 2) {
		currentStatus = "a Junior";
	}
	else if (graduationYearDifference == 1) {
		currentStatus = "a Senior";
	}
	else if (graduationYearDifference <= 0) {
		currentStatus = "a Graduate";
	}
	else if (graduationYearDifference > 4) {
		currentStatus = "not in college yet";
	}
	//Output current status to user
	cout << name << ", you are " << currentStatus;
	return 0;
}