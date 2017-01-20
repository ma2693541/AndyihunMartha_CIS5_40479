/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  Program to display the largest and smallest numbers
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
	int Num,
		Largest,
		Smallest;

	cout << "Enter a series of numbers and the program will\n"
		 << "display the largest and smallest numbers entered\n"
                 << "enter −99 to signal the end of the series\n"
		 << "Enter a number\n";
	cin	 >> Num;

	Largest = Smallest = Num;

	while (Num != -99)
	{			
		cout << "Enter a number\n";
		cin  >> Num;
		
		if (Num > Largest)
			Largest = Num;

		if (Num < Smallest)
			Smallest = Num;

	}
	cout << "The largest number entered is " << Largest << "." << endl;
	cout << "The smallest number entered is " << Smallest << "." << endl;
	return 0;
}