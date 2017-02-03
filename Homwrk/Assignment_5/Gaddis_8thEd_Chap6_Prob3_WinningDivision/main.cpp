/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that Write a program that determines which of a company’s four divisions (Northeast,
Southeast, Northwest, and Southwest) had the greatest sales for a quarter.
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototypes
float getSales(string);
void findHighest(float, float, float, float);

int main()
{
	float NE, SE, NW, SW;

	cout << "\nThis program determines which of a company’s "
		 << "four divisions had the greatest sales.\n";

	// Call function getSales for each division.
	NE = getSales("Northeast");
	SE = getSales("Southeast");
	NW = getSales("Northwest");
	SW = getSales("Southwest");

	// Call function findHighest passing the
	// four divisions sales totals
	findHighest(NE, SE, NW, SW);
	return 0;
}

/********************************************************************
 *                         getSales                                 *
 * This function is passed the name of a division. It asks the user *
 * for that division's quarterly sales figure, validates the input, *
 * then return it.                                                  *
 ********************************************************************/
float getSales(string Division)
{
	float Sales;

	do
	{
		cout << "What is the " << Division;
    	cout << " division's quarterly sales figure? ";
    	cin  >> Sales;

    	if (Sales < 0.00)
    	cout << "Error! Invaid sales figure.\n"
    		 << "Dollar amount must be greater than $0.00\n";

    } while (!(Sales > 0.00));
    return Sales;
}

/***************************************************************
 *                        findHighest                          *
 * This function is passed the four divisions sales totals.    *
 * It determines which is the largest and prints the name of   *
 * the highest grossing divison, along with its sales figures. *
 ***************************************************************/
void findHighest(float NE, float SE, float NW, float SW)
{
	float Hightest;
 
 	cout << "\nThe Hightest grossing division is the ";

	if (NE > SE && NE > NW && NE > SW)
	{
		Hightest = NE;
		cout << "Northeast ";
	}
	else if (SE > NE && SE > NW && SE > SW)
	{
		Hightest = SE;
		cout << "Southeast ";
	}
	else if (NW > SE && NW > NE && NW > SW)
	{
		Hightest = NW;
		cout << "Northwest ";
	}
	else
	{
		Hightest = SW;
		cout << "Southwest ";
	}
    
	cout << fixed << showpoint << setprecision(2);
	cout << "division with $" << Hightest << " in sales.\n";
}