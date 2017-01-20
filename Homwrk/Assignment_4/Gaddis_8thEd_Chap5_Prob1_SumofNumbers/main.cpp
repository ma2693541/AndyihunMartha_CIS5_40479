/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  Program to Calculate the distance traveled for each hour of the time period
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
	int Speed,
		Hours,
		Distance = 0; 	// Set accumulator to 0

	// Ask the user to input the speed
	cout << "What is the speed of the vehicle in mph? ";
	cin  >> Speed;
	cout << "How many hours has it traveled? ";
	cin  >> Hours;

	if (Speed >= 0 && Hours >= 1)
	{
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

		for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
	}
	return 0;
}