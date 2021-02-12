/*
ja4284_hw4_q2.cpp
Written by Jacob Altschul
*/

#include <iostream>
using namespace std;

int main() {
	int userDecimal;

	//Get decimal from user
	cout << "Enter decimal number:" << endl;
	cin >> userDecimal;
	
	//Output the first part to user
	cout << userDecimal << " is ";
	while (userDecimal > 0) {
		//Calculate M (M = 1000)
		if (userDecimal >= 1000) {
			userDecimal = userDecimal - 1000;
			cout << "M";
		}
		//Calculate D (D = 500)
		else if ((userDecimal >= 500) && (userDecimal < 1000)) {
			userDecimal = userDecimal - 500;
			cout << "D";
		}
		//Calculate C (M = 100)
		else if ((userDecimal >= 100) && (userDecimal < 500)) {
			userDecimal = userDecimal - 100;
			cout << "C";
		}
		//Calculate L (L = 50)
		else if ((userDecimal >= 50) && (userDecimal < 100)) {
			userDecimal = userDecimal - 50;
			cout << "L";
		}
		//Calculate X (X = 10)
		else if ((userDecimal >= 10) && (userDecimal < 50)) {
			userDecimal = userDecimal - 10;
			cout << "X";
		}
		//Calculate V (V = 5)
		else if ((userDecimal >= 5) && (userDecimal < 10)) {
			userDecimal = userDecimal - 5;
			cout << "V";
		}
		//Calculate I (I = 1000)
		else if ((userDecimal >= 1) && (userDecimal < 5)) {
			userDecimal = userDecimal - 1;
			cout << "I";
		}
	}

	cout << endl;

	return 0;
}