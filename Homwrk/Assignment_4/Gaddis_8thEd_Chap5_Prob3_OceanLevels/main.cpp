/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  program that displays a table showing the total number of millimeters the oceans
will have risen each year for the next 25 years.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
	
	int Year;
	float Risen = 0.0;

	cout << "Table showing the total number of millimeters the oceans\n"
		 << "will have risen each year for the next 25 years.\n\n"
		 << "    Year        Amount Risen\n"
		 << "                (millimeters)\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 25; Year++)
	{
		Risen += 1.5;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
	return 0;
}
