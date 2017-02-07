/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 3, 2017, 12:15 PM
  Purpose:  Program to perform number analysis
 */

#include <iostream>
 
#include <string>
 
#include <fstream>
 
using namespace std;
 
int main()
{
    // Ask the user for a file name. Assume the file contains a series of
    // numbers, each written on a separate line. The program should read the
    // contents of the file into an array and then display the following data:
 
    // – The lowest number in the array.
    // – The highest number in the array.
    // – The total of the numbers in the array.
    // – The average of the numbers in the array.
 
    const int ARRAY_SIZE = 12; // Array size.
    int numbers[ARRAY_SIZE]; // Array with 12 elements.
    int count = 0; // Loop counter variable.
 
    string filename; // For the user to enter the file name.
    ifstream inputFile; // Input the file stream object.
 
    // Get the file name from the user.
 
    cout << "Enter the name of the file you wish to open : ";
    cin >> filename;
 
    inputFile.open(filename); // Open the file.
    // If the file successfully opened, process it.
 
    if (inputFile)
    {
        while (count < ARRAY_SIZE && inputFile >> numbers[count])
        {
            count++;
        }
 
        // Close the file.
        inputFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n\n";
    }
 
    // Display the numbers read.
 
    int value = count;
 
    cout << "There are " << value << " numbers in the array.\n\n";
 
    cout << "The numbers are : ";
 
    for (int index = 0; index < count; index++)
    {
        cout << numbers[index] << " ";
 
    }
    cout << "\n";
 
    // Display the sum of the numbers.
 
    cout << "The sum of these numbers is : ";
 
    int sum = 0; // Initialize accumulator.
    for (int count_Sum = 0; count_Sum < ARRAY_SIZE; count_Sum++)
    {
        sum += numbers[count_Sum];
    }
 
    cout << sum << "\n\n";
 
    // Display the average of the numbers.
 
    cout << "The average of these numbers is : ";
 
    double total = 0; // Initialize accumulator.
    double average; // To hold the average.
 
    for (int count_Average = 0; count_Average < ARRAY_SIZE; count_Average++)
    {
        total += numbers[count_Average];
    }
 
    average = total / ARRAY_SIZE;
 
    cout << average << "\n\n";
 
    // Display the highest value of the numbers.
 
    cout << "The highest value of these numbers is : ";
 
    int count_Highest;
    int highest;
 
    highest = numbers[0];
    for (count_Highest = 1; count_Highest < ARRAY_SIZE; count_Highest++)
    {
        if (numbers[count_Highest] > highest)
        {
            highest = numbers[count_Highest];
        }
    }
    cout << highest << "\n\n";
 
    // Display the lowest value of the numbers.
 
    cout << "The lowest of these numbers is : ";
 
    int count_Lowest;
    int lowest;
 
    lowest = numbers[0];
    for (count_Lowest = 1; count_Lowest < ARRAY_SIZE; count_Lowest++)
    {
        if (numbers[count_Lowest] < lowest)
        {
            lowest = numbers[count_Lowest];
        }
    }
    cout << lowest << "\n\n";
 
    return 0;
 
    system("pause");
 
}
