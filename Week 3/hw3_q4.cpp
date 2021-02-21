#include <iostream>
using namespace std;

const int FLOOR_ROUND = 1;		        	//defined per the homework requirement
const int CEILING_ROUND = 2;        			//defined per the homework requirement
const int ROUND = 3;				        //defined per the homework requirement
const float ROUND_DECIMAL_CUTOFF = 0.5; 

int main() {
    float userRealNumber, userDecimalPostive, userDecimalNegative;
    int roundingMethod, floorRound, ceilingRound, roundRound;

    //Gather Real Number from user & rounding method
    cout << "Please enter a Real number:" << endl;
    cin >> userRealNumber;
    cout << "Choose your rounding method:" << endl;
    cout << "1. Floor round" << endl;
    cout << "2. Ceiling round" << endl;
    cout << "3. Round to the nearest whole number" << endl;
    cin >> roundingMethod;

   //Take user rounding method and calculate round number
    switch (roundingMethod) {
        case FLOOR_ROUND:
            floorRound = int(userRealNumber);
            cout << floorRound << endl;
            break;

        case CEILING_ROUND:
            if (userRealNumber - userRealNumber == 0) {                                                     //if whole number, print original number
                cout<<userRealNumber<<endl;
            }
            else if (userRealNumber >= 0 ) {
                ceilingRound = int(userRealNumber + 1);
                cout << ceilingRound << endl;
            }
            else if (userRealNumber < 0) {
                ceilingRound = int(userRealNumber - 1);
                cout << ceilingRound << endl;
            }
            break;

        case ROUND:
            userDecimalPostive = userRealNumber - (int)userRealNumber;                                      //Determines decimal for a positive real number
            userDecimalNegative = -1 *(userRealNumber - (int)userRealNumber);                               //Determines decimal for a negative real number
            if (userRealNumber >= 0 && userDecimalPostive < ROUND_DECIMAL_CUTOFF) {                         //Rounds to nearest whole number if real number is positive and decimal is less than 0.5
                roundRound = (int)userRealNumber;
                cout << roundRound << endl;
                break;
            }
            else if (userRealNumber >= 0 && userDecimalPostive >= ROUND_DECIMAL_CUTOFF) {                   //Rounds to nearest whole number if real number is positive and decimal is greater than or equal to 0.5
                roundRound = int(userRealNumber + 1);
                cout << roundRound << endl;
                break;
            }
            else if (userRealNumber < 0 && userDecimalNegative < ROUND_DECIMAL_CUTOFF) {                    //Rounds to nearest whole number if real number is negative and decimal is less than 0.5
                roundRound = int(userRealNumber);
                cout << roundRound << endl;
                break;
            }
            else if (userRealNumber < 0 && userDecimalNegative >= ROUND_DECIMAL_CUTOFF) {                   //Rounds to nearest whole number if real number is negative and decimal is greater than or equal to 0.5
                roundRound = (int(userRealNumber) - 1);
                cout << roundRound << endl;
                break;
            }
            break;
    }
	return 0;
}