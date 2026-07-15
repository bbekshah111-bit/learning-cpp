#include<iostream>
#include<fstream>

using namespace std;

int main()
{

    ofstream file("college.txt");
    file << "Bibek" << endl;
    file << 18 << endl;
    file << "C++";

    file.close();

    return 0;
}
