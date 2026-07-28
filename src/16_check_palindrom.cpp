#include<iostream>

using namespace std;

bool isPalindrome(string s)
{
    int size = s.length();

    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        if (s[left] == s[right])
        {
            left++;
            right--;
        }

        else
        {
            return false;
        }

    }
    return true;
}

int main()
{
    cout << isPalindrome("wow");
    cout << endl;
    cout << isPalindrome("racecar");
    cout << endl;
    cout << isPalindrome("hello");
    cout << endl;
    cout << isPalindrome("world");
    cout << endl;
    cout << isPalindrome("a");
    cout << endl;
    cout << isPalindrome("");

    return 0;
}
