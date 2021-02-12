/*
ja4284_hw4_q6.cpp
Written by Jacob Altschul
*/


#include <iostream>
using namespace std;

int main() {
    int userInteger, loopIteration, currentNumber, evenCount, oddCount, loopNumber;

    cout << "Please enter a positive integer: ";
    cin >> userInteger;

    for (loopIteration = 1; loopIteration < userInteger; loopIteration++) {
        evenCount = 0;                                                              //resets evenCount after each While loop
        oddCount = 0;                                                               //resets oddCount after each While loop
        currentNumber = 0;                                                          //resets currentNumber after each While loop
        loopNumber = loopIteration;                                                 //loopNumber is the variable the even/odd count is applied to
        while (loopNumber > 0) {
            currentNumber = loopNumber % 10;
            if (currentNumber % 2 == 0) {
                evenCount++;
            }
            else if (currentNumber % 2 != 0) {
                oddCount++;
            }
            loopNumber = loopNumber / 10;
            if (loopNumber == 0) {
                if (evenCount >> oddCount) {
                    cout << loopIteration << endl;
                }
            }
        }

    }

    return 0;
}