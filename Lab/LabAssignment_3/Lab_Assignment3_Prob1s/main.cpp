/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 12, 2017, 2:15 PM
  Purpose:  Program that calculate the percentage of the federal budget that the Military 
 * and NASA are funded.
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
 
    float Military = 580000000000, 
            Nasa = 18500000000, 
            USTotal = 3540000000000, 
            percentMil = (Military/USTotal)*100 , 
            percentNasa = (Nasa/USTotal)*100;
    
   
    cout<< "Military Budget in percent from the total: "<< percentMil<< "%" << endl;
    cout<< "Nasa Budget in percent from the total." << percentNasa<< "%" << endl;
    
    return 0;
}





