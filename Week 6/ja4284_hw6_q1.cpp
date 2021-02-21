#include <iostream>
using namespace std;

int fib(int n);
//Computes the n-th element of Fibonacci sequence
//on the userInteger inputted from the user

int main() {
    
    //Defines the main variables
    int userInteger, sequenceNumber;

    //Gets the input from the user
    cout << "Please enter a positive integer: ";
    cin >> userInteger;

    //Calls the function fib and returns answer to sequenceNumber
    sequenceNumber = fib(userInteger);

    //Outputs function fib results to user
    cout << sequenceNumber;

    //Ends program
	return 0;
}

//Function definition for function fib
int fib(int n) {
    int fib1, fib2, count, sum;
    count = 1;
    fib1 = 1;
    fib2 = 1;
    sum = 0;
    while (count < n) {
        sum = fib1 + fib2;
        fib1 = fib2;
        fib2 = sum;
        count++;
    }
    return fib1;
}
