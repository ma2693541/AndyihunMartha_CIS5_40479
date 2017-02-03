/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that write a program with a function named presentValue that performs 
 * present value calculation.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function prototypes
float presentValue(float, float, int);

int main()
{
	float PValue,
		   FValue,
		   AIRate;
	int    	  Yrs;

	cout << "\n              Present value calculator\n"
		 << "--------------------------------------------------------\n"
		 << "What is the future amount you want in the account? ";
	cin  >> FValue;
	cout << "What is your annual interest rate? ";
	cin  >> AIRate;
	cout << "How many years do you plan to let the money sit in the account? ";
	cin  >> Yrs;

	PValue = presentValue(FValue, AIRate, Yrs);

	cout << fixed << showpoint << setprecision(2);
	cout << "You need to deposit $" << PValue << " to have a balance of $"
		 << FValue << " in " << Yrs << " years.\n\n";

	return 0;
}

/*****************************************************************************
 *                           presentValue                                    *
 *  This function accepts future value, annual interest rate and the number  *
 *  of years arguments. Then calculates and returns the present value.       *
 *****************************************************************************/
float presentValue(float FValue, float AIRate, int Yrs)
{
	return FValue / pow(1 + AIRate, Yrs);
}
