#include <iostream>
using namespace std;

const int QUARTER_VALUE_ROUNDED = 25;
const int DIME_VALUE_ROUNDED = 10;
const int NICKEL_VALUE_ROUNDED = 5;
const int PENNY_VALUE_ROUNDED = 1;
const float QUARTER_VALUE = 0.25;

int main () {
    int dollars, cents;
    int quarterDollar, quarters, afterQuarters, finalQuarters;
    int dimes, afterDimes;
    int nickels, afterNickels;
    int pennies;

    //Get information from user
    cout<<"Please enter your amount in the format of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    //Calculate quarters
    quarterDollar = dollars / QUARTER_VALUE;
    quarters = (int)(cents / QUARTER_VALUE_ROUNDED);
    afterQuarters = cents - (quarters * QUARTER_VALUE_ROUNDED);
    finalQuarters = quarterDollar + quarters;

    //Calculate dimes
    dimes = (int)(afterQuarters / DIME_VALUE_ROUNDED);
    afterDimes = afterQuarters - (dimes * DIME_VALUE_ROUNDED);

    //Calculate nickels
    nickels = (int)(afterDimes / NICKEL_VALUE_ROUNDED);
    afterNickels = afterDimes - (nickels * NICKEL_VALUE_ROUNDED);

    //Calculate pennies
    pennies = (int)(afterNickels / PENNY_VALUE_ROUNDED);

    //Display final to user
    cout<<dollars<<" dollars and "<<cents<<" cents are:"<<endl;
    cout<<finalQuarters<<" quarters, "<<dimes<<" dimes, "<<nickels<<" nickels and "<<pennies<<" pennies"<<endl;

    return 0;
}