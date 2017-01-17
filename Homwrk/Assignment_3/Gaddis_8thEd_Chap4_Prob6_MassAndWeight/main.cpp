/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates and displays the weight 
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
 double mass, weight;

 cout << "Enter an object's mass (in Kilograms): ";
 cin >> mass;

 weight = mass * 9.8;

 if(weight > 1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 cout << "The object's mass is TOO heavy!! \n";
 }
 if(weight < 10)
 {
 cout << "The mass is: " << weight << " newtons \n";
 cout << "The object's mass is too Light !! \n";
 }
 if(weight >=10 && weight <=1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 }

 
 return 0;
}