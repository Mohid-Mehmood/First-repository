#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    char again;
    cout<<"Welcome To The Game!"<<endl;
    do
    {
        string a, b;
        int n=rand()%3+1;
        int choice;
        if(n==1)
        {
            a="Stone";
        }
        else if(n==2)
        {
            a="Paper";
        }
        else
        {
            a="scissor";
        }
        cout<<"Enter:\n 1.Stone \n 2.Paper \n 3.Scissors."<<endl;
        cin>>choice;
        if(choice==1)
        {
            b="Stone";
        }
        else if(choice==2)
        {
            b="Paper";
        }
        else if(choice==3)
        {
            b="scissor";
        }
        else
        {
            cout<<"Invalid Input!"<<endl;
            return 0;
        }
        cout<<"Stone...Paper...Scissor..."<<endl;
        cout<<"Computer: "<<a<<"\nYou     : "<<b<<endl;
        if(n==1 && choice==1)
        {
            cout<<"Match Ties!"<<endl;
        }
        else if(n==1 && choice==2)
        {
            cout<<"You Won!"<<endl;
        }
        else if(n==1 && choice==3)
        {
            cout<<"You Lose!"<<endl;
        }
        else if(n==2 && choice==1)
        {
            cout<<"You Lose!"<<endl;
        }
        else if(n==2 && choice==2)
        {
            cout<<"Match Ties!"<<endl;
        }
        else if(n==2 && choice==3)
        {
            cout<<"You Won!"<<endl;
        }
        else if(n==3 && choice==1)
        {
            cout<<"You Won!"<<endl;
        }
        else if(n==3 && choice==2)
        {
            cout<<"You Lose!"<<endl;
        }
        else if(n==3 && choice==3)
        {
            cout<<"Match ties!"<<endl;
        }
        else
            cout<<"404 ERROR!"<<endl;
        cout<<endl;
        cout<<"Play Again? (y/n)"<<endl;
        cin>>again;
    } while (again=='y' || again=='Y');
    return 0;
}