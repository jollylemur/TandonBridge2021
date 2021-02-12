/*
ja4284_hw2_q4.cpp
Written by Jacob Altschul
*/

#include <iostream>
using namespace std;

int main () {
    int int1, int2, additionTotal, subtractionTotal, multiplcationTotal, divTotal, modTotal;
    float divisionTotal, modSubtotal;

    //Get integers from user    
    cout<<"Please enter two positive integers, separated by a space:"<<endl;
    cin>>int1>>int2;

    //Doing the math
    additionTotal = int1 + int2;
    subtractionTotal = int1 - int2;
    multiplcationTotal = int1 * int2;
    divisionTotal = (float)int1 / (float)int2;
    divTotal = (int)divisionTotal;
    modTotal = int1 % int2;

    //Display the results to the end user
    cout<<int1<< " + "<<int2<<" = "<<additionTotal<<endl;
    cout<<int1<< " - "<<int2<<" = "<<subtractionTotal<<endl;
    cout<<int1<< " * "<<int2<<" = "<<multiplcationTotal<<endl;
    cout<<int1<< " / "<<int2<<" = "<<divisionTotal<<endl;
    cout<<int1<< " div "<<int2<<" = "<<divTotal<<endl;
    cout<<int1<< " mod "<<int2<<" = "<<modTotal<<endl;

    return 0;
}