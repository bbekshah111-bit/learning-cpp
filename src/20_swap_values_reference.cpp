#include<iostream>

using namespace std;

void swapValues(int& a, int& b)
{
    int temp = a;

    a = b;

    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    cout << a << " " << b << endl;

    swapValues(a, b);

    cout << a << " " << b;
    
    return 0;
}