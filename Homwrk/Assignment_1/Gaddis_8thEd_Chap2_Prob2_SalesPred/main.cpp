/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 11, 2017, 4:30 PM
  Purpose:  Program to calculate Sales Prediction
 */

//System Libraries
#include <iostream>
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
	double PoTS 		= .58,
		   CompSales 	= 8600000;
	int    ECSales		= CompSales * PoTS;

	cout << "The East Coast division is predicted to generate $";
	cout << ECSales << " in sales." << endl; 
	return 0;
}