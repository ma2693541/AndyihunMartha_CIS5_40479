/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program to perform number analysis
 */

// System Libraries
#include <iostream>
#include <vector> 
#include <ctime>
#include <cstdlib> 

using namespace std;


// User Libraries
// Global Constants
// Function Prototypes
 void fillVec(vector<int> &even, vector<int> &odd, int size);
 void printVec(vector<int> &even, vector<int> &odd, int size);
 void fillArray(int list[][2], int size);
 void printArray(int list[][2], int size);

// execution begins here: 
int main() {
	// declare variables
	int size = 100; 
	
	// create a vector to hold a set of integers
	vector<int> even(size);
	vector<int> odd(size); 

	cout << "Please declare a vector size: ";
	cin >> size; 

	even.push_back(size); 
	odd.push_back(size); 
	// cout << "Vector size = " << even.size() << endl; 

	fillVec(even, odd, size);
	printVec(even, odd, size); 

	//create a 2D array to hold the even and odd sets of integers
	int list[][2];
	cout << "Please declare an array size: ";
	cin >> size;

	fillArray(list, size);
	printArray(list, size);

	

return 0;
}

void fillVec(vector<int> &even, vector<int> &odd, int size)
{
	srand((unsigned)time(0)); // initializes random number generator
	unsigned int e, o; 

	// generates even numbers and even vector
	for (unsigned int i=0; i<size; i++)
	{
		e = 5 + rand() % 49; // num range from 5-49
		even[i] = e * 2; 
	}

	// generates odd numbers and odd vector 
	for (unsigned int j=0; j<size; j++)
	{
		o = 5 + rand() % 49; 
		odd[j] = o * 2 + 1; 
	}
}

void printVec(vector<int> &even, vector<int> &odd, int size)
{
	unsigned int cols(0);
	cout << "How many columns would you like to display (limit " << size << " )?" << endl;
	cin >> cols;
	
	cout << "Random Evens: "; 
	for (unsigned int i=0; i<cols; i++)
	{
		cout << even[i] << " "; 
	}
	cout << endl; 
	cout << "Random Odds: "; 
	for (unsigned int j=0; j<cols; j++)
	{
		cout << odd[j] << " "; 
	}
	cout << endl; 
}

void fillArray(int list[][2], int size)
{
	int current(0);
	
	for (unsigned int i = 0; i < size; i++)
	{
		current = rand() % 49 + 5;
		list[i][0] = current * 2;
	}

	for (unsigned int j = 0; j < size; j++)
	{
		current = rand() % 49 + 5;
		list[j][1] = current * 2 + 1;
	}
}
void printArray(list, size)
{
	unsigned int cols(0);
	cout << "How many columns would you like to display (limit "<< size << ")?" << endl;
	cin >> cols;

	cout << "Random Evens: "; 
	for (unsigned int i=0; i<cols; i++)
	{
		cout << even[i] << " "; 
	}
	cout << endl; 
	cout << "Random Odds: "; 
	for (unsigned int j=0; j<cols; j++)
	{
		cout << odd[j] << " "; 
	}
	cout << endl; 
}
