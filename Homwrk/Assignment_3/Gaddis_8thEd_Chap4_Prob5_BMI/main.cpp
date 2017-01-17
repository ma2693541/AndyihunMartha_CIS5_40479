/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates your Body Mass Index 
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
 double weight, height, BMI;


 cout << "Enter your weight (in pounds): ";
 cin >> weight;
 cout << "\nEnter your height (in inches): ";
 cin >> height;

 BMI = (weight * 703) / (height * height);

 if(BMI < 18.5)
 cout << "You are underweight!! \n";
 if(BMI >= 18.5 && BMI <= 25)
 cout << "You are in optimal shape!! \n";
 if(BMI > 25)
 cout << "You are overweight!! \n";


 return 0;
}