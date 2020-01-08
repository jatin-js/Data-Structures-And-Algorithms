#include <bits/stdc++.h>
using namespace std;
int maximum(int, int);

int main()
{
    int t, i, n, j;
    int value[1001], weight[1001];
    int dp[1001][1001];
    int W;

    cin >> t;
    for (int k = 0; k < t; k++)
    {
        cin >> W;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> weight[i] >> value[i];
        }

        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= W; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
                else if (weight[i - 1] <= j)
                    dp[i][j] = maximum(dp[i - 1][j], value[i - 1] + dp[i - 1][j - weight[i - 1]]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        cout << dp[n][W] << endl;
    }
    return 0;
}

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}