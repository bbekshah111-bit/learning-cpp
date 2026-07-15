#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <float> a = {1.0, 1.3, 2.4};
    vector <float> b { 2.3, 3.5, 1.3};

    float dot_product = 0;
    float dot;

    if(a.size() != b.size())
    {
        cerr << "Invalid input, both matrix must match the size.";
        return 1;
    }

    for (size_t i=0; i < a.size(); i++)
    {
        dot = a[i] * b[i];

        dot_product += dot;

        cout << dot << endl;
    }


    cout << " sum: " << dot_product;

}

