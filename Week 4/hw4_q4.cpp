#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	//Section A

	int sectionAInt, sectionACount, sectionASequence, sectionASubTotal;
	float sectionAGeometricMean;

	cout << "Section A" << endl;
	cout << "Please enter the length of the sequence: ";
	cin >> sectionAInt;
	cout << "Please enter your sequence:" << endl;

	for (sectionACount = 1, sectionASubTotal = 1, sectionASequence = 0; sectionAInt >= sectionACount; sectionACount++) {
		cin >> sectionASequence;
		sectionASubTotal *= sectionASequence;
	}
	sectionAGeometricMean = 1;
	sectionAGeometricMean = pow(sectionASubTotal, (1.0 / sectionAInt));

	cout << "The geometric mean is: " <<  sectionAGeometricMean << endl;
	

	cout << endl << endl; //create space between Section A and B

	//Section B
		
	int sectionBInt, sectionBSubTotal, sectionBCount;
	float sectionBGeometricMean;

	cout << "Section B" << endl;
	cout << "Please enter a non-empty sequence of positive integers, each one in a separate line. ";
	cout << "End your sequence by typing -1:" << endl;
	
	sectionBInt = 1;
	sectionBSubTotal = 1;
	sectionBCount = 0;
	while (sectionBInt != -1) {
		cin >> sectionBInt;
		if (sectionBInt != -1) {
			sectionBSubTotal *= sectionBInt;
			sectionBCount++;
		}
	}

	sectionBGeometricMean = 1;
	sectionBGeometricMean = pow(sectionBSubTotal, (1.0 / sectionBCount));

	cout << "The geometric mean is: " << sectionBGeometricMean << endl;

	return 0;
}