#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    int score;

    cout<<"Enter your Name: ";
    cin>> name;

    cout<<"Enter your score: ";
    cin>> score;

    if(score >= 91)
    {
        cout<<"Congratulations"<< name <<", you have got A+ grade.";
    }

    else if(score >= 81)
    {
        cout<<"Congratulations"<< name << ", you have got A grade.";
    }

    else if(score >= 71)
    {
        cout<<"Congratulations"<< name <<", you have got B+ grade.";
    }

    else if(score >= 61)
    {
        cout<<"Congratulations"<< name <<", you have got B grade.";
    }

    else if(score >= 51)
    {
        cout<<"Congratulations"<< name <<", you have got C+ grade.";
    }

    else if(score >= 40)
    {
        cout<< name <<", you have got C grade.";
    }

    else
    {
        cout<< name << ", sorry! you are fail.";
    }

    return 0;
}