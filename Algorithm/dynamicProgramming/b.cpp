#include <bits/stdc++.h>
using namespace std;
long long int maximum(long long int, long long int);

int main()
{
    long long int t, i, n, j;
    long long int W;

    cin >> t;
    for (long long int k = 0; k < t; k++)
    {
        cin >> W;
        cin >> n;
        long long int *weight = new long long int[n];
        long long int *value = new long long int[n];
        long long int **dp = new long long int *[n + 1];
        for (i = 0; i <= n; i++)
        {
            dp[i] = new long long int[W + 1];
        }
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

long long int maximum(long long int a, long long int b)
{
    if (a > b)
        return a;
    else
        return b;
}