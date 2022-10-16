#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a - (b + c) == 0)
        {
            cout << "YES" << endl;
        }
        else if (b - (a + c) == 0)
        {
            cout << "YES" << endl;
        }
        else if (c - (a + b) == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}