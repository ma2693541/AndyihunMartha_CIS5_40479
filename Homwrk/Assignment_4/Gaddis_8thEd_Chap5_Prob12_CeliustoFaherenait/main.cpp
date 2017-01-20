/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  Program to convert table of the Celsius temperatures from 0 to 20 
 * and their Fahrenheit equivalents
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
	float C,
		   F;

	cout << "Table of the Celsius temperatures from 0\n"
		 << "to 20 and their Fahrenheit equivalents:\n\n"
		 << "Celsius     Fahrenheit\n"
		 << "----------------------\n";

	for(C = 0; C <= 20; C++)
	{

		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;
	return 0;
}