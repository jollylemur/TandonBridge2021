#include <iostream>
using namespace std;

double eApprox (int n);
//Takes input from the user and calculates Euler's number (e)

int main() {
	//Set cout precision per the homework requirements
	cout.precision(30);

	double userInteger;

	cout << "Please enter a positive interger: ";
	cin >> userInteger;

	//Example code from the homework
	//for (int n = 1; n <= 15; n++) {
	//	cout << "n = " << n << '\t' << eApprox(n) << endl;
	//}

	cout << eApprox(userInteger);

	return 0;
}

double eApprox(int n) {
	double eNumber = 1.0;
	double denominator = 1.0;
	for (int i = 1; i <= n; i++) {
		denominator *= i;
		eNumber += 1.0 / denominator;
	}
	return eNumber;
}