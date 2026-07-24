#include<iostream>

using namespace std;

int findMax(int arr[], int size)
{
    int maxValue = arr[0];
    for (int i=0; i<size; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }   
    }

    return maxValue;
}

int main()
{
    int array1[5] = {500, 300, 200, 400, 100};
    int array2[10] = {90, 75, 3, 92, 4, 5, 10, 50, 79, 96};
    int array3[5] = {1, 2, 3, 4, 5};
    cout << findMax(array1, 5);
    cout << endl;
    cout << findMax(array2, 10);
    cout << endl;
    cout << findMax(array3, 5);
    return 0;
}