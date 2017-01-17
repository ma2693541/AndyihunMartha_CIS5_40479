/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates all substances that will freeze and boil at 
 *          a specific temperature
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
 double temperature;

 
 cout << "Enter a temperature in Farenheit: ";
 cin >> temperature;

 cout << "\nSubstances that will freeze: \n";
 if(temperature <= -173)
 cout << "Ethyl Alcohol \n";
 if(temperature <= -38)
 cout << "Mercury \n";
 if(temperature <= -362)
 cout << "Oxygen \n";
 if(temperature <= 32)
 cout << "Water \n";
 cout << "\nSubstances that will boil: \n";
 if(temperature >= 172)
 cout << "Ethyl Alcohol \n";
 if(temperature >= 676)
 cout << "Mercury \n";
 if(temperature >= -306)
 cout << "Oxygen \n";
 if(temperature >= 212)
 cout << "Water \n";

 cout << "\n\n";




 return 0;
}