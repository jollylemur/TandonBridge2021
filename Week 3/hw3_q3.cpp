#include <iostream>
#include <cmath> //required for sqrt function
using namespace std;

int main() {
	float rawValueA, rawValueB, rawValueC, discriminantResult, quadraticValue, sqrtDiscriminantResult, positiveQuadraticValue, negativeQuadraticValue;

	//Get input from user for values for A, B, and C
	cout << "Please enter value of a: ";
	cin >> rawValueA;
	cout << "Please enter value of b: ";
	cin >> rawValueB;
	cout << "Please enter value of c: ";
	cin >> rawValueC;

	discriminantResult = (rawValueB * rawValueB) - (4 * rawValueA * rawValueC);
	sqrtDiscriminantResult = sqrt(discriminantResult);

	//Set outut to one decimal point per homework requirement
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	//Calculate Quadratic Equatrion and show user results
	if (rawValueA == 0 && rawValueB == 0 && rawValueC == 0) {
		cout << "This equation has an infinite number of solutions" << endl;
	}
	else if (rawValueA == 0) {
		cout << "This equation has no solution" << endl;
	}
	else if (discriminantResult < 0) {
		cout << "This equation has no real solution" << endl;
	}
	else if (discriminantResult == 0) {
		quadraticValue = (((-1 * rawValueB) + discriminantResult) / (2 * rawValueA));
		cout << "This equation has a single real solution x= " << quadraticValue << endl;
	}
	else if (discriminantResult > 0) {
		positiveQuadraticValue = (((-1 * rawValueB) + sqrtDiscriminantResult) / (2 * rawValueA));
		negativeQuadraticValue = (((-1 * rawValueB) - sqrtDiscriminantResult) / (2 * rawValueA));
		cout << "This equation has two real solutions x= " << positiveQuadraticValue << " and " << negativeQuadraticValue << endl;
	}
	return 0;
}