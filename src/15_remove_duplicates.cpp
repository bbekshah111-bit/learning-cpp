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

int removeDuplicate(int array[], int size)
{

    int slow = 0;
    int fast = 1;


    for (int i=1; i<=size-1; i++)
    {
        if (array[slow] != array[fast])
        {
            slow++;
            array[slow] = array[fast];
        }

        fast++;
    }

    printArray(array, size);

    return slow + 1;

}

int main()
{
    int array[9] = {1, 1, 2, 2, 2, 3, 4, 4, 5};

    int array1[5] = {1, 2, 3, 4, 5};

    int array2[4] = {1, 1, 1, 1};

    cout << removeDuplicate(array, 9);
    cout << endl;
    cout << removeDuplicate(array1, 5);
    cout << endl;
    cout << removeDuplicate(array2, 4);
    return 0;
}