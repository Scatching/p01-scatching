//Author: Sarah Catching
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;


int main()
{
    srand (time(NULL) );
    int randomNumber;
    int guess;
    randomNumber=rand() % 10+1;
    do {
    cout<<"Let's play a game."<<endl;
    cout<<"Enter a number between 1 and 10."<<endl;
    cin>>guess;
    cout<<"You guessed "<<guess<<"."<<endl;
    }
    while(randomNumber=rand() );





   /* srand ( time(NULL) );
    int randomNumber;
    randomNumber=rand() % 10+1;

    do {
    cout<<"Try and guess the number I am thinking of."<<endl;
    while{
    int guess
    cin>>guess;
    if(guess==randomNumber)
    {
    cout<<"You guessed "<<guess<<"."<<endl;
    cout<<"Correct!"<<endl;
    }
    else
    {   
    cout<<"WRONG."<<endl;
    }
    }}}*/













        return 0;
}
