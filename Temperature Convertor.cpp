#include <iostream>
using namespace std;
int main()
{
    double temp,c,f,k;
    int choice;
    cout<<"Choice option \n 1.Celsius to Fahrenheit \n 2.Fahrenheit to Celsius \n 3.Celsius to Kelvin \n 4.Kelvin to Celsius \n 5.Fahrenheit to Kelvin \n 6.Kelvin to Fahrenheit"<<endl;
    cin>>choice;
    if(choice<=6 && choice>=1)
    {
        cout<<"Enter the Temperature="<<endl;
        cin>>temp;
        switch (choice)
        {
            case 1:
            f=(temp*9/5)+32;
            cout<<"Result = "<<f<<" F"<<endl;
            break;
            case 2:
            c=(temp-32)*5/9;
            cout<<"Result = "<<c<<" C"<<endl;
            break;
            case 3:
            k=temp+273.15;
            cout<<"Result = "<<k<<" K"<<endl;
            break;
            case 4:
            if (temp < 0)
            {
                cout << "Error: Kelvin cannot be negative" << endl;
            }
            else
            {
                c=temp-273.15;
                cout<<"Result = "<<c<<" C"<<endl;
            }
            break;
            case 5:
            k=(temp-32)*5/9+273.15;
            cout<<"Result = "<<k<<" K"<<endl;
            break;
            case 6:
            if (temp < 0)
            {
                cout << "Error: Kelvin cannot be negative" << endl;
            }
            else
            {
                f=(temp-273.15)*9/5+32;
                cout<<"Result = "<<f<<" F"<<endl;
            }
            break;
        }
    }
    else
    {
        cout<<"Invalid Choice!"<<endl;
    }
    return 0;
}