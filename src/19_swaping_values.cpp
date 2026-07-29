#include<iostream>

using namespace std;

void swapValues(int* a, int* b)
{

    int p = *a;

    *a = *b;

    *b = p;

}

int main()
{
    int x = 10;
    int y = 20;

    cout << x << " " << y << endl;

    int* p = &x;
    int* q = &y;

    swapValues(p, q);

    cout << x << " " << y; 

    return 0;
}