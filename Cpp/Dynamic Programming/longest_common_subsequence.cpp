#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int lcs(int i, int j, string &s, string &t, vector<vector<int>> &dp)
{
  if (i < 0 || j < 0)
    return 0;
  if (dp[i][j] != -1)
    return dp[i][j];

  if (s[i - 1] == t[j - 1])
    return dp[i][j] = 1 + lcs(i - 1, j - 1, s, t, dp);
  else
    return dp[i][j] = max(lcs(i - 1, j, s, t, dp), lcs(i, j - 1, s, t, dp));
}

int lcsfunCall(string s, string t)
{
  int n = s.size();
  int m = t.size();
  vector<vector<int>> dp(n, vector<int>(m, -1));
  return lcs(n, m, s, t, dp);
}

int lcsTabultion(string s, string t)
{
  int n = s.size();
  int m = t.size();
  vector<vector<int>> dp(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++)
    dp[i][0] = 0;
  for (int j = 0; j < m; j++)
    dp[0][j] = 0;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (s[i - 1] == t[j - 1])
        dp[i][j] = 1 + dp[i - 1][j - 1];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  return dp[n][m];
}

int lcsSpaceOptimization(string s, string t)
{
  int n = s.size();
  int m = t.size();
  vector<int> cur(m + 1, 0), prev(m + 1, 0);
  for (int j = 0; j < m; j++)
    prev[j] = 0;
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (s[i - 1] == t[j - 1])
        cur[j] = 1 + prev[j - 1];
      else
        cur[j] = max(prev[j], prev[j - 1]);
    }
    prev = cur;
  }
  return prev[m];
}