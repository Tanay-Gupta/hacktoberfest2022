#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    //convert to upper case
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    cout << str << endl;
    // to convert to lower case
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    cout << str << endl;
    //to convert string to directly to uppercase using function
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    // beginning iterator end iterator beginning index  to which case
    cout << str << endl;

    //to convert string to directly to lowercase using function
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    // beginning iterator end iterator beginning index  to which case
    cout << str << endl;
}