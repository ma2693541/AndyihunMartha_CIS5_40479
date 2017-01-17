/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates Bank Service Fee for the month
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
 int checks;
 double beginningBalance, feeOne, feeTwo, totalFees;


 cout << "Enter beginning balance: $";
 cin >> beginningBalance;

 cout << setprecision(2) << fixed;
 if(beginningBalance < 0)
 cout << "URGENT MESSAGE!! YOUR ACCOUNT IS OVERDRAWN!! \n\n";
 else
 {
 cout << "Enter number of checks written: ";
 cin >> checks;
 
 if(beginningBalance < 400)
 feeOne = 15.00;
 else
 feeOne = 0.00;

 if(checks >= 0 && checks < 20)
 feeTwo = checks * 0.10;
 if(checks >= 20 && checks <= 39)
 feeTwo = checks * 0.08;
 if(checks >= 40 && checks <= 59)
 feeTwo = checks * 0.06;
 if(checks >= 60)
 feeTwo = checks * 0.04;
 if(checks < 0)
 cout << "The number of checks CANNOT be negative!! \n\n";

 totalFees = feeOne + feeTwo;

 
 cout << "Low Balance fee: $" << feeOne << endl;
 cout << "Check fees: $" << feeTwo << endl;
 cout << "Total Monthly fees: $" << totalFees << "\n\n";
 }

 return 0;
 }