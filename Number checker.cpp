#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Welcome to Number Checker!"<<endl;
    cout<<"Enter the Number ="<<endl;
    cin>>n;
    if(n%2==0)
    {
        cout<<"The given Number is EVEN."<<endl;
    }
    else
    {
        cout<<"The given number is ODD."<<endl;
    }
    if(n<0)
    {
        cout<<"Factorial is not defined for negative numbers"<<endl;
    }
    else if (n>20)
    {
        cout<<"The given number is too large for Factorial"<<endl;
    }
    else
    {
        long long fact=1;
        for(int i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        cout<<"The Factorial of the given number is "<<fact<<endl;
    }
    bool isPrime = true;
    if (n <= 1)
    {
        isPrime = false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "The given number is a Prime Number." << endl;
    }
    else
    {    
        cout << "The given number is NOT a Prime Number." << endl;
    }
    return 0;
}