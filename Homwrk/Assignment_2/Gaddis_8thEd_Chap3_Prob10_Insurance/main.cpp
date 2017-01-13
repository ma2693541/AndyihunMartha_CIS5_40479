/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program to calculate amount of insurance to buy
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
 double replacementCost;

 cout << "Enter the replacement cost of your building: ";
 cin >> replacementCost;

 cout << "The Minimum insurance you should buy is: $" << replacementCost * 0.80 << endl;

 
 return 0;
}