#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, k, n, sum;
    int set[1001];
    int dp[1001][1001];

    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> sum;
        for (j = 1; j <= n; j++)
        {
            cin >> set[j];
            dp[j][0] = 1;
        }

        dp[0][0] = 1;
        for (j = 1; j <= sum; j++)
        {
            dp[0][j] = 0;
        }

        for (j = 1; j <= n; j++)
        {
            for (k = 1; k <= sum; k++)
            {
                if (dp[j - 1][k] == 1 || ((k - set[j]) >= 0 && dp[j - 1][k - set[j]] == 1))
                {
                    dp[j][k] = 1;
                }
                else
                    dp[j][k] = 0;
            }
        }
        cout << dp[n][sum] << endl;
    }
    return 0;
}