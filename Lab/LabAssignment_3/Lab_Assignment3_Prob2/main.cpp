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
 
    float Pop2008 = 304000000, 
            Pop2016 = 322000000, 
            Debt2008 = 9700000000000,
            Debt2016 = 20000000000000,
            DebtPerPop2008 = Debt2008/Pop2008, 
            DebtPerPop2016 = Debt2016/Pop2016;
    
   
    cout<< "Total Debt per person in 2008 is: " << "$" << DebtPerPop2008<< endl;
    cout<< "Total Debt per person in 2016 is."<< "$" << DebtPerPop2016<< endl;
    
    return 0;
}





