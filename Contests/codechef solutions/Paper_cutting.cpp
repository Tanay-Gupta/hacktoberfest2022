#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n, k;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> k;
        cout << (n / k) * (n / k) << endl;
    }
    return 0;
}
