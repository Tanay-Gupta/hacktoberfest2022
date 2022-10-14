#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//to count maximum character occurences in string
int main()
{
    string str;
    getline(cin, str);
    int freq[26];
    for (int i = 0; i < 26; i++)
        freq[i] = 0;

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++;
    }
    char ans = 'a';
    int ma = 0;

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > ma)
        {
            ma = freq[i];
            ans = i + 'a';
        }
    }

    cout << ma << "  " << ans << endl;
}