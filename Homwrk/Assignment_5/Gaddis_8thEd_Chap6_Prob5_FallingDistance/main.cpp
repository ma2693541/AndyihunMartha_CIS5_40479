/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that Write a function named fallingDistance that accepts an object’s falling time (in
seconds) as an argument. The function should return the distance, in meters, that
the object has fallen during that time interval.
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float GRAVITY = 9.8;

// Function prototypes
float fallingDistance(int);

int main()
{
 	cout << "\nTable of the distances an object falls due\n"
 		 << "to gravity in specific time periods.\n\n"
 		 << "    Time        Distance\n"
 	     << "(in seconds)   (in meters)\n"
 	     << "---------------------------\n";

 	for(int T = 1; T <= 10; T++)
 	{
 		cout << "    " << setw(3) << T << "           "
 			 << fixed << setprecision(0) << setw(4) 
 			 << fallingDistance(T) << endl;
 	}
 	cout << endl;
 	return 0;
}
/******************************************************************************
 *                          fallingDistance                                   *
 * This function accepts an object’s falling time (in seconds) as an argument *
 * and returns  the distance in meters that the object has fallen during that *
 * time interval.                                                             *
 ******************************************************************************/
float fallingDistance(int T)
{
	return .5 * GRAVITY * pow(T, 2);
}