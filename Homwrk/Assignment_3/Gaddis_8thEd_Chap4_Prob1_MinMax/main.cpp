/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program to Calculate which number is the smaller and which number is
 *          the larger 
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
	double num1, num2;
        
	cout << "Enter two numbers and It will determine which\n";
	cout << "number is the smaller and which is the larger.\n";
	cout << "Enter the first number: ";
	cin  >> num1;
	cout << "Enter the second number: ";
	cin  >> num2;

	if (num1 < num2)
		cout << num1 << " is smaller than " << num2 << ".\n";
	else
		cout << num2 << " is smaller than " << num1 << ".\n";
	return 0;
}