/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program to displays a magic date if month times date equals the year 
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
	double Length1, Length2, Width1, Width2, Area1, Area2;

	
	cout << "This program determines which of two rectangles has\n"
		 << "the greater area, or if the areas are the same.\n";
	cout << "Enter the length and width of rectangle #1:\n";
	cin  >> Length1 >> Width1;
	cout << "Enter the length and width of rectangle #2:\n";
	cin  >> Length2 >> Width2;

	Area1 = Length1 * Width1;
	Area2 = Length2 * Width2;

	if (Area1 == Area2)
		cout << "The areas of both rectangles are the same.\n";
	else if (Area1 > Area2)
		cout << "The area of rectangle #1 is greater than rectangle #2.\n";
	else
		cout << "The area of rectangle #2 is greater than rectangle #1.\n";
	return 0;
}