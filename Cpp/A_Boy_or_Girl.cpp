#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[105];
    set<char> s;
    cin >> a;

    for (int i = 0; a[i] !='\0'; ++i)
    {
        s.insert(a[i]);
    }
    if (s.size() % 2 )
    {
        cout << "IGNORE HIM!"<<endl;;
    }
    else
    {
        cout << "CHAT WITH HER!"<<endl;;
    }
   
    
    return 0;
}