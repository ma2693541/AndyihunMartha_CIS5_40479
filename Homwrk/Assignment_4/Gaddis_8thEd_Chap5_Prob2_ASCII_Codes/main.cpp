/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program to display the characters for the ASCII codes 0
through 127
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
	int Test,  						 	// Initialzation of variable for the test 
		Begin = 32;					 	// Initialzation of the Begin to 32

	for (int Row = 0; Row < 6; Row++)	// Outter loop to make 6 rows
	{
		Test = Begin + 16; 				// 16 character on each line
		for(int ASCII = Begin; ASCII < Test; ASCII++)
		{
			cout << static_cast<char>(ASCII) << " ";
		}
		Begin = Test; 					// Start new row one character than last line
		cout << endl;
	}
	return 0;
}