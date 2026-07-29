#include<iostream>

using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;

    cout << p << endl; //pritning address that pointer p holds

    cout << *p << endl; //printing the value at the address which p holds
    cout << *(p + 1) << endl;
    cout << arr[2] << endl;
    cout << *(arr + 2);
}