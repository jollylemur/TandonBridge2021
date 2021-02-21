#include <iostream>
using namespace std;

int main() {
	int n, nIteration, evenIntegers;

	//Get positive integer from user
	cout << "Please enter a positive integer: ";
	cin >> n;


	//Part A - While Loop
	nIteration = 1;
	evenIntegers = 1;
	cout << "Section A" << endl;
	while (nIteration <= n) {
		evenIntegers = nIteration * 2;
		cout << evenIntegers << endl;
		nIteration += 1;
	}

	cout << endl; // add a space to create better separate Section A and Section B


	cout << "Section B" << endl;
	//Part B - For Loop
	for (nIteration = 1, evenIntegers = 1; nIteration <= n; nIteration += 1) {
		evenIntegers = nIteration * 2;
		cout << evenIntegers << endl;
	}

	return 0;
}