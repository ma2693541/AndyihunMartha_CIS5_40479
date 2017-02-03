/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that Write a function named kineticEnergy that accepts an object’s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has.
 */

#include <iostream>
#include <cmath>
using namespace std;

// Fumction Prototypes
float kineticEnergy(int, int);

int main()
{
	int Mass, 		// Mass in kilograms
		Velo;		// Velocity in meters per second

	// Ask user to enter object's mass (in kilograms)
	// and velocity (in meters per second)
	cout << "\nThis program calculates the amount\n"
	     << "of kinetic energy an object has.\n\n"
	     << "Enter the object’s mass (in kilograms): ";
	cin  >> Mass;
	cout << "Enter the object’s velocity (in meters per second): ";
	cin  >> Velo;
	cout << "This object has is "
		 << kineticEnergy(Mass, Velo) << " joules." << endl;
	return 0;
}

/*********************************************************
 *                     kineticEnergy                     *
 * This function accepts an object’s mass and velocity    *
 * as arguments and returns the amount of kinetic energy *
 * that the object has.                                  *
 *********************************************************/
float kineticEnergy(int Mass, int Velo)
{   
	return .5 * Mass * pow(Velo, 2);
}