#include <iostream>
using namespace std;
int main()
{
     double a,b;
     int choice;
     float div;
     do
     {
        cout << "Enter first value:"<<endl;
        cin >> a;
        cout << "Enter second value:"<<endl;
        cin >> b;
        cout << "Press \n 1. Add \n 2. Subtract \n 3. Divide \n 4. Multiply \n 5. Exit"<<endl;
        cin >> choice;
        switch (choice)
        {
            case 1:
            cout << "Result =" << a+b <<endl;
            break;
            case 2:
            cout << "Result =" << a-b <<endl;
            break;
            case 3:
            if(b==0)
            {
                cout<<"Error: cannot divide by 0"<<endl;
            }
            else
            {
                div=(float)a/(float)b;
                cout<<"Result ="<<div<<endl;
            }    
            break;
            case 4:
            cout<<"Result ="<<a*b<<endl;
            break;
            default:
            cout<<"Good bye!"<<endl;
            break;
        }
     }
    while(choice >= 1 && choice <= 4);
    return 0;
}

