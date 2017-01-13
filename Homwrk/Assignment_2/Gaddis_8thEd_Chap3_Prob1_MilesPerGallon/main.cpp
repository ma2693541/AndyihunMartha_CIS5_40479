/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program that calculate a car's gas mileage
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
 double gallons, miles, milespergallon;

 cout << "Enter the number of gallons of gas your car can hold: ";
 cin >> gallons;
 cout << "Enter the number of miles your car can be driven on a full tank: ";
 cin >> miles;
 
 milespergallon = miles/gallons;

 cout << "The car's MPG is: " << milespergallon << endl;

 return 0;
}