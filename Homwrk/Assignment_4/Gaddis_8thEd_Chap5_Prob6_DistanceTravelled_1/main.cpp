/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  Program to Calculate the sum of all integers from 1 upto the number entered
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
	int Test, 		// Test expression variable
		Sum = 0;	// Set accumulator to 0

	// Ask your to enter a positive integer.
	cout << "This program will return the sum of all the\n"
		 << "integers from 1 up to the number you enter.\n"
		 << "Enter a positive integer: ";
	cin  >> Test;

	if (Test > 0)  // Validate that only positive numbers are accepted.
	{
		for (int Num = 1; Num <= Test; Num++)
		{
			Sum += Num;
		}
		cout << "The sum of the integers from 1 up to "
			 << Test << " = " << Sum << ".\n";
	}
	return 0;
}