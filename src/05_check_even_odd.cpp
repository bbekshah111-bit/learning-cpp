#include<iostream>
#include<string>

using namespace std;

int main()
{
    int number;

    cout<< "Enter any number greater than 1 or less than -1 to check whether it is even number or odd number: ";
    cin>> number;

    if(number >= 2)
    {
        if(number%2 == 0)
        {
            cout<<number<<" is a positive even number.";
        }

        else
        {
            cout<<number<<" is a positive odd number.";
        }
    }

    else if(number <= -2)
    {
        if(number%2 == 0)
        {
            cout<<number<<" is a negative even number";
        }

        else
        {
            cout<<number<<" is a negaive odd number.";
        }
    }

    else
    {
        cout<<"Invalid! number, please enter number as suggested above.";
    }


    return 0;

}