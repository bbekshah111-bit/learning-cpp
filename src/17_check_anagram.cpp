#include<iostream>

using namespace std;

bool isAnagram(string s1, string s2)
{
    int freq[26] = {0};
    int size = s1.length();

    if (s1.length() != s2.length())
    {
        return false;
    }

    for (int i=0; i<size; i++)
    {
        freq[s1[i] - 'a']++;
    }

    for (int i=0; i<size; i++)
    {
        freq[s2[i] - 'a']--;
    }

    for (int i=0; i<size; i++)
    {
        if (freq[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s1 = "listen";
    string s2 = "silent";

    string s3 = "hello";
    string s4 = "world";

    string s5 = "aee";
    string s6 = "aae";

    string s7 = "three";
    string s8 = "there";

    cout << isAnagram(s1, s2);
    cout << endl;
    cout << isAnagram(s3, s4);
    cout << endl;
    cout << isAnagram(s5, s6);
    cout << endl;
    cout << isAnagram(s7, s8);
    return 0; 
}