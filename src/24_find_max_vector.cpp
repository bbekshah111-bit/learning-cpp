#include<iostream>
#include<vector>

using namespace std;


void findMax(vector<int>& v)
{
    int max = v[0];

    for (int i=0; i<v.size(); i++)
    {
        if (v[i] > max )
        {
            max = v[i];
        }
    }

    cout << max;
}

void pushBack(int array[], int size, vector<int>& v)
{
    for (int i=0; i<size; i++)
    {
        v.push_back(array[i]);
    }

    findMax(v);
}

int main()
{
    vector<int> v1;
    int array1[5] = {1, 2, 3, 4, 5};
    pushBack(array1, 5, v1);

    cout << endl;

    vector<int> v2;
    int array2[5] = {11, 2, 3, 4, 5};
    pushBack(array2, 5, v2);



    return 0;
}