/*
ja4284_hw4_q3.cpp
Written by Jacob Altschul
*/

#include <iostream>
#include <cmath>
using namespace std;

const int BASE_TEN = 10;

int main() {
	//declare variables
	int userDecimal, binaryConverted, remainder, powInt;

	//Get decimal from user
	cout << "Enter decimal number:" << endl;
	cin >> userDecimal;

	//Write the main statement to the end user
	cout << "The binary representation of " << userDecimal << " is ";
	
	//initializing variables
	powInt = 0;
	binaryConverted = 0;
	remainder = 0;

	//while loop to calculate the binary number
	while (userDecimal != 0) {
		remainder = userDecimal % 2;
		userDecimal = userDecimal / 2;
		binaryConverted += remainder * pow(BASE_TEN, powInt);
		powInt += 1;
	}

	//Add calculated binary to output to user
	cout << binaryConverted << endl;

	return 0;
}