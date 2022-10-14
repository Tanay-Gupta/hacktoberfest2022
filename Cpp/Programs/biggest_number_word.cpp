#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
}
/*
555642 forming biggest integer number using these character of the string
655542
*/