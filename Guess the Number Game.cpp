#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    char again;
    do
    {
        int secret=rand()%100+1;
        int guess,attempts=0;
        const int max_attempts=10;
        bool won=false;
        cout<<"Welcome to Guess the Number game!"<<endl;
        cout<<endl;
        cout<<"Guess the Number between 1 and 100!"<<endl;
        while(attempts<max_attempts)
        {
            cout<<"Attempts left ="<<max_attempts-attempts<<endl;
            cout<<endl;
            cout<<"Enter your guess = ";
            cin>>guess;
            if(cin.fail())
            {
               cin.clear();
               cin.ignore(1000, '\n');
               cout<<"Please enter a number!"<<endl;
               continue;
            }
            cout<<endl;
            attempts++;
            if(guess==secret)
            {
                cout<<"Horray! You have WON in "<<attempts<<" attempts..."<<endl;
                won=true;
                break;
            }
            else if(guess>secret)
            {
                cout<<"Too High..."<<endl;
            }
            else
            {
                cout<<"Too Low..."<<endl;
            }
        }
        if(!won)
        {
            cout<<"Game over! The number was "<<secret<<".\n"<<endl;
        }
        cout<<"play Again? (y/n)"<<endl;
        cin>>again;
    } while (again=='y' || again=='Y');
    return 0;
}