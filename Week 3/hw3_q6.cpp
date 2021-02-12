/*
ja4284_hw3_q6.cpp
Written by Jacob Altschul
*/

#include <iostream>
#include <string>
using namespace std;


const float BUSINESS_HOUR_RATE = 0.40;
const float AFTER_HOUR_RATE = 0.25;
const float WEEKEND_HOUR_RATE = 0.40;
const int MINUTES_IN_HOUR = 60;
const int HOURS_ZERO_EIGHT_IN_MINUTES = 480;
const int HOURS_EIGHTTEEN_HUNDRED_IN_MINUTES = 1080;


int main() {
	string dayPhoneCall;
	int callHour, callMinute, callDuration, callInMinutes;
	char temp;
	float costOfCall;

	cout << "Please enter the day of the week the phone call took place (Mo Tu We Th Fr Sa Su): ";
	cin >> dayPhoneCall;
	cout << "Please enter the start time of the call (24-hour format - 1:13pm = 13:13pm): ";
	cin >> callHour >> temp >> callMinute;
	cout << "Please enter the duration of the call (in minutes): ";
	cin >> callDuration;


	//Calculate the call start time in minutes
	callInMinutes = (callHour * MINUTES_IN_HOUR) + callMinute;


	if (dayPhoneCall == "Sa" || dayPhoneCall == "Su") {																											//Sa and Su calls are $0.15 per minute regardless of time
		costOfCall = callDuration * WEEKEND_HOUR_RATE;
	}
	else if (dayPhoneCall == "Mo" || dayPhoneCall ==  "Tu" || dayPhoneCall == "We" || dayPhoneCall == "Th" || dayPhoneCall == "Fr") {							//Calculate cost for Mo-Fr calls betweem 8AM (480 minute) and 6PM (1080 minute)
		if (callInMinutes >= HOURS_ZERO_EIGHT_IN_MINUTES && callInMinutes <= HOURS_EIGHTTEEN_HUNDRED_IN_MINUTES) {
			costOfCall = callDuration * BUSINESS_HOUR_RATE;
		}
		else {																																					//Calculate cost for Mo-Fr calls before 8AM (479 minute) and after 6PM (1081 minute)
			costOfCall = callDuration * AFTER_HOUR_RATE;
		}
	}

	//8-6: $0.40
	//outside 8-6: $0.25

	//Set outut to two decimal point to get the cents
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	//Output the cost of the call to the user
	cout << "The cost of the call is: $" << costOfCall << endl;

	return 0;
}