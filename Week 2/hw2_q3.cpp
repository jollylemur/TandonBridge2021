#include <iostream>
using namespace std;

const int MINUTES_IN_HOUR = 60;
const int HOURS_IN_DAY = 24;

int main () {
    int johnMinutes, johnHours, johnDays;
    int billMinutes, billHours, billDays;
    int combinedMinutes, combinedHours, combinedDays;
    int finalMinutes, finalHours, finalDays;
    int overageMinutes, overageHours;

    //Get John's information from user
    cout<<"Please enter the number of days John has worked: ";
    cin>>johnDays;
    cout<<"Please enter the number of hours John has worked: ";
    cin>>johnHours;
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>johnMinutes;

    //Get Bill's information from user
    cout<<"\nPlease enter the number of days Bill has worked: ";
    cin>>billDays;
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>billHours;
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>billMinutes;

    //combine Bill and John's data
    combinedDays = johnDays + billDays;
    combinedHours = johnHours + billHours;
    combinedMinutes = johnMinutes + billMinutes;

    //calculate minutes
    finalMinutes = (int)(combinedMinutes % MINUTES_IN_HOUR);
    overageMinutes = (int)(combinedMinutes / MINUTES_IN_HOUR);

    //calcuate hours
    finalHours = overageMinutes + (int)(combinedHours % HOURS_IN_DAY);
    overageHours = (int)(combinedHours / HOURS_IN_DAY);

    //calcuate days
    finalDays = overageHours + combinedDays;

    //Display final to user
    cout<<"The total time both of them worked together is: "<<finalDays<<" days, "<<finalHours<<" hours and "<<finalMinutes<<" minutes."<<endl;

    return 0;
}