#include<iostream>
using namespace std;
int main()
{
    int choice,n;
    cout<<"Welcome to Pattern Printer!\n"<<endl;
    cout<<"Enter \n 1.Right triangle \n 2.Number triangle \n 3.Pyramid \n 4.Diamond"<<endl;
    cin>>choice;
    if(choice>4 || choice<1)
    {
        cout<<"Invalid Choice!"<<endl;
    }
    else
    {
        cout<<"Enter how many rows ="<<endl;
        cin>>n;
        if(n<=0)
        {
            cout<<"Please enter a positive number!"<<endl;
        }
        else
        {
            cout<<endl;
            switch(choice)
            {
                case 1:
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
                break;
                case 2:
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=i;j++)
                    {
                        cout<<j;
                    }
                    cout<<endl;
                }
                break;
                case 3:
                for(int i=1;i<=n;i++)
                {
                    for(int s=1;s<=n-i;s++)
                    {
                        cout<<" ";
                    }
                    for(int j=1;j<=2*i-1;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
                break;
                case 4:
                for(int i=1;i<=n;i++)
                {
                    for(int s=1;s<=n-i;s++)
                    {
                        cout<<" ";
                    }
                    for(int j=1;j<=2*i-1;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
                for(int i=n-1;i>=1;i--)
                {
                    for(int s=1;s<=n-i;s++)
                    {
                    cout<<" ";
                    }
                    for(int j=1;j<=2*i-1;j++)
                    {
                        cout<<"*";
                    }
                    cout<<endl;
                }
                break;
            }
        }
    }
    return 0;
}