/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates the total number of point earned in a book
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
 int books, points;


 cout << "Enter the number of books purchased this month: ";
 cin >> books;

 if(books == 0)
 {
 points = 0;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 1)
 {
 points = 5;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 2)
 {
 points = 15;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books == 3)
 {
 points = 30;
 cout << "You have earned: " << points << " points \n\n";
 }
 if(books >= 4)
 {
 points = 60;
 cout << "You have earned: " << points << " points \n\n";
 }
 else
 {
 if(books < 0)
 cout << "Number of books cannot be negative!! \n\n";
 }


 return 0;
}