#include<iostream>
using namespace std;
int main()
{
    int n, max, min, maxindex=0, minindex=0, arr[100];
    double sum=0, avg;
    cout<<"Welcome to Array Statistics!\n"<<endl;
    cout<<"How many numbers? "<<endl;
    cin>>n;
    if(n<1 || n>100)
    {
        cout<<"Please enter a number between 1 and 100."<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        cout<<"Enter number "<<i+1<<" ="<<endl;
        cin>>arr[i];
        sum=sum+arr[i];
    }
    max=arr[0];
    min=arr[0];
    for(int j=0; j<n; j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
            maxindex=j;
        }
        if(arr[j] < min)
        {
           min = arr[j];
           minindex=j;
        }
    }
    cout<<endl;
    cout<<"Your Numbers = ";
    for(int h=0; h<n; h++)
    {
        cout<<arr[h]<<" ";
    }
    cout<<endl;
    cout<<"Reverse = ";
    for(int l=n-1; l>=0; l--)
    {
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    avg=sum/n;
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;
    cout<<"Maximum Number = "<<max<<" at "<<maxindex+1<<" position."<<endl;
    cout<<"Minimum Number = "<<min<<" at "<<minindex+1<<" position."<<endl;
    return 0;
}