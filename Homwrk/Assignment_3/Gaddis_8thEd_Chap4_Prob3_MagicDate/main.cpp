/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program to displays a magic date if month times date equals the year 
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
 int month, day, year;

 cout << "Enter a month (in numeric form): ";
 cin >> month;
 cout << "Enter a day (1-31): ";
 cin >> day;
 cout << "Enter a two-digit year: ";
 cin >> year;

 if(month * day == year)
 cout << "The date is MAGIC !! \n";
 else
 cout << "The date is NOT magic!! \n";


 return 0;
}