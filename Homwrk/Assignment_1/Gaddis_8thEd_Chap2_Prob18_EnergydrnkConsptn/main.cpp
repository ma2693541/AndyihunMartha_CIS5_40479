/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 11, 2017, 4:15 PM
  Purpose:  To Calculate the Energy Drink Consumption
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
int main ()
{
	int Customers  = 16500,
		BuyEDrinks = Customers * .15,
		Citrus 	   = BuyEDrinks * .58;

	cout << "Approximately " << BuyEDrinks << " customers in the survey\n";
	cout <<	"purchase one or more energy drinks per week.\n\n";
	cout << "Approximately " << Citrus << " customers in the survey\nprefer ";
	cout << "citrus flavored energy drinks.\n";
	return 0;
}