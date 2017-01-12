/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 11, 2017, 4:30 PM
  Purpose:  Program to Calculate Restaurant Bill
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
	double MealCost = 88.67,
		   Tax		= MealCost * .0675,
		   Tip 		= (MealCost + Tax) * .20,
		   TBill	= MealCost + Tax + Tip;

	cout << "Meal cost = $" << MealCost << endl;
	cout << "Tax amount = $" << Tax << endl;
	cout << "Tip amount = $" << Tip << endl;
	cout << "Total bill = $" << TBill << endl;
	return 0;
}