#include <bits/stdc++.h>
using namespace std;
int makezero(int dp[], int i, int n)
{
    int j = i;
    i += j;
    for (; i <= n; i += j)
    {
        dp[i] = -1;
    }
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    int dp[n + 1];
    for (i = 2; i <= n; i++)
    {
        if (dp[i] != -1)
        {
            dp[i] = 1;
            makezero(dp, i, n);
        }
    }
    for (i = 2; i <= n; i++)
    {
        if (dp[i] != -1)
            cout << i << ' ';
    }
    return 0;
}