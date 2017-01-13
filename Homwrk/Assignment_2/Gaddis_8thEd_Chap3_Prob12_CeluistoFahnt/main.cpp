/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program that converts Celsius to Fahrenheit 
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
 double Celsius, conversion;

 cout << "Enter Celsius temperature: ";
 cin >> Celsius;

 conversion = (1.8 * Celsius) + 32;

 cout << Celsius << " Celsius = " << conversion << " Fahrenheit \n\n";


 return 0;
}