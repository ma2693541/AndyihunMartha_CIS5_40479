/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on January 31, 2017, 12:15 PM
  Purpose:  program that Write a program that calculates the average of a group of test scores, where the
  lowest score in the group is dropped.
 */

#include <iostream>
using namespace std;

// Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
	int Score1, Score2, Score3, Score4, Score5;

	// Display program introduction
	cout << "\nThis program calculates the average of five Scores.\n";

	// Call getScore function once for each of the five scores
	getScore(Score1);
	getScore(Score2);
	getScore(Score3);
	getScore(Score4);
	getScore(Score5);

	// Call calcAverage and pass the five scores
	calcAverage(Score1, Score2, Score3, Score4, Score5);
	
	return 0;
}

/*****************************************************************************
 *                             getScore                                      *
 *     This function asks the user for a test score. Stores it in a          *
 *     reference parameter variable, and validates it.                       * 
 *****************************************************************************/
void getScore(int &Score)
{
	do
	{
		cout << "Enter a test score: ";
		cin  >> Score;

		if (Score < 0 || Score > 100)
		{
			cout << "\nInvaild test score!\n"
				 << "Test score must be greater than 0 and less than 100.\n\n";
		}

	} while(Score < 0 || Score > 100);

}

/*******************************************************************************
 *                            calcAverage                                      *
 * This function is passed five test scores. it calls the  function findLowest *
 * and calculates and displays the average of the four highest test scores.    *
 *******************************************************************************/
void calcAverage(int Score1, int Score2, int Score3, int Score4, int Score5)
{
	int Lowest; 	// Lowest test score
	double Avg;     // Average of the four highest test scores

	// Call function findLowest
	Lowest = findLowest(Score1, Score2, Score3, Score4, Score5);

	// Caculate average of four highest test scores
	if (Lowest == Score1)
		Avg = (Score2 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score2)
		Avg = (Score1 + Score3 + Score4 + Score5)/4;
	else if(Lowest == Score3)
		Avg = (Score2 + Score1 + Score4 + Score5)/4;
	else if(Lowest == Score4)
		Avg = (Score2 + Score3 + Score1 + Score5)/4;
	else
		Avg = (Score2 + Score3 + Score4 + Score1)/4;
	
	// Display average
	cout << "\nThe average of the four highest scores is "
		 << Avg << ".\n\n";
}

/********************************************************************************
 *                              findLowest                                      *
 *        This function returns the lowest of five scores pass to it            *
 ********************************************************************************/
int findLowest(int Score1, int Score2, int Score3, int Score4, int Score5)
{	// Determine and return lowest test score
	if (Score1 < Score2 && Score1 < Score3 && Score1 < Score4 &&
	    Score1 < Score5)
		return Score1;
	else if (Score2 < Score1 && Score2 < Score3 && Score2 < Score4 &&
	    Score2 < Score5)
		return Score2;
	else if (Score3 < Score2 && Score3 < Score1 && Score3 < Score4 && 
		Score3 < Score5)
		return Score3;
	else if (Score4 < Score2 && Score4 < Score3 && Score4 < Score1 &&
		Score4 < Score5)
		return Score4;
	else
		return Score5;	
}