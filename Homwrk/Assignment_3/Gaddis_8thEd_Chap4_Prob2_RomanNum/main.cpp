/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 16, 2017, 12:15 PM
  Purpose:  Program to Convert a number into a Roman Numeral 
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
 int number;

 cout << "Enter a number (1-10): ";
 cin >> number;

 if(number < 1 || number > 10)
 cout << "The number cannot be less than 1 or greater than 10! \n";
 else{
 switch(number)
 {
 case 1: cout << "The Roman numeral is: I \n";
   break;
 case 2: cout << "The Roman numeral is: II \n";
       break;
 case 3: cout << "The Roman numeral is: III \n";
   break;
 case 4: cout << "The Roman numeral is: IV \n";
   break;
 case 5: cout << "The Roman numeral is: V \n";
   break;
 case 6: cout << "The Roman numeral is: VI \n";
   break;
 case 7: cout << "The Roman numeral is: VII \n";
   break;
 case 8: cout << "The Roman numeral is: VIII \n";
       break;
 case 9: cout << "The Roman numeral is: IX \n";
   break;
 case 10: cout << "The Roman numeral is: X \n";
   break;
 default:  cout << "You must enter a number between 1 - 10!! \n\n";
 }  
 } 


 return 0;
}