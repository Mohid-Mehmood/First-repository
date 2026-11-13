#include <iostream>
using namespace std;
int main()
{
    int n;
    long long next;
    long long a=0;
    long long b=1;
    cout<<"Welcome to Fibonacci series!\n"<<endl;
    cout<<"Enter how many terms to print ="<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Please enter a positive number."<<endl;
    }
    else if(n>90)
    {
        cout<<"Too many terms. Please enter 90 or fewer."<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<i<<". "<<a<<endl;
            next=a+b;
            a=b;
            b=next;
        }
    }
    return 0;
}