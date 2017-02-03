/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that Write a function named celsius that accepts a Fahrenheit temperature as an
argument. The function should return the temperature, converted to Celsius
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
float celsius(int);

int main()
{
	cout << "\nTable of Fahrenheit temperatures 0 - 20\n"
		 << "and their Celsius equivalents.\n\n"
		 << "------------------------------\n"
		 << "  Fahrenheit       Celsius\n"
		 << "------------------------------\n";
    
	for (int F = 0; F <= 20; F++)
	{
		cout << "      " << setw(2) << F;
		cout << "          "
			 << setw(3) << celsius(F) << endl;
	}
	cout << endl;
	return 0;
}
/*****************************************************************
 *                        celsius                                *
 * This function accepts a Fahrenheit temperature as an argument *
 * and returns the tempature converted into Celsius.             *
 *****************************************************************/
float celsius(int F)
{
	
	return (5.0 * (F - 32))/9;
}