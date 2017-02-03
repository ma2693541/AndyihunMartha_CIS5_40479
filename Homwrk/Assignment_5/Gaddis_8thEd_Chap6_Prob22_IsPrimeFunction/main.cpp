/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that write a Boolean function named isPrime, which takes an integer as an argument and
returns true if the argument is a prime number, and false otherwise.
 */

#include <iostream>
using namespace std;

// Function Prototypes
bool isPrime(int);

int main()
{
	int Num;

		cout << "This program let you know if the number entered is a "
			 << "prime number.\nEnter a number: ";
		cin  >> Num;

	cout << "The number " << Num;

	if (isPrime(Num))
	{
		cout << " is a Prime number." << endl;
	}
	else
		cout << " is not a Prime number." << endl;

	return 0;
}

/**************************************************************************
 *                                isPrime                                 *
 *  This function take an integer as an argument and retruns ture if the  *
 *  argument is a prime number, and false otherwise.                      *
 **************************************************************************/
bool isPrime(int Num)
{
	if (Num > 1)
	{
		for (int i = 2; i <= Num; ++i)
		{
			
			if (Num % i == 0)
			{
				if(Num == i)
					return true;
				else
					return false;
			}
	
		}
	}
	return false;
}