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
            
            default:
                cout<<"You are exiting the program"<<endl;
        }
    } while(choice>='1'&&choice<='3');
    
    //Exit stage right!
    return 0;
}