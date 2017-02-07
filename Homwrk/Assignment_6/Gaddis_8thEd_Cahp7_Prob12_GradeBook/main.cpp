/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on February 6, 2017 12:15 PM
  Purpose:  Program that displays the grade book of students
 */

#include <iomanip>
#include<iostream>
#include<string>

using namespace std;

int main()
{
const int size=5;
//array for students’ names
string sNames[size];
//get Names
for(int i=0;i<5;i++)
{
cout<<"Enter a student’s name: ";
cin>>sNames[i];
}

//get scores
double scoreForS[size][4], avg[size],sum[size]={0,0,0,0,0};

for(int x=0;x<5;x++)
{
for(int y=0;y<4;y++)
{
cout<<"Enter the score for student."<<(x+1)<<"" <<endl;
cin>>scoreForS[x][y];
//input validation
while(scoreForS[x][y]<0||scoreForS[x][y]>100)
{
cout<<"Error.The range of score is 0 to 100. Reenter : ";
cin>>scoreForS[x][y];
}
sum[x]+=scoreForS[x][y];
}
}

//drop lowest score

double lowest[size];

for(int a=0;a<5;a++)
{
lowest[a]= scoreForS[a][0];
for(int b=1;b<4;b++)
{
if (lowest[a]>scoreForS[a][b])
lowest[a]= scoreForS[a][b];

}
sum[a]-=lowest[a];
}

//get avg
for(int c=0;c<5;c++)
{
avg[c]=sum[c]/3.0;
}

//scale
char grade[size];
for(int d=0;d<5;d++)
{
if(avg[d]>=90)grade[d]='A';
else if(avg[d]>=80)grade[d]='B';
else if(avg[d]>=70)grade[d]='C';
else if(avg[d]>=60) grade[d]='D';
else grade[d]='F';
cout<<"\nStudent "<<sNames[d]<<" get "<<grade[d];
}


return 0;
}