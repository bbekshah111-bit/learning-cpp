#include<iostream>

using namespace std;

void printArray(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}


void reverseArray(int array[], int size)
{
    int right = size - 1;
    int left = 0;

    int container;

    while (left < right)
    {
        container = array[right];

        array[right] = array[left];
        right--;

        array[left] = container;
        left++;


    }

    printArray(array, size);
}


int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    cout << endl;
    cout << endl;
    int arr2[6] = {1, 2, 3, 4, 5, 6};

    reverseArray(arr1, 5);
    reverseArray(arr2, 6);

    return 0;
}