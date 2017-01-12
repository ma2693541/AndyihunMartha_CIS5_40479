/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 11, 2017, 4:30 PM
  Purpose:  Program to Calculate Miles per Gallon
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
	int 	Miles 	= 375,
			Gallons = 15,
			MPG = Miles / Gallons;

	cout << "This car gets " << MPG <<" miles per gallon.\n";
	return 0;
}