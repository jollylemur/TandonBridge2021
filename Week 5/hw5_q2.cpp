/*
ja4284_hw5_q2.cpp
Written by Jacob Altschul
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int NUMBER_OF_GUESSSES = 5;
const int RANGE_LOW = 1;
const int RANGE_HIGH = 100;

int main() {

	int superSecertNumber, rangeLow, rangeHigh, userGuessCount, userGuess, numberOfGuesses;

	cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

	//Create seed for random number based on time of day
	srand(time(0));

	//Create super secert number based on seed (time of day). Add +1 to shift from 0-99 to 1-100
	superSecertNumber = (rand() % 100) + 1;

	for (numberOfGuesses = 1, userGuess = 1, userGuessCount = NUMBER_OF_GUESSSES, rangeLow = RANGE_LOW, rangeHigh = RANGE_HIGH; userGuessCount > 0; userGuessCount -= 1, numberOfGuesses++) {
		cout << "Range: [" << rangeLow << " , " << rangeHigh << "], Number of guesses left: " << userGuessCount << endl;
		cout << "Your guess: ";
		cin >> userGuess;
		if (userGuess == superSecertNumber) {
			cout << "Congrats! You guessed my number in " << numberOfGuesses << " guesses.";
			userGuessCount = 0;
		}
		if (userGuess != superSecertNumber && numberOfGuesses < NUMBER_OF_GUESSSES) {
			if (userGuess > superSecertNumber) {
				cout << "Wrong. My nymber is smaller.";
				rangeHigh = userGuess - 1;
			}
			else if (userGuess < superSecertNumber) {
				cout << "Wrong. My nymber is bigger.";
				rangeLow = userGuess + 1;
			}
		}
		if (userGuess != superSecertNumber && numberOfGuesses == NUMBER_OF_GUESSSES) {
				cout << "Out of guesses! My number is " << superSecertNumber;
		}
		cout << endl;
	}	

	return 0;
}