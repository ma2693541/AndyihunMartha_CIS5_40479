/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program that converts Celsius to Fahrenheit 
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
 double classA = 15, classB = 12, classC = 9;
 double numberA, numberB, numberC;
 double total;

 cout << "How many tickets were sold for Class A? >> ";
 cin >> numberA;
 cout << "How many tickets were sold for Class B? >> ";
 cin >> numberB;
 cout << "How many tickets were sold for Class C? >> ";
 cin >> numberC;

 cout << setprecision(2) << fixed;
 cout << "Sales from Class A: $" << numberA * classA << endl;
 cout << "Sales from Class B: $" << numberB * classB << endl;
 cout << "Sales from Class C: $" << numberC * classC << endl;

 total = (numberA*classA) + (numberB*classB) + (numberC*classC);

 cout << "Total sales generated: $" << total << endl;
 
 return 0;
}