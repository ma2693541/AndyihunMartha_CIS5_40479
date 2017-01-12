/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 11, 2017, 4:30 PM
  Purpose:  Program to calculate Sales Tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main()
{
	int 	PurPrice	 = 95;
	double	State	 = PurPrice * .04,
			County	 = PurPrice * .02,
			TotalTax = State + County;

	cout << "Purchase Price = $" << PurPrice << endl;
	cout << "State tax = $" << State << endl;
	cout << "County tax = $" << County << endl;
	cout << "Total Tax = $" << TotalTax << endl;
	return 0;
}