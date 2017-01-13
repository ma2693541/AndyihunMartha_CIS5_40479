/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program to calculate Property Assessment Value 
 */

//System Libraries
#include <iostream>
#include<iomanip>
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
 double propertyValue, propertyTax, propertyAssessment;

 cout << "Enter the actual value of the property: ";
 cin >> propertyValue;

 propertyAssessment = propertyValue * 0.60;  
 propertyTax = (propertyAssessment/100) * 0.75;

 cout << setprecision(2) << fixed;
 cout <<"The assessment value is: " << propertyAssessment << endl;
 cout << "The property tax is: " << propertyTax << endl;


 return 0;
}