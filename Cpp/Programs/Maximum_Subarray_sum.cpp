// better works with KADANE's Algorithm 
// time complexcity would be O(n)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        if (sum < 0)
            sum = 0;
        mx = max(mx, sum);
    }
    cout << mx << " " << endl;
}
/*
9
-2 1 -3 4 -1 2 1 -5 4
        --------
6
*/