#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, s[1001], n, N, dp[1001][1001], k, a;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n;
        for (j = 0; j < n; j++)
        {
            cin >> s[j];
            dp[j][0] = 1;
        }
        dp[n][0] = 1;
        cin >> N;
        for (j = 1; j <= N; j++)
        {
            dp[0][j] = 0;
        }
        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= N; k++)
            {
                if (k - s[j - 1] >= 0)
                    a = dp[j][k - s[j - 1]];
                else
                    a = 0;
                dp[j][k] = dp[j - 1][k] + a;
            }
        }
        cout << dp[n][N] << endl;
    }
    return 0;
}