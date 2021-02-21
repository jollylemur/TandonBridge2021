#include <iostream>
#include <cmath>				//included to use pow() to calculate BMI
#include <string>				//included to use a string to define string const
using namespace std;

const float POUNDS_TO_KILOGRAMS = 0.453592;
const float INCHES_TO_METERS = 0.0254;
const string WEIGHT = "The weight status is: ";

int main() {
	float userPounds, userInches, userKilograms, userMeters, bmiCalculation;

	//Get weight and height from user
	cout << "Please enter weight (in pounds): ";
	cin >> userPounds;
	cout << "Please enter height (in inches): ";
	cin >> userInches;

	//Convert units from metric to imperial
	userKilograms = userPounds * POUNDS_TO_KILOGRAMS;
	userMeters = userInches * INCHES_TO_METERS;

	//Calculate BMI
	bmiCalculation = userKilograms / pow(userMeters, 2);

	//Find the correct BMI Range for the user input
	if (bmiCalculation < 18.5) {
		cout << WEIGHT << "Underweight" << endl;
	}
	else if (bmiCalculation >= 18.5 && bmiCalculation <25 ) {
			cout << WEIGHT << "Normal" << endl;
	}
	else if (bmiCalculation >= 25 && bmiCalculation < 30) {
		cout << WEIGHT << "Overweight" << endl;
	}
	else if (bmiCalculation >= 30) {
		cout << WEIGHT << "Obese" << endl;
	}


	return 0;
}