#include<iostream>

using namespace std;

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool is_prime = true;

    if(n<= 1)
    {
        is_prime = false;
    }

    else if(n <= 3)
    {
        is_prime = true;
    }

    else if(n%2 == 0 || n%3 == 0)
    {
        is_prime = false;
    }

    int m = (n+1)/2;

    for(int i = 5; i<=m; i += 2 )
    {
        if(n%i == 0)
        {
            is_prime = false;
            break;
        }
    }

    if (is_prime)
    {
        cout << "prime number";
    }

    else 
    {
        cout << "not a prime";
    }


    return 0;


}