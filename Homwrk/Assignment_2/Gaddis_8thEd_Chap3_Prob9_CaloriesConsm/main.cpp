/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program to calculate Calories consumed
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
 double cookies, totalCalories;

 cout << "Enter the number of cookies you ate: ";
 cin >> cookies;
 totalCalories = cookies * 100;
  
 cout << "You consumed: " << totalCalories << " calories! \n\n";
  
  return 0;
}