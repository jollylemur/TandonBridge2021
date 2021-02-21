#include <iostream>
using namespace std;

const float CLUB_DISCOUNT = 0.9;
const float HALF_OFF_PROMOTION = 0.5;

int main() {
	float item1, item2, basePrice, discountTotal, taxRate, totalPrice;
	char clubCard;

	//Get pricing, tax, and club status from user
	cout << "Enter price of first item: " ;
	cin >> item1;
	cout << "Enter price of second item: " ;
	cin >> item2;
	cout << "Does customer have a club card? (Y/N): ";
	cin >> clubCard;
	cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: ";
	cin >> taxRate;

	basePrice = item1 + item2;


	//Calculate price of items with and without club membership. 
	//Item1 is less & active club membership
	if (item1 < item2 && (clubCard == 'Y' || clubCard == 'y')) {
		discountTotal = ((item2 + (item1 * HALF_OFF_PROMOTION)) * CLUB_DISCOUNT);
	}
	//Item1 is less & no club membership
	else if (item1 < item2 && (clubCard == 'N' || clubCard == 'n')) {
		discountTotal = item2 + (item1 * HALF_OFF_PROMOTION);
	}
	//Item2 is less & club membership
	else if (item2 < item1 && (clubCard == 'Y' || clubCard == 'y')) {
		discountTotal = ((item1 + (item2 * HALF_OFF_PROMOTION)) * CLUB_DISCOUNT);
	}
	//Item2 is less & no club membership
	else if (item2 < item1 && (clubCard == 'N' || clubCard == 'n')) {
		discountTotal = item1 + (item2 * HALF_OFF_PROMOTION);
	}
	//Item1 same as Item2  & active club membership
	else if (item1 == item2 && (clubCard == 'Y' || clubCard == 'y')) {
		discountTotal = ((item1 + (item2 * HALF_OFF_PROMOTION)) * CLUB_DISCOUNT);
	}
	//Item1 same as Item2  & no club membership
	else if (item1 == item2 && (clubCard == 'N' || clubCard == 'n')) {
		discountTotal = item1 + (item2 * HALF_OFF_PROMOTION);
	}

	//Calculate total price
	totalPrice = discountTotal * (1 + (taxRate / 100));

	//Set outut to two decimal point to get the cents
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);


	//Dispay pricing to user
	cout << "Base price: " << basePrice << endl;
	cout << "Price after discounts: " << discountTotal << endl;
	cout << "Total price: " << totalPrice << endl;

	return 0;
}