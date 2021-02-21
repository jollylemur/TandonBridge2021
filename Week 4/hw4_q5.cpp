#include <iostream>
using namespace std;

int main() {
    int userInteger, numberOfRows, numberOfStars, numberOfSpaces;

    userInteger = 0;
    cout << "Please enter a postivie integer: ";
    cin >> userInteger;


    //first triangle
    for (numberOfRows = 1; numberOfRows <= userInteger; numberOfRows += 1) {
        for (numberOfSpaces = 1; numberOfSpaces <= numberOfRows; numberOfSpaces++) {
            cout << " ";
        }
        for (numberOfStars = 0; numberOfStars <= (userInteger * 2) - (numberOfRows * 2); numberOfStars++) {
            cout << "*";
         }
        cout << endl;
    }


    //second triangle
    for (numberOfRows = 1; numberOfRows <= userInteger; numberOfRows += 1) {
        for (numberOfSpaces = 0; numberOfSpaces <= userInteger - numberOfRows; numberOfSpaces++) {
            cout << " ";
        }
        for (numberOfStars = 1; numberOfStars <= (numberOfRows * 2) - 1; numberOfStars++) {
            cout << "*";
        }
        cout << endl;
    }

	return 0;
}