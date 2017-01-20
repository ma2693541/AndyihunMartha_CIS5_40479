/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  program to display the projected rates for the next six years 
 * for membership fees
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
	const double RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
	int Year;
	float YrRate;

	cout << "\nCountry club projected rates\n"
		 << "    for the next six years\n"
		 << "-----------------------------\n"
		 << "      Year       Rate\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
	return 0;
}