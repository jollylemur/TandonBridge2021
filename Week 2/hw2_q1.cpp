/*
ja4284_hw2_q1.cpp
Written by Jacob Altschul
*/

#include <iostream>
using namespace std;

const float QUARTER_VALUE = 0.25;
const float DIME_VALUE = 0.10;
const float NICKEL_VALUE = 0.05;
const float PENNY_VALUE = 0.01;

int main () {
    int quarters, dimes, nickels, pennies, dollars;
    float money, cents;

    //Get coin information from user
    cout<<"Please enter number of coins:"<<endl;
    cout<<"# of quarters: ";
    cin>>quarters;
    cout<<"# of dimes: ";
    cin>>dimes;
    cout<<"# of nickels: ";
    cin>>nickels;   
    cout<<"# of pennies: ";
    cin>>pennies;

    //calculate dollars and cents
    money = (quarters * QUARTER_VALUE) + (dimes * DIME_VALUE) + (nickels * NICKEL_VALUE) + (pennies * PENNY_VALUE);

    //Separating dollars and cents to display independently
    dollars = (int)money;
    cents = (money - dollars) * 100;

    //Display final to user
    cout<<"The total is "<<dollars<<" dollars and "<<cents<<" cents"<<endl;

    return 0;
}