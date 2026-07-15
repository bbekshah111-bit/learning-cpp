#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream file("college.txt");

    string name;
    int age;
    string language;

    file >> name;
    file >> age;
    file >> language;

    cout << name << endl;
    cout << age << endl;
    cout << language << endl;

    file.close();

    return 0;
}