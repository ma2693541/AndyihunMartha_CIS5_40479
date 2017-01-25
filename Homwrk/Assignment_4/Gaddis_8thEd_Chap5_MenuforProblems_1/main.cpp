/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 18, 2017, 12:15 PM
  Purpose:  Program to display Menu for problems 1-3
 */

//System Libraries
#include <iostream>//Input Output Library
#include <cstdlib> //Random number generator seed
#include <ctime>   //Time Library
#include <iomanip> //Format Library
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Loop on the menu
    do{
    
        //Input values
        cout<<"Choose from the list"<<endl;
        cout<<"Type 1 for Problem with Do-While"<<endl;
        cout<<"Type 2 for Problem with While"<<endl;
        cout<<"Type 3 for Problem with For"<<endl;
        cin>>choice;

        //Switch to determine the Problem
        switch(choice){
            case '1':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and Initialize local Variables to main
                int Speed,
		    Hours,
		    Distance = 0; 	

                //Input values
                cout <<"This program Calculate the distance traveled for each hour of the time period\n "
                     << "What is the speed of the vehicle in mph?\n ";
	        cin  >> Speed;
	        cout << "How many hours has it traveled?\n ";
	        cin  >> Hours;
                       
                
                //Loop for each speed
               
                    //Assign a speed and hour
                  
        if (Speed >= 0 && Hours >= 1)
	    {
		cout << "Hour   Distance Traveled\n"
		 << "--------------------------------\n";

                    for (int X = 1; X <= Hours; X++)
		{
			
			Distance += Speed;
			cout << right << setw(4) << X << "        ";
			cout << setw(6) << Distance << endl;
		}
	}
                break;
            }
            case '2':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and Initialize local Variables to main
                int Test,  				
		    Begin = 32;

                //Input values
                cout<<"This program display the characters for the ASCII codes 0 through 127 ";
            

                //Loop to make 6 rows
                for (int Row = 0; Row < 6; Row++)	
	{
                // 16 character on each line    
		Test = Begin + 16; 				
		for(int ASCII = Begin; ASCII < Test; ASCII++)
		{
			cout << static_cast<char>(ASCII) << " ";
		}
                // Start new row one character than last line
		Begin = Test; 					
		cout << endl;
	}
                break;
            }
            case '3':{
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare and Initialize local Variables to main
                int Year;
	        float Risen = 0.0;

                //Input values
                cout<<"Table showing the total number of millimeters the oceans\n"
		    << "will have risen each year for the next 25 years.\n\n"
		    << "    Year        Amount Risen\n"
		    << "                (millimeters)\n"
		    << "-----------------------------\n";
                

                //Loop for each year
                for(Year = 1; Year <= 25; Year++)
	{
		Risen += 1.5;
		cout << right << fixed << showpoint << setprecision(1)
		     << setw(7) << Year << setw(16) << Risen << endl;
	}
                break;
            }
            
            case '4':{
                const float CALORIES_PER_MIN = 3.6;

	int Min,
		Burnt = 0; 		// Acummulator set to 0

	cout << "\nTable displaying number of calories burnt on a\n"
		 << "treadmill that burns 3.9 calories per minute.\n"
		 << "\n   Minutes Ran      Calories Burnt\n"
		 << "------------------------------------------\n";

	for(Min = 5; Min <= 30; Min += 5)
	{
		Burnt = Min * CALORIES_PER_MIN;
		cout << "        "<< Min << "               " << Burnt << endl; 
	}
	cout << endl;
        
                   break;
            
            }
            case'5':{
                const float RATE = 0.04,
				 CURRENT_CHARGE = 2500.0;
	int Year;
	float YrRate;

	cout << "\nCountry club projected rates\n"
		 << "    for the next six years\n"
		 << "-----------------------------\n"
		 << "      Year       Rate\n"
		 << "-----------------------------\n";

	for(Year = 1; Year <= 6; Year++)
	{
		YrRate = CURRENT_CHARGE * (1 + Year * RATE);
		cout << "       " << Year << "         " << YrRate << endl;
	}
	cout << endl;
        
                 break;
        } 
            
            case'6': {
                
                int Test, 		// Test expression variable
		Sum = 0;	// Set accumulator to 0

	// Ask your to enter a positive integer.
	cout << "This program will return the sum of all the\n"
		 << "integers from 1 up to the number you enter.\n"
		 << "Enter a positive integer: ";
	cin  >> Test;

	if (Test > 0)  // Validate that only positive numbers are accepted.
	{
		for (int Num = 1; Num <= Test; Num++)
		{
			Sum += Num;
		}
		cout << "The sum of the integers from 1 up to "
			 << Test << " = " << Sum << ".\n";
	}
                 break;
        }
           
            case'7': {
                float C,
		   F;

	cout << "Table of the Celsius temperatures from 0\n"
		 << "to 20 and their Fahrenheit equivalents:\n\n"
		 << "Celsius     Fahrenheit\n"
		 << "----------------------\n";

	for(C = 0; C <= 20; C++)
	{

		F = (9/5 * C) + 32;
		cout << right << setw(4) << C;
		cout << setw(14) << F << endl;
	}
	cout << endl;
        
                   break;
        }
            case'8': {
                int Num,
		Largest,
		Smallest;

	cout << "Enter a series of numbers and the program will\n"
		 << "display the largest and smallest numbers entered\n"
                 << "enter −99 to signal the end of the series\n"
		 << "Enter a number\n";
	cin	 >> Num;

	Largest = Smallest = Num;

	while (Num != -99)
	{			
		cout << "Enter a number\n";
		cin  >> Num;
		
		if (Num > Largest)
			Largest = Num;

		if (Num < Smallest)
			Smallest = Num;

	}
	cout << "The largest number entered is " << Largest << "." << endl;
	cout << "The smallest number entered is " << Smallest << "." << endl;
        
                break;
        } 
            default:
                cout<<"You are exiting the program"<<endl;
        }
    } while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}