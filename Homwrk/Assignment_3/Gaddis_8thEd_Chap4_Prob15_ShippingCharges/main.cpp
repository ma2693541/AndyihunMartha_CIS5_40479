/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program that calculates Bank Service Fee for the month
 */

//System Libraries
#include <iostream>
#include<iomanip>
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
 double weight, distance, weightCharge, milesCharge, totalCharge;


 cout << "Enter the weight of the package (in Kilograms): ";
 cin >> weight;

 cout << setprecision(2) << fixed;
 if(weight <= 0 || weight > 20)
 {
 cout << "Sorry, we cannot ship your package!! \n"
      << "The weight has to be greater than 0 KG and less than 20 Kg!! \n\n";
 }
 else
 {
 cout << "Enter the distance to be shipped (miles): ";
 cin >> distance;

 if(distance < 10 || distance > 3000)
 {
 cout << "Sorry, we cannot ship your package!! \n"
  << "The distance has to be between 10 - 3,000 miles \n\n";
 }

 if(weight <= 2)
 milesCharge = (distance/500) * 1.10;
 if(weight > 2 && weight <= 6)
 milesCharge = (distance/500) * 2.20;
 if(weight > 6 && weight <= 10)
 milesCharge = (distance/500) * 3.70;
 if(weight > 10 && weight <= 20)
 milesCharge = (distance/500) * 4.80;

 
 cout << "Total shipping charges: $" << milesCharge << "\n\n";
 }


 return 0;
}