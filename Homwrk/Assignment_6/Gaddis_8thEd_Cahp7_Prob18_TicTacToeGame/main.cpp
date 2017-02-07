/* 
  File:   main.cpp
  Author: Martha Andyihun
  Created on February 6, 2017 12:15 PM
  Purpose:  Program that displays the grade book of students
 */

#include<iostream>
#include<cstdlib>
using namespace std;




char square[11]={'0','1','2','3','4','5','6','7','8','9','\0'};
void board();
int win();



int main()
{

char playagain='y';
while(playagain=='y')
{
cout<<"Welcome in my Tic Tac Toe!!!\n\n\n"<<endl;
int player=1;
int i,choice;
char mark;

do
{

board();
player=(player%2)?1:2;
cout<<"Player "<<player<<" enter a number: ";
cin>>choice;
mark=(player==1)?'X':'O';

if(choice==1 && square[1]=='1')
square[1]=mark;

else if (choice == 2 && square[2] == '2')

square[2] = mark;
else if (choice == 3 && square[3] == '3')

square[3] = mark;
else if (choice == 4 && square[4] == '4')

square[4] = mark;
else if (choice == 5 && square[5] == '5')

square[5] = mark;
else if (choice == 6 && square[6] == '6')

square[6] = mark;
else if (choice == 7 && square[7] == '7')

square[7] = mark;
else if (choice == 8 && square[8] == '8')

square[8] = mark;
else if (choice == 9 && square[9] == '9')

square[9] = mark;
else
{
cout<<"\nINVALID MOVE \n\n";
player--;

}
i=win();
player++;
}while(i==-1);
board();
if(i==1)
cout<<"Player"<<--player<<" win";
if(i==0)
cout<<"Game draw";



cout<<"\n\nWanna play again(y/n)?:";
cin>>playagain;
cout<<endl;

if(playagain=='y')
{
cout<<"You choice to play again\n\n";
}
else if(playagain=='n')
{
cout<<"You choice not to play again\n\n";
}
else
{
cout<<"You didnt put an valid character so i will take it like(n),so the program will close.\n\n";
}

for(int c=0;c<40;c++)
{
cout<<"****";
}
cout<<endl;

square[1] = '1';
square[2] = '2';
square[3] = '3';
square[4] = '4';
square[5] = '5';
square[6] = '6';
square[7] = '7';
square[8] = '8';
square[9] = '9';
}
}

int win()
{
if(square[1]==square[2]&&square[2]==square[3])
return 1;

else if(square[4]==square[5]&&square[5]==square[6])
return 1;

else if(square[7]==square[8]&&square[8]==square[9])
return 1;

else if(square[1]==square[4]&&square[4]==square[7])
return 1;

else if(square[2]==square[5]&&square[5]==square[8])
return 1;

else if(square[3]==square[6]&&square[6]==square[9])
return 1;

else if(square[1]==square[5]&&square[5]==square[9])
return 1;

else if(square[3]==square[5]&&square[5]==square[7])
return 1;

else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'&&square[5] != '5'
&& square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
return 0;

else
return -1;

}

void board()
{


cout<<"\tTic Tac Toe\t\t\n\n";
cout<<"PLAYER 1(X) , PLAYER 2(O)\n\n";
cout<<square[1]<<"|"<<square[2]<<"|"<<square[3]<<endl;
cout<<"-----"<<endl;
cout<<square[4]<<"|"<<square[5]<<"|"<<square[6]<<endl;
cout<<"-----"<<endl;
cout<<square[7]<<"|"<<square[8]<<"|"<<square[9]<<endl;


}
