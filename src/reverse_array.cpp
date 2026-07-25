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


void reverse_array(int array[], int size)
{
    int right = size - 1;
    int left = 0;

    int conatiner;

    while (left < right)
    {
        conatiner = array[right];

        array[right] = array[left];
        right--;

        array[left] = conatiner;
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

    reverse_array(arr1, 5);
    reverse_array(arr2, 6);

    return 0;
}