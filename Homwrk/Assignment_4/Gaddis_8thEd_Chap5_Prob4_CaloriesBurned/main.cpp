/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  program that displays the number of calories burned 
 * after 5,10, 15, 20, 25, and 30 minutes
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
	const double CALORIES_PER_MIN = 3.6;

	int Min,
		Burnt = 0; 		// Acummulator set to 0

	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n"
		 << "------------------------------------------\n";

	for(Min = 5; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
	return 0;
}