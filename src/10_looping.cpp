#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

// int main()
// {
//     vector <float> a = {1.0, 1.3, 2.4};
//     vector <float> b { 2.3, 3.5, 1.3};

//     float dot_product = 0;
//     float dot;

//     if(a.size() != b.size())
//     {
//         cerr << "Invalid input, both matrix must match the size.";
//         return 1;
//     }

//     for (size_t i=0; i < a.size(); i++)
//     {
//         dot = a[i] * b[i];

//         dot_product += dot;

//         cout << dot << endl;
//     }


//     cout << " sum: " << dot_product;

// }

float dotProduct(vector<float> a, vector<float> b)
{
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
    }

    return dot_product;
}

float magnitude(vector<float> a){

}

int main(){
    cout << dotProduct({1.2, 3.4, 5.5}, {3, 4.4, 3.2});
}



