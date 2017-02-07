/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on February 6, 2017 12:15 PM
  Purpose:  Program to calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.
 */

#include <iostream>
#include <cctype>

using namespace std;

void checkAnswers(char[], char[], int, int);


int main() {
const int NUM_QUESTIONS = 20;
const int MIN_CORRECT = 15;
char answers[NUM_QUESTIONS] = {
'A', 'D', 'B', 'B', 'C',
'B', 'A', 'B', 'C', 'D',
'A', 'C', 'D', 'B', 'D',
'C', 'C', 'A', 'D', 'B'
};

char stu_answers[NUM_QUESTIONS];

//Loop for users answers
for (int replies = 0; replies < NUM_QUESTIONS; replies++) {
cout<< "Please enter your answers: "
<< (replies + 1) << ": ";
cin >> stu_answers[replies];

//Validation of users answers
while (stu_answers[replies] != 'A' && stu_answers[replies] != 'B' && stu_answers[replies] != 'C' && stu_answers[replies] != 'D') {
cout << "You must enter A, B, C, or D\n";

cout<< "Please enter your answers: "
<< (replies + 1) << ": ";
cin >> stu_answers[replies];
}

}

checkAnswers(answers, stu_answers, NUM_QUESTIONS, MIN_CORRECT);

return 0;
}

void checkAnswers(char answers1[], char stu_answers1[], int NUM_QUESTIONS, int MIN_CORRECT) {
//cout << "max: " << NUM_QUESTIONS;
int correctAnswers = 0;

//Check the student's replies against the correct answers
for (int i = 0; i < NUM_QUESTIONS; i++)	{
if (answers1[i] == stu_answers1[i])
correctAnswers++;
}
//Did they pass or fail?
cout << "\nYou must have at least 15 correct to pass.";
if (correctAnswers >= MIN_CORRECT) {
cout << "\nStudent passed the exam\n\n";
}
else {
cout <<"\nStudent failed the exam\n\n";
}

//Display a list of the questions that were incorrectly answered.
cout << "The list below shows the question numbers of the incorrectly";
cout << " answered questions.\n";
for (int i = 0; i < NUM_QUESTIONS; i++)	{
if (answers1[i] != stu_answers1[i])
cout << "Question # " << i << " is incorrect." << endl;
}

//Display the number of correct and incorrect answers provided by the student.
cout << "\nCorrect Answers = " << correctAnswers << endl;
cout << "Incorrect Answers = " << NUM_QUESTIONS - correctAnswers << endl;
}
