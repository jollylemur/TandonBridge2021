/*
ja4284_hw5_q1.cpp
Written by Jacob Altschul
*/

#include <iostream>
using namespace std;

int main() {
	int userInteger, numberofRows, iteration, delta, number;

	cout << "Please enter a positive integer:" << endl;
	cin >> userInteger;

 
	for (numberofRows = 1; numberofRows <= userInteger; numberofRows++) {
		if (userInteger == 1) {
			cout << userInteger;
		}
		for (iteration = 1, delta = numberofRows, number = 1; number < (userInteger * numberofRows); iteration++) {
			number = iteration * delta;
			cout << number << "\t";
		}
		cout << endl;
	}


	return 0;
}