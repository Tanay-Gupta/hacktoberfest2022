#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> a >> b;
        int l1 = a.length() - 1, l2 = b.length() - 1;
        int count = 0;
        switch (a[l1])
        {
        case 'S':
            switch (b[l2])
            {
            case 'S':
                if (l1 > l2)
                {
                    cout << "<" << endl;
                }
                else if (l1 < l2)
                {
                    cout << ">" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            break;
            case 'M':
                cout << "<" << endl;
            break;
            case 'L':
                cout << "<" << endl;
            break;
            }
        break;
        case 'M':
            switch (b[l2])
            {
            case 'S':
                cout << ">" << endl;
            break;
            case 'M':
                cout << "=" << endl;
            break;
            case 'L':
                cout << "<" << endl;
            }
        break;
        case 'L':
            switch (b[l2])
            {
            case 'S':
                cout << ">" << endl;
            break;
            case 'M':
                cout << ">" << endl;
            break;
            case 'L':
                if (l1 > l2)
                {
                    cout << ">" << endl;
                }
                else if (l1 < l2)
                {
                    cout << "<" << endl;
                }
                else
                {
                    cout << "=" << endl;
                }
            }
            break;
        }
    }
    return 0;
}
