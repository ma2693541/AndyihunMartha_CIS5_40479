/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that display the starting population and the projected
population at the end of each year
 */

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int&, float&, float&, int&);
int ProjYr(int, float, float);

int main()
{
	int 	StartPop,	// The starting size of a population
			NumOfYrs,	// The number of years to display
			ProjPop;	// the projected population at the end of each year
	
	float BirthRate,	// The annual birth rate
		   DeathRate; 	// The annual death rate

	// Display introduction
	cout << "\nThis program projects and displays the "
		 << "population at the end of each year.\n";

	// Call function getData
	getData(StartPop, BirthRate, DeathRate, NumOfYrs);

	// Display Table with results
	cout << "\n           Population projection Table\n"
		 << "  Year   Starting population   projected Population\n"
		 << "-----------------------------------------------------\n";

	// Call function Projyr and display results for each year 
	for (int Yr = 1; Yr <= NumOfYrs; Yr++)
	{
		ProjPop = ProjYr(StartPop, BirthRate, DeathRate);

		cout << setw(4) << Yr << "      " << setw(10) << StartPop;
		cout << "             " << setw(10) << ProjPop << endl;

		StartPop = ProjPop;
	}

	return 0;
}

/******************************************************************************
 *                              ProjYr                                        *
 * This funcion accepts the arguments starting size of the population, the    *
 * annual birth rate and the annual death rate. Calculates and raturns the    *
 * projected new size of the population after a year.                         *
 ******************************************************************************/
int ProjYr(int StartPop, float BirthRate, float DeathRate)
{
	return StartPop * (1 + BirthRate) * (1 - DeathRate);
}

/******************************************************************************
 *                              getData                                       *
 * This function asks the user for the starting size of the population, the   *
 * annual birth rate, the annual death rate and the number of years to        *
 * display. Validates saves the data in reference parameters.                 *
 ******************************************************************************/
void getData(int& StartPop, float& BirthRate, float& DeathRate, int& NumOfYrs)
{
	do
	{
		cout << "What is the starting size of the population? ";
		cin  >> StartPop;

	} while (StartPop < 2);

	do
	{
		cout << "What is the annual birth rate? ";
		cin  >> BirthRate;

	} while (BirthRate < 0);

	do
	{
		cout << "What is the annual death rate? ";
		cin  >> DeathRate;

	} while (DeathRate < 0);

	do
	{
		cout << "How many year to display? ";
		cin  >> NumOfYrs;

	} while (NumOfYrs < 1);
}