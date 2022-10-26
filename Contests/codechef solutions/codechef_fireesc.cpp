#include <bits/stdc++.h>
using namespace std;

// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define endl '\n'
typedef unsigned long long ull;
typedef long double lld;

#define debug(x) cout << #x << "=" << x << endl;
#define debug2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626

const int mod = 1000000007;
const int N = 1e5 + 10;
vector<int> adj[N];
int visited[N], cnt[N];

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

void dfs(int v)
{
    visited[v] = 1;
    cnt[v] = 1;
    for (int child : adj[v])
    {
        if (visited[child] == 1)
        {
            continue;
        }
        if (visited[child] == 0)
        {
            dfs(child);
        }
        cnt[v] += cnt[child];
    }
}
void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
        cnt[i] = 0;
        visited[i] = 0;
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int c = 0;
    ll t = 1;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            c++;
            dfs(i);
            t = (t * cnt[i]) % mod;
        }
    }
    cout << c << " " << (t % mod) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
