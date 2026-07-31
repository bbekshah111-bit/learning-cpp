#include<iostream>

using namespace std;

void reverseString(string s)
{
    int container;

    int size = s.length();

    int first = 0;
    int last = size - 1;

    int left = s[first];
    int right = s[last];

    while (first < last)
    {
        container = s[last];

        s[last] = s[first];
        last--;

        s[first] = container;
        first++;
    }

    cout << s;
}

int main()
{
    string s1 = "bibek";
    string s2 = "world";

    reverseString(s1);
    cout << endl;
    reverseString(s2);

    return 0;
}