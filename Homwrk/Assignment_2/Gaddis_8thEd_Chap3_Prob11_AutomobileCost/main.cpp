/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program to calculate total cost of an automobile
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
 double loanPayment, insurance, gas, oil, tires, maintenance;
 double monthlyTotal, annualTotal;

 cout << "Enter your monthly loan payment: ";
 cin >> loanPayment;
 cout << "Enter your monthly insurance: ";
 cin >> insurance;
 cout << "Enter your monthly gas expense: ";
 cin >> gas;
 cout << "Enter your monthly oil expenses: ";
 cin >> oil;
 cout << "Enter your monthly tires expenses: ";
 cin >> tires;
 cout << "Enter your monthly maintenance expenses: ";
 cin >> maintenance;

 monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
 annualTotal = monthlyTotal * 12;

 cout << setprecision(2) << fixed;
 cout << "Your total monthly expenses are: $" << monthlyTotal << endl;
 cout << "Your total  annual expenses are: $" << annualTotal << endl;


 return 0;
}